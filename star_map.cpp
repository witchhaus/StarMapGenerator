#include "star_map.h"

Pixel::Pixel()
{
  x = 0;
  y = 0;
  symbol = '*';
  color = 0;
  is_enabled = true;
}

Pixel::~Pixel()
{

}

StarMap::StarMap()
{
  map = nullptr;
  map_width = 0;
  map_height = 0;
}

// map is a 2D array of the form map[width][height]
StarMap::~StarMap()
{

  if (map != nullptr)
  {
    // For each column
    for (int i = 0; i < map_width; ++i)
    {
      delete[] map[i];
      map[i] = nullptr;
    }

    delete[] map;
    map = nullptr;
  }
}
