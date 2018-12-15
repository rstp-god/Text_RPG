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
#define w_rife_dmg 20
#define w_rife_ammo_type 2
#define w_knife_dmg 30
#define w_knife_ammo_type 0
#define a_revolver 0
#define a_rifle 0
#define a_revolver_type 1
#define a_rifle_type 2
#define whiskey_spirt_procent 50
#define tequila_spirt_procent 45
#define beer_spirt_procent 10
#define ch_stamina_regen 10
#define ch_time 5
#define ch_number 0
#define je_stamina_regen 15
#define je_time 5
#define je_number 0
#define br_stamina_regen 7
#define br_time 3
#define br_number 0
#define ap_stamina_regen 5
#define ap_time 2
#define ap_number 0
#define pe_stamina_regen 5
#define pe_time 2
#define pe_number 0
#define ba_stamina_regen 5
#define ba_time 2
#define ba_number 0
#define on_stamina_regen 6
#define on_time 2
#define on_number 0
#define to_stamina_regen 6
#define to_time 2
#define to_number 0
#define cu_stamina_regen 6
#define cu_time 2
#define cu_number 0

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

Bandages::Bandages() : Heal_items("Bandage", 0, h_bandage_price,h_bandage_value,h_bandage_time) {}
Bandages::~Bandages() {}; 

First_aid_kit::First_aid_kit() : Heal_items("First aid kit", 0, h_first_kit_price, h_first_kit_value, h_first_kit_time) {}
First_aid_kit::~First_aid_kit() {}

Tincute::Tincute() : Heal_items("Tincute", 0, h_tincute_price, h_tincute_value, h_tincute_time) {}
Tincute::~Tincute() {}


// WEAPON
Weapon::Weapon(std::string nm, double dmg, short int amm)
{
	Name = nm; 
	additional_dmg = dmg; 
	ammo_type = 0; 
}

Weapon::~Weapon() {}

double Weapon:: dmg_add()
{
	return additional_dmg; 
}

Revolver::Revolver() :Weapon("Revolver", w_revolver_dmg, w_revolver_ammo_type) {}
Revolver::~Revolver() {}

Rifle::Rifle() : Weapon("Rifle", w_rife_dmg, w_rife_ammo_type) {}
Rifle::~Rifle() {}

Knife::Knife() : Weapon("Knife", w_knife_dmg, w_knife_ammo_type) {}
Knife::~Knife() {}


//AMMO
Ammo::Ammo(std::string nm, int kol,short int t)
{
	Name = nm; 
	number = kol; 
	type = t; 
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

Revolver_ammo::Revolver_ammo() : Ammo("Revolver Ammo", a_revolver, a_revolver_type) {}
Revolver_ammo::~Revolver_ammo() {}

Rifle_ammo::Rifle_ammo() : Ammo("Rifle Ammo", a_rifle, a_rifle_type) {}
Rifle_ammo::~Rifle_ammo() {}

//SLEEP
Alcohol::Alcohol(std::string nm, double spirt)
{
	Name = nm; 
	spirt_procent = spirt; 
}

Alcohol::~Alcohol() {}

double Alcohol::use()
{
	if (spirt_procent < 48)
	{
		if (spirt_procent > 15)
		{
			return 1.5;
		}
		else
			return 1.2; 
	}
	else
		return 2;
}

Whiskey::Whiskey() : Alcohol("Whiskey", whiskey_spirt_procent) {}
Whiskey::~Whiskey() {}

Tequila::Tequila() : Alcohol("Tequila", tequila_spirt_procent) {}
Tequila::~Tequila() {}

Beer::Beer() : Alcohol("Beer", beer_spirt_procent) {}
Beer::~Beer() {}

//FOOD

Food::Food(std::string nm, int s, double time, int n)
{
	Name = nm; 
	Stamina_regen_value = s; 
	time_usage = time; 
	number = n; 
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


Chiken::Chiken() : Food("Chiken", ch_stamina_regen, ch_time, ch_number) {}
Chiken::~Chiken() {}

Jerky::Jerky() : Food("Jerky", je_stamina_regen, je_time, je_number) {}
Jerky::~Jerky() {}

Bread::Bread() : Food("Bread", br_stamina_regen, br_time, br_number) {}
Bread::~Bread() {}

Apple::Apple() : Food("Apple", ap_stamina_regen, ap_time, ap_number) {}
Apple::~Apple() {}

Pear::Pear() : Food("Pear", pe_stamina_regen, pe_time, pe_number) {}
Pear::~Pear() {}

Banana::Banana() : Food("Banana", ba_stamina_regen, ba_time, ba_number) {}
Banana::~Banana() {}

Onion::Onion() : Food("Onion", on_stamina_regen, on_time, on_number) {}
Onion::~Onion() {}

Tomate::Tomate() : Food("Tomate", to_stamina_regen, to_time, to_number) {}
Tomate::~Tomate() {}

Cucumber::Cucumber() : Food("Cucumber", cu_stamina_regen, cu_time, cu_number) {}
Cucumber::~Cucumber() {}