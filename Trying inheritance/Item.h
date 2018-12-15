#include <string>
#pragma once

class Item
{
public:
	Item();
	~Item();
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
	int number; 
	std::string Name; 
	int heal_value; 
	double time_usage;
	int price;
public:
	Heal_items(std::string,int,int,int,double);
	~Heal_items();
	int use();
	void add(); 
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
	std::string Name; 
	double additional_dmg; 
	short int ammo_type; 
public:
	Weapon(std::string,double,short int);
	~Weapon();
	double dmg_add(); 
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
	std::string Name; 
	int number; 
	short int type; 
public:
	Ammo (std ::string,int,short int);
	~Ammo ();
	void ammo_add(); 
	void ammo_minus(); 
};

class Revolver_ammo :public Ammo
{
public:
	Revolver_ammo();
	~Revolver_ammo();
};

class Rifle_ammo : public Ammo 
{
public:
	Rifle_ammo();
	~Rifle_ammo();
};

//sleep

class Alcohol :public Item
{
	std::string Name; 
	double spirt_procent; 
public:
	Alcohol(std::string,double);
	~Alcohol();
	double use(); 
};

class Whiskey :public Alcohol
{
public:
	Whiskey();
	~Whiskey();
};

class Tequila : public Alcohol
{
public:
	Tequila();
	~Tequila();
};

class Beer :public Alcohol
{
public:
	Beer();
	~Beer();
};

//quest items

/*
class Quest_items : public Item
{
	
public:
	Quest_items();
	~Quest_items();
};
*/

//food  

class Food : public Item 
{
	std::string Name; 
	int Stamina_regen_value; 
	double time_usage;
	int number; 
public:
	Food(std::string,int,double,int);
	~Food();
	int use(); 
	void food_add(); 
};

class Chiken :public Food
{
public:
	Chiken();
	~Chiken();
};

class Jerky :public Food
{
public:
	Jerky();
	~Jerky();
};

class Bread :public Food
{
public:
	Bread();
	~Bread();
};

class Apple :public Food
{
public:
	Apple();
	~Apple();
};

class Pear : public Food
{
public:
	Pear();
	~Pear();
};

class Banana : public Food
{
public: 
	Banana(); 
	~Banana(); 
};

class Onion : public Food
{
public:
	Onion();
	~Onion();
};

class Tomate :public Food
{
public:
	Tomate();
	~Tomate();
};

class Cucumber : public Food
{
public: 
	Cucumber(); 
	~Cucumber();
};