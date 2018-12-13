#include <string>
#pragma once
 class Enemy
{
protected:
	std :: string Name;
	int HP; 
	int armor; 
	double Value_attack; 
public:
	Enemy(int s = 0, double value = 0, int a = 0) : HP(s), Value_attack(value), armor(a) {Name = "0";};
	~Enemy() {};
	virtual double attack() const =0 ; 
    void print_stats() const; 
};

class Ninja : public Enemy 
{
	double attack_speed; 
public:
	Ninja(int s = 0, double value = 0, double k = 0, int a = 0) : Enemy(s, value, a), attack_speed(k) { Name = "Ninja";};
	~Ninja() {};
	double attack() const; 
	
};


class Trasher  :public Enemy
{
	int force_factor; 
public:
	Trasher(int s = 0, double value = 0, int k = 1, int a = 0) : Enemy(s, value, a), force_factor(k) { Name = "Trasher";};
	~Trasher() {};
	double attack() const;
	
};

class Thinker : public Enemy
{
	double crit_chance; 
	int crit_factor; 
public:
	Thinker(int s = 0, double value = 0, int k = 1, double c = 1, int a = 0) : Enemy(s, value, a), crit_factor(k), crit_chance(c) { Name = "Thinker";};
	~Thinker() {};
	double attack() const; 
	
};

class Boss : public Enemy 
{
	int hp_factor; 
	int dmg_factor; 
public:
	Boss(int s = 0, double value = 0, int k = 1, int a = 0, int d = 0) : Enemy(s, value, a), hp_factor(k), dmg_factor(d) { Name="Boss";HP *= hp_factor; };
	~Boss() {};
	double attack() const; 
	double special_attack() const; 
	
};
