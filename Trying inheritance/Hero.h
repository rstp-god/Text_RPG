#pragma once
class hero
{
protected:
	int lvl;
	double HP;
	double Value_attack;
public:
	hero(int s = 0, double value = 0) :HP(s), Value_attack(value) {};
	~hero();
	virtual double attack() = 0;
};

class Ninja : public hero
{
	int attack_speed;
public:
	Ninja(int s = 0, double value = 0, int k = 1) : hero(s, value), attack_speed(k) {};
	~Ninja();
	double attack() const;
};


class Trasher :public hero
{
	int force_factor;
public:
	Trasher(int s = 0, double value = 0, int k = 1) : hero(s, value), force_factor(k) {};
	~Trasher();
	double attack() const;
};

class Thinker : public hero
{
	double crit_chance;
	int crit_factor;
public:
	Thinker(int s = 0, double value = 0, int k = 1, double c = 1) : hero(s, value), crit_factor(k), crit_chance(c) {};
	~Thinker();
	double attack() const;
};