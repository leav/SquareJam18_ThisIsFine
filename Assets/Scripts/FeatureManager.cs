using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FeatureManager : MonoBehaviour
{
	[SerializeField]
	BlockGenerator blockGenerator;
	[SerializeField]
	Feature featurePrefab;
	List<Feature> features = new List<Feature> ();

	List<List<Vector2Int>> positionPresets = new List<List<Vector2Int>> ();

	// Use this for initialization
	void Start ()
	{
		//CreatePositionPresets ();
	}

	void CreatePositionPresets ()
	{
		// 1
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			positionPresets.Add (list);
		}
		// 2
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (0, -1));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (1, 0));
			positionPresets.Add (list);
		}
		// 3
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (0, -1));
			list.Add (new Vector2Int (0, -2));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (0, -1));
			list.Add (new Vector2Int (1, -1));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (0, -1));
			list.Add (new Vector2Int (1, 0));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (1, 0));
			list.Add (new Vector2Int (1, -1));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (-1, -1));
			list.Add (new Vector2Int (0, -1));
			positionPresets.Add (list);
		}
		{
			var list = new List<Vector2Int> ();
			list.Add (new Vector2Int (0, 0));
			list.Add (new Vector2Int (1, 0));
			list.Add (new Vector2Int (2, 0));
			positionPresets.Add (list);
		}
	}

	// Update is called once per frame
	void Update ()
	{
		
	}

	public IEnumerable<Feature> GetFeatures ()
	{
		return features;
	}

	void Add (Feature feature)
	{
		features.Add (feature);
		feature.transform.SetParent (this.transform);
	}

	public void Pop() {
		if (features.Count == 0) {
			return;
		}
		var feature = features [0];
		features.RemoveAt (0);
		feature.gameObject.SetActive (false);
		Destroy (feature.gameObject);
	}

	public int Count() {
		return features.Count;
	}

	float padding = 1;

	public void RefreshPositions ()
	{
		var position = new Vector3 ();
		foreach (var feature in features) {
			feature.transform.localScale = Vector3.one;
			feature.transform.localPosition = position;
			position.x += feature.Width () + padding;
		}
	}

	public Feature Generate (int size)
	{
		var featureObject = Instantiate (featurePrefab.gameObject);
		var feature = featureObject.GetComponent<Feature> ();
		Add (feature);

		if (size == 0) {
			RefreshPositions ();
			return feature;
		}

		var presetsOfSize = new List<List<Vector2Int>> ();
		foreach (var preset in positionPresets) {
			if (preset.Count == size) {
				presetsOfSize.Add (preset);
			}
		}
		if (presetsOfSize.Count == 0) {
			throw new System.Exception (string.Format ("cannot find preset of size {0}", size));
		}
			
		var selectedPreset = presetsOfSize [Random.Range (0, presetsOfSize.Count)];
		foreach (var position in selectedPreset) {
			var block = blockGenerator.GenerateBlock ();
			block.X = position.x;
			block.Y = position.y;
			feature.AddBlock (block);
		}
			
		RefreshPositions ();
		return feature;
	}

	public Feature Generate2 (int size)
	{
		Debug.Log (string.Format ("Generate2({0})", size));

		var featureObject = Instantiate (featurePrefab.gameObject);
		var feature = featureObject.GetComponent<Feature> ();
		Add (feature);
		List<Vector2Int> openList = new List<Vector2Int> ();
		openList.Add (Vector2Int.zero);
		BlockMap closeList = new BlockMap ();
		var count = size;
		while (count> 0) {
			if (openList.Count == 0) {
				throw(new System.Exception ("unexpected running out of open list"));
			}
			var position = openList [Random.Range (0, openList.Count)];
			openList.Remove (position);
			var block = blockGenerator.GenerateBlock ();
			block.X = position.x;
			block.Y = position.y;
			feature.AddBlock (block);
			closeList.Add (block);
			ExplorePosition (position.x + 1, position.y, closeList, openList);
			ExplorePosition (position.x - 1, position.y, closeList, openList);
			ExplorePosition (position.x, position.y + 1, closeList, openList);
			ExplorePosition (position.x, position.y - 1, closeList, openList);
			count--;
		}
		RefreshPositions ();
		feature.Income = 0;
		for (int i = 1; i <= size; i++) {
			feature.Income += size;
		}
		feature.SLAEffect = 100;
		return feature;
	}

	static void ExplorePosition (int x, int y, BlockMap closeList, List<Vector2Int> openList)
	{
		if (closeList.Get (x, y) == null) {
			Debug.Log (string.Format ("adding {0} {1} to open list", x, y));
			openList.Add (new Vector2Int (x, y));
		}
	}
}
