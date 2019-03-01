// Fill out your copyright notice in the Description page of Project Settings.

#include "FPStefLib.h"


float UFPStefLib::pythag(FVector vec1, FVector vec2)
{
	/*
	Theory for collision detection was based off of the following extract from
	http://www.bbc.co.uk/schools/gcsebitesize/maths/geometry/pythagoras3drev1.shtml

	First use Pythagoras' theorem in triangle ABC to find length AC.
	AC2 = 62 + 22
	AC = sqrt -> 40
	You do not need to find the root as we will need to square it in the following step. Next we use Pythagoras' theorem in triangle ACF to find length AF.
	AF2 = AC2 + CF2
	AF2 = 40 + 32
	AF = sqrt -> 49
	AF = 7
	*/

	float distance, acs, afs, x, y, z;

	x = vec1.X - vec2.X;
	y = vec1.Y - vec2.Y;
	z = vec1.Z - vec2.Z;

	acs = (x*x) + (z*z);
	afs = (acs + (y*y));
	distance = sqrt(afs);

	return distance;
}


