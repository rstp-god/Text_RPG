#include <string>
#include <iostream>
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
	Heal_items() {}; 
	Heal_items(std::string,int,int,int,double);
	~Heal_items();
	int use();
	void add(); 
	friend std :: ostream & operator << (std :: ostream & , const Heal_items &);
	void print_name(); 
	void print_number();
	void print_heal_value(); 
	void print_time_usage(); 
	void print_price(); 
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

//ammo 

class Ammo :public Item
{
	std::string Name;
	int number;
	short int type;
	int price;
public:
	Ammo() {};
	Ammo(std::string, int, short int, int);
	~Ammo();
	int get_number() const; 
	void ammo_add();
	void ammo_minus();
	friend std::ostream & operator << (std::ostream &, const Ammo &);
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


//weapon 

class Weapon :public Item 
{
	std::string Name; 
	double additional_dmg; 
	short int ammo_type; 
	int price; 
public:
	Weapon() {}
	Weapon(std::string, double, short int,int);
	~Weapon();
	short int get_ammo_type(); 
	double dmg_add() const; 
	friend std::ostream & operator << (std::ostream &, const Weapon &);
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

class Knife : public Weapon
{
public: 
	Knife(); 
	~Knife();
};


//sleep

class Alcohol :public Item
{
	std::string Name; 
	double spirt_procent; 
	int price;
public:
	Alcohol() {}; 
	Alcohol(std::string,double,int);
	~Alcohol();
	int use(); 
	friend std::ostream & operator << (std::ostream &, const Alcohol &);
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
	int price; 
public:
	Food() {}
	Food(std::string,int,double,int,int);
	~Food();
	int use(); 
	void food_add(); 
	friend std::ostream & operator << (std::ostream &, const Food &);
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