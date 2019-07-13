# StarMapGenerator
Procedurally generate a unicode-based star map

## Features
- Generate the map for a given size sky
- Select from a bucket of unicode characters to use when generating the map
- Allow for rules to apply to the generation algorithm (as opposed to pure random generation)
- Support animation <stretch goal>


## Data
- Collection of unicode characters to use for creating the map
- Pixels of map that are generated
- Generation algorithm parameters


## Data Structures

Pixel class:
- coordinate
- symbol
- color
- is_enabled
- anything else

< Possible, but not necessary>
Star entity classes:
- Entity type (planet, nebula, small distant star, etc)
- Geometry (to define how it would be drawn on to the star map)
- group / relationship (is part of cluster, does it orbit something, etc)
- behavior
- animation
- coordinate

Star map class:
- 2D array of Pixels
- Geometry collection (potentially)
- Group / relationship collection (potentially)

Star map generator class:
- different algorithm functions for drawing
- ...
