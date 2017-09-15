#pragma once

class Zombies
{
private:
	Zombies();
	int mMaxHealth = 1000;
	float mAttackPower=20;
	int mLevelCap = 100;
public:
	char mName[255];
	int mLevel=100;
	int mHealth = 1000;
	void  mNewHealth(int mHealth, float mAttackPower);
};

