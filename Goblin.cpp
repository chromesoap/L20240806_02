#include "Goblin.h"
#include <iostream>
#include <cstdlib>
using namespace std;

AGoblin::AGoblin()
{
}

AGoblin::~AGoblin()
{
}

void AGoblin::Move()
{
	X = rand() % 10 + 1;
	Y = rand() % 10 + 1;

	//cout << "���� ��ġ : (" << X << ", " << Y << ")" << endl;

}
