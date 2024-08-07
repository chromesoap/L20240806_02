#pragma once
class AActor
{
public: //interface
	int X;
	int Y;

	AActor();
	~AActor();

	void Move();
	void Initialize();

	int GetHP() { return HP; }
	void SetHP(int NewHP) 
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
protected: 
//private:

	int HP;
};

//					����					���
//public			�ƹ��볪 ����			���
//protected			����					���
//private			����					���X

