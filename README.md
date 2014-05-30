dice
====

A small library based entirely in cstdlib which provides a standard
set of ttrpg dice (**d2**, **d3**, **d4**, **d6**, **d8**, **d10**,
**d12**, **d100**, and **d20**) as functions.

Examples:

**Roll 1d20**

    int result = d20.roll(1);

**Roll 3d6**

    int result = d6.roll(3);

**Calculate Damage for Weapon with 1d12 + 5 normal damage + 2d4 fire damage**

    int normal = d12.roll(1) + 5;
	int fire = d4.roll(2);
	int result = normal + fire;
	std::cout << "Total Damage: " << result << ", with " << fire << " being fire damage."

