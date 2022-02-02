#pragma once
#include "Vector2D.h"
#include <functional>

template<class T>
class Grid
{
private:
	int m_width;
	int m_height;
	float m_tileSize;
	Vector2D m_originPos;
public:
	Grid(int width, int height, float tileSize, Vector2D originPos, std::function<void(T)> p);
	~Grid();

private:

};
