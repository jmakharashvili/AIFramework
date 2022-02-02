#include "Grid.h"

template<class T>
Grid<T>::Grid(int width, int height, float tileSize, Vector2D originPos, std::function<void(T)> p)
	: m_width(width), m_height(height), m_tileSize(tileSize), m_originPos(originPos)
{

}

template <class T>
Grid<T>::~Grid()
{

}