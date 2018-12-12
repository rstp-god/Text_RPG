#pragma once
class Enemy
{
protected: 
	int HP; 
	double Value_attack; 
public:
	Enemy(int s = 0, double value = 0) :HP(s), Value_attack(value) {}; 
	~Enemy();
	virtual double attack() = 0; 
};

class Ninja : public Enemy 
{
	int attack_speed; 
public:
	Ninja(int s = 0, double value = 0, int k = 1) : Enemy(s, value), attack_speed(k) {};
	~Ninja();
	double attack() const; 
};


class Trasher  :public Enemy
{
	int force_factor; 
public:
	Trasher(int s = 0, double value = 0, int k = 1) : Enemy (s, value), force_factor(k) {} ;
	~Trasher();
	double attack() const;
};

class Thinker : public Enemy
{
	double crit_chance; 
	int crit_factor; 
public:
	Thinker(int s = 0, double value = 0, int k = 1, double c = 1) : Enemy(s, value), crit_factor(k), crit_chance(c) {};
	~Thinker();
	double attack() const; 
};

class Boss : public Enemy 
{
	int hp_factor; 
public:
	Boss(int s = 0, double value = 0, int k = 1) : Enemy(s, value), hp_factor(k) { HP *= hp_factor;};
	~Boss();
	double attack() const; 
	double special_attack() const; 
};
