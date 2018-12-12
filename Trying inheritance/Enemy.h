#pragma once

class Enemy
{
protected: 
	int HP; 
	int armor; 
	double Value_attack; 
public:
	Enemy(int s = 0, double value = 0, int a = 0) :HP(s), Value_attack(value),armor(a) {}; 
	~Enemy();
	virtual double attack() = 0; 
};

class Ninja : public Enemy 
{
	int attack_speed; 
public:
	Ninja(int s = 0, double value = 0, int k = 1, int a = 0) : Enemy(s, value, a), attack_speed(k) {};
	~Ninja();
	double attack() const; 
};


class Trasher  :public Enemy
{
	int force_factor; 
public:
	Trasher(int s = 0, double value = 0, int k = 1, int a = 0) : Enemy (s, value, a), force_factor(k) {} ;
	~Trasher();
	double attack() const;
};

class Thinker : public Enemy
{
	double crit_chance; 
	int crit_factor; 
public:
	Thinker(int s = 0, double value = 0, int k = 1, double c = 1, int a = 0) : Enemy(s, value, a), crit_factor(k), crit_chance(c) {};
	~Thinker();
	double attack() const; 
};

class Boss : public Enemy 
{
	int hp_factor; 
	int dmg_factor; 
public:
	Boss(int s = 0, double value = 0, int k = 1, int a = 0,int d = 0) : Enemy(s, value, a), hp_factor(k),dmg_factor(d)  { HP *= hp_factor;};
	~Boss();
	double attack() const; 
	double special_attack() const; 
};
