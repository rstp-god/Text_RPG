#include "Item.h"
#include <windows.h>
#include <string>

#define h_bandage_value  10
#define h_first_kit_value 50
#define h_tincute_value 80
#define h_bandage_time 2
#define h_first_kit_time 5
#define h_tincute_time 7
#define h_bandage_price 10
#define h_first_kit_price 25
#define h_tincute_price 50 
#define w_revolver_dmg 10 
#define w_revolver_ammo_type 1
#define w_revolver_price 100
#define w_rife_dmg 20
#define w_rife_ammo_type 2
#define w_rifle_price 100
#define w_knife_dmg 30
#define w_knife_ammo_type 0
#define w_knife_price 100
#define a_revolver 0
#define a_rifle 0
#define a_revolver_type 0
#define a_rifle_type 1
#define a_revolver_price 5
#define a_rifle_price 10
#define whiskey_spirt_procent 50
#define tequila_spirt_procent 45
#define beer_spirt_procent 10
#define whiskey_price 120
#define tequila_price 100
#define beer_price 50
#define ch_stamina_regen 10
#define ch_time 5
#define ch_number 0
#define ch_price 10
#define je_stamina_regen 15
#define je_time 5
#define je_number 0
#define je_price 12
#define br_stamina_regen 7
#define br_time 3
#define br_number 0
#define br_price 13
#define ap_stamina_regen 5
#define ap_time 2
#define ap_number 0
#define ap_price 8
#define pe_stamina_regen 5
#define pe_time 2
#define pe_number 0
#define pe_price 8
#define ba_stamina_regen 5
#define ba_time 2
#define ba_number 0
#define ba_price 7
#define on_stamina_regen 6
#define on_time 2
#define on_number 0
#define on_price 9
#define to_stamina_regen 6
#define to_time 2
#define to_number 0
#define to_price 8
#define cu_stamina_regen 6
#define cu_time 2
#define cu_number 0
#define cu_price 8
#define factor_whiskey 2
#define factor_tequila 1.5
#define factor_beer  1.2

Item::Item() {}
Item::~Item() {}
 
//HEAL

Heal_items::Heal_items(std::string nm, int value,int pe,int h, double time) 
{
	Name = nm; 
	heal_value = h; 
	time_usage = time; 
	price = pe; 
	number = value; 
}

Heal_items::~Heal_items() {}

std::ostream & operator << (std::ostream & out, const Heal_items & ptr)
{
	out << "Item name -> " << ptr.Name << std :: endl << "Item price -> " << ptr.price << std::endl << "Number -> " << ptr.number << std::endl << "HP regen " << ptr.heal_value << std::endl << "Time use (sec)" << ptr.time_usage << std::endl;
	return out; 
}

int Heal_items :: use()
{
	number--; 
	Sleep(time_usage*1000); 
	return heal_value; 
}

void Heal_items::add()
{
	number++; 
}

void Heal_items::print_name()
{
	std :: cout << Name;
}
void Heal_items::print_number()
{
	std::cout << number; 
}
void Heal_items::print_heal_value()
{
	std::cout << heal_value; 
}
void Heal_items::print_time_usage()
{
	std::cout << time_usage; 
}
void Heal_items::print_price()
{
	std::cout << price; 
}

Bandages::Bandages() : Heal_items("Bandage", 0, h_bandage_price,h_bandage_value,h_bandage_time) {}
Bandages::~Bandages() {}; 

First_aid_kit::First_aid_kit() : Heal_items("First aid kit", 0, h_first_kit_price, h_first_kit_value, h_first_kit_time) {}
First_aid_kit::~First_aid_kit() {}

Tincute::Tincute() : Heal_items("Tincute", 0, h_tincute_price, h_tincute_value, h_tincute_time) {}
Tincute::~Tincute() {}


// WEAPON
Weapon::Weapon(std::string nm, double dmg, short int amm,int p)
{
	Name = nm; 
	additional_dmg = dmg; 
	ammo_type = amm; 
	price = p; 
}

Weapon::~Weapon() {}

double Weapon:: dmg_add () const
{
	return additional_dmg; 
}

short int Weapon::get_ammo_type()
{
	return ammo_type; 
}

std::ostream & operator << (std::ostream & out, const Weapon & ptr)
{
	out << "Item name -> " << ptr.Name << std::endl << "Item price -> " << ptr.price << std::endl << "Additional dmg" << ptr.additional_dmg << std::endl << "Ammo type usage " << ptr.ammo_type << std::endl ;
	return out;
}


Revolver::Revolver() :Weapon("Revolver", w_revolver_dmg, w_revolver_ammo_type,w_revolver_price) {}
Revolver::~Revolver() {}

Rifle::Rifle() : Weapon("Rifle", w_rife_dmg, w_rife_ammo_type,w_rifle_price) {}
Rifle::~Rifle() {}

Knife::Knife() : Weapon("Knife", w_knife_dmg, w_knife_ammo_type,w_knife_price) {}
Knife::~Knife() {}


//AMMO
Ammo::Ammo(std::string nm, int kol,short int t,int p)
{
	Name = nm; 
	number = kol; 
	type = t; 
	price = p; 
}

Ammo::~Ammo() {}; 

void Ammo::ammo_add()
{
	number++; 
}

void Ammo::ammo_minus()
{
	number--; 
}

int Ammo::get_number() const
{
	return number; 
}

std::ostream & operator << (std::ostream & out, const Ammo & ptr)
{
	out << "Item name -> " << ptr.Name << std::endl << "Item price -> " << ptr.price << std::endl << "Number " << ptr.number << std::endl << "Ammo type usage " << ptr.type << std::endl;
	return out;
}


Revolver_ammo::Revolver_ammo() : Ammo("Revolver Ammo", a_revolver, a_revolver_type,a_revolver_price) {}
Revolver_ammo::~Revolver_ammo() {}

Rifle_ammo::Rifle_ammo() : Ammo("Rifle Ammo", a_rifle, a_rifle_type,a_rifle_price) {}
Rifle_ammo::~Rifle_ammo() {}

//SLEEP
Alcohol::Alcohol(std::string nm, double spirt,int p)
{
	Name = nm; 
	spirt_procent = spirt; 
	price = p; 
}

Alcohol::~Alcohol() {}

int Alcohol::use()
{
	if (spirt_procent < 48)
	{
		if (spirt_procent > 15)
		{
			return factor_tequila;
		}
		else
			return factor_beer; 
	}
	else
		return factor_whiskey;
}

std::ostream & operator << (std::ostream & out, const Alcohol & ptr)
{
	out << "Item name -> " << ptr.Name << std::endl << "Item price -> " << ptr.price << std::endl  << "Strength " << ptr.spirt_procent << std::endl;
	return out;
}

Whiskey::Whiskey() : Alcohol("Whiskey", whiskey_spirt_procent,whiskey_price) {}
Whiskey::~Whiskey() {}

Tequila::Tequila() : Alcohol("Tequila", tequila_spirt_procent,tequila_price) {}
Tequila::~Tequila() {}

Beer::Beer() : Alcohol("Beer", beer_spirt_procent,beer_price) {}
Beer::~Beer() {}

//FOOD

Food::Food(std::string nm, int s, double time, int n,int p) 
{
	Name = nm; 
	Stamina_regen_value = s; 
	time_usage = time; 
	number = n; 
	price = p; 
}

Food::~Food() {}

int Food::use()
{
	number--; 
	Sleep(time_usage * 1000); 
	return Stamina_regen_value; 
}

void Food::food_add()
{
	number++; 
}

std::ostream & operator << (std::ostream & out, const Food & ptr)
{
	out << "Item name -> " << ptr.Name << std::endl << "Item price -> " << ptr.price << std::endl << "Number of " << ptr.Name << "  " << ptr.number << std::endl << "Stamina regen " << ptr.Stamina_regen_value << std::endl << "Time use (sec)" << ptr.time_usage << std::endl;
	return out;
}



Chiken::Chiken() : Food("Chiken", ch_stamina_regen, ch_time, ch_number,ch_price) {}
Chiken::~Chiken() {}

Jerky::Jerky() : Food("Jerky", je_stamina_regen, je_time, je_number,je_price) {}
Jerky::~Jerky() {}

Bread::Bread() : Food("Bread", br_stamina_regen, br_time, br_number,br_price) {}
Bread::~Bread() {}

Apple::Apple() : Food("Apple", ap_stamina_regen, ap_time, ap_number,ap_price) {}
Apple::~Apple() {}

Pear::Pear() : Food("Pear", pe_stamina_regen, pe_time, pe_number,pe_price) {}
Pear::~Pear() {}

Banana::Banana() : Food("Banana", ba_stamina_regen, ba_time,ba_number,ba_price) {}
Banana::~Banana() {}

Onion::Onion() : Food("Onion", on_stamina_regen, on_time, on_number,on_price) {}
Onion::~Onion() {}

Tomate::Tomate() : Food("Tomate", to_stamina_regen, to_time, to_number,to_price) {}
Tomate::~Tomate() {}

Cucumber::Cucumber() : Food("Cucumber", cu_stamina_regen, cu_time, cu_number,cu_price) {}
Cucumber::~Cucumber() {}