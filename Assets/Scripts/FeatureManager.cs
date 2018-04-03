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

	public Feature Generate2 (int size)
	{
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
			openList.Add (new Vector2Int (x, y));
		}
	}
}
