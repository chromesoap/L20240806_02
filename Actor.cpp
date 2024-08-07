#include "Actor.h"
#include <iostream>
#include <cstdlib>

using namespace std;
AActor::AActor()
{
	Initialize();
}

AActor::~AActor()
{
}



void AActor::Move()
{
	//cout << "ÀÌµ¿" << endl;
	//HP = 100;

}

void AActor::Initialize()
{
	X = 0;
	Y = 0;
}
