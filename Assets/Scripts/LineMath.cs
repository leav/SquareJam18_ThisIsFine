using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineMath
{
	const float step = 0.1f;

	public static  ICollection<Vector2Int> IntegerPoints (Vector2 a, Vector2 b)
	{
		var dir = b - a;
		var magnitude = dir.magnitude;
		dir.Normalize ();
		var points = new List<Vector2Int> ();
		int x, y;
		for (var i = 0f; i < magnitude; i += step) {
			var point = a + dir * i;
			x = Mathf.RoundToInt (point.x);
			y = Mathf.RoundToInt (point.y);
			if (points.Count == 0 || points [points.Count - 1].x != x || points [points.Count - 1].y != y) {
				points.Add (new Vector2Int (x, y));
			}
		}
		x = Mathf.RoundToInt (b.x);
		y = Mathf.RoundToInt (b.y);
		if (points.Count == 0 || points [points.Count - 1].x != x || points [points.Count - 1].y != y) {
			points.Add (new Vector2Int (x, y));
		}
		return points;
	}
}
