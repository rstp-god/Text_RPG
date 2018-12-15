#pragma once

class Item
{
	int price; 
public:
	Item();
	~Item();
	virtual int use() = 0; 
};


/*
heal - binti,aptechka,nastoika
weapon - revolver,kinzhal,vintovka
patroni - patroni revolver , patroni vintovka 
sleep - viski,beer,tequila
quest items
food - chiken,vyalinoe_myaso,bread,apple,pear,banana,onion,tomate,cucumber
*/


//heal items 

class Heal_items : public Item
{
	int heal_value; 
	double time_usage;
public:
	Heal_items();
	~Heal_items();
	int use();
};

class Bandages : public Heal_items
{
public:
	Bandages();
	~Bandages();
};


class First_aid_kit :public Heal_items
{
public:
	First_aid_kit();
	~First_aid_kit();
};

class Tincute : public Heal_items
{
public:
	Tincute();
	~Tincute();
};


//weapon 

class Weapon :public Item
{
	double additional_dmg; 
	bool ammo_type; 
public:
	Weapon();
	~Weapon();
};

class Revolver : public Weapon
{
public:
	Revolver();
	~Revolver();
};

class Rifle : public Weapon
{
public:
	Rifle();
	~Rifle();
};

class Knife :public Weapon
{
public:
	Knife();
	~Knife();
};

//ammo 

class Ammo :public Item
{
	int number; 
public:
	Ammo ();
	~Ammo ();
};

class Revolver_ammo :public Ammo
{
public:
	Revolver_ammo();
	~Revolver_ammo();
};

class Rifel_ammo : public Ammo 
{
public:
	Rifel_ammo();
	~Rifel_ammo();
};

//sleep