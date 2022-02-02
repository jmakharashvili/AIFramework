#pragma once
#include "Grid.h"

class PathNode
{
private:
	int m_gCost;
	int m_hCost;
	int m_fCost;

	int m_x;
	int m_y;

	Grid<PathNode> m_grid;

	bool m_obstacle;
public:
	PathNode(int x, int y, Grid<PathNode> grid);
	~PathNode();

	inline void SetGCost(int gCost) { m_gCost = gCost; }
	inline void SetHCost(int hCost) { m_hCost = hCost; }
	inline void SetFCost() { m_fCost = m_gCost + m_hCost; }

	inline int GetGCost(int gCost) { return m_gCost; }
	inline int GetHCost(int gCost) { return m_hCost; }
	inline int GetFCost(int gCost) { return m_fCost; }
};

