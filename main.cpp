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

	Goblins.clear(); //벡터에 있는 화살표를 다 날려버리는것.


	/*
	APlayer* Player = new APlayer();
	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;

	//고블린, 슬라임, 맷돼지 몇 마리 만들지 랜덤으로
	int GoblinCount = rand() % 6;
	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;

	//일단 고블린 최대 6개 생성이니까 6개짜리 고블린을 가르킬 수 있는 포인터 배열을 생성.
	AGoblin* Gobolins[6];
	ASlime* Slimes[6];


	//위에서 받은 랜덤숫자만큼 고블린 생성
	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i] = new AGoblin;
	}

	delete Player;
	Player = nullptr; //아무값이 없음을 넣어줌. 

	for (int i = 0; i < GoblinCount; i++)
	{
		delete Goblins[i];
	}
	*/

	//update
	//ㅕㅔㅇㅁㅅㄷ


	return 0;
}