#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "Player ������" << endl;
	HP = 100;
}

APlayer::~APlayer()
{
	cout << "Player �Ҹ���" << endl;
}

void APlayer::Move()
{
	//cout << "Player �̵�" << endl;
	X = rand() % 10 + 1;
	Y = rand() % 10 + 1;

	cout << "�÷��̾� ���� ��ġ: ( " << X << " , " << Y << " )" << endl;

	
}
