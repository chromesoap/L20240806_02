#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	vector<AGoblin*> Goblins;
	Goblins.push_back(new AGoblin);

	for (int i = 0; i < 5; i++)
	{
		Goblins[i] = new AGoblin;
	}

	for (int i = 0; i < Goblins.size(); i++)
	{
		Goblins[i] = new AGoblin;
	}

	Goblins.clear(); //���Ϳ� �ִ� ȭ��ǥ�� �� ���������°�.


	/*
	APlayer* Player = new APlayer();
	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;

	//���, ������, �˵��� �� ���� ������ ��������
	int GoblinCount = rand() % 6;
	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;

	//�ϴ� ��� �ִ� 6�� �����̴ϱ� 6��¥�� ����� ����ų �� �ִ� ������ �迭�� ����.
	AGoblin* Gobolins[6];
	ASlime* Slimes[6];


	//������ ���� �������ڸ�ŭ ��� ����
	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i] = new AGoblin;
	}

	delete Player;
	Player = nullptr; //�ƹ����� ������ �־���. 

	for (int i = 0; i < GoblinCount; i++)
	{
		delete Goblins[i];
	}
	*/

	//update
	//�ŤĤ�������


	return 0;
}