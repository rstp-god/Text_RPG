#include "Hero.h"
#include <string>
#include <Windows.h>
#include <iostream>

#define hp 100
#define armor 10
#define stamina 120
#define money 0
#define x 15  //coordinate
#define y 20  //coordinate 
#define partner false
#define value 15
#define acc_procent_default 50 
#define head_procent_default 25
#define hp_heal_default 10 
#define eloquence_default 30

Hero::Hero(std :: string name)
{
	Name = name; 
	HP = hp; 
	Armor = armor; 
	Stamina = stamina; 
	Money = money; 
	coordinate[0] = x; 
	coordinate[1] = y; 
	Value_attack = value; 
	Partner = partner; 
	hero_ch.acc_procent = acc_procent_default; 
	hero_ch.head_procent = head_procent_default; 
	hero_ch.hp_heal = hp_heal_default; 
	hero_ch.eloquence = eloquence_default;
	gamer.law = 0; 
	gamer.Karma = 0; 
	gamer.rogue_respect = 0;
	for (int i = 0; i < number_quests; i++)
	{
		quests[i].complete = false; 
		quests[i].description = ""; 
		quests[i].reward = 0; 
	}
}

void Hero::print_info() const
{
	std::cout << "Name " << Name << std::endl
		<< "HP " << HP << std::endl
		<< "Armor " << Armor << std::endl
		<< "Stamina " << Stamina << std::endl
		<< "Money " << Money << std::endl
		<< "Coordinate (" << coordinate[0] << "," << coordinate[1] << ")" << std::endl
		<< "Damage " << Value_attack << std::endl
		<< "Partner " << Partner << std::endl
		<< "Reputation :" << std::endl
		<< "     a)Law " << gamer.law << std::endl
		<< "     b)Karma " << gamer.Karma << std::endl
		<< "     c)Rogue " << gamer.rogue_respect << std::endl
		<< "Characteristic :" << std::endl
		<< "     1)Acc Procent " << hero_ch.acc_procent << std::endl
		<< "     2)Head Procent " << hero_ch.head_procent << std::endl
		<< "     3)HP Heal " << hero_ch.hp_heal << std::endl
		<< "     4)Eloquence " << hero_ch.eloquence << std::endl; 
	for (int i = 0; i < number_quests; i++)
	{
	std::cout << i << " quest" << std::endl
		<< "     Complete " << quests[i].complete << std::endl
		<< "     desc " << quests[i].description << std::endl
		<< "     rew " << quests[i].reward << std::endl;
	}
}

void Hero::equipment_fill()
{
	// fill heal mas
	Bandages h1;
	First_aid_kit h2;
	Tincute h3; 
	main_eq.eq1[0] = h1;
	main_eq.eq1[1] = h2; 
	main_eq.eq1[2] = h3; 
	//fill weapon mas
	Revolver w1; 
	Rifle w2; 
	Knife w3;
	main_eq.eq2[0] = w1; 
	main_eq.eq2[1] = w2;
	main_eq.eq2[2] = w3;
	//fill Ammo mas
	Revolver_ammo a1; 
	Rifle_ammo a2;
	main_eq.eq3[0] = a1; 
	main_eq.eq3[1] = a2; 
	//fill Alcohol mas
	Whiskey al1; 
	Tequila al2; 
	Beer al3; 
	main_eq.eq4[0] = al1; 
	main_eq.eq4[1] = al2;
	main_eq.eq4[2] = al3;
	//fill Food mas
	Chiken f1; 
	Jerky f2; 
	Bread f3; 
	Apple f4; 
	Pear f5;
	Banana f6; 
	Onion f7; 
	Tomate f8; 
	Cucumber f9; 
	main_eq.eq5[0] = f1; 
	main_eq.eq5[1] = f2;
	main_eq.eq5[2] = f3;
	main_eq.eq5[3] = f4;
	main_eq.eq5[4] = f5;
	main_eq.eq5[5] = f6;
	main_eq.eq5[6] = f7;
	main_eq.eq5[7] = f8;
	main_eq.eq5[8] = f9;
}

void Hero::equipment_show()
{
	std::cout << "Heal Items : " << std::endl;
	for (int i = 0; i < number_of_heal_items; i++)
	{
		std::cout << main_eq.eq1[i]; 
		std::cout << std::endl; 
	}
	std :: cout << std :: endl; 
	std :: cout << "Weapons : " << std :: endl; 
	for (int i = 0; i < number_of_weapons; i++)
	{
		std::cout << main_eq.eq2[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Ammo : " << std::endl; 
	for (int i = 0; i < number_type_of_ammo; i++)
	{
		std::cout << main_eq.eq3[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Alcohol : " << std::endl;
	for (int i = 0; i < number_type_of_alcohol; i++)
	{
		std::cout << main_eq.eq4[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Food : " << std::endl;
	for (int i = 0; i < number_type_of_food; i++)
	{
		std::cout << main_eq.eq5[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Hero:: equipment_heal_show()
{
	std::cout << "Heal Items : " << std::endl;
	for (int i = 0; i < number_of_heal_items; i++)
	{
		std::cout << i << ")" << std::endl;
		std::cout << main_eq.eq1[i];
		std::cout << "Press " << i << " to use" << std::endl;
	}
	std::cout << "Press 9 to exit" << std::endl;
}
void Hero::equipment_weapon_show()
{
	std::cout << "Weapons : " << std::endl;
	for (int i = 0; i < number_of_weapons; i++)
	{
		std::cout << i << ")" << std::endl; 
		std::cout << main_eq.eq2[i];
		std::cout << std::endl;
	}
}
void Hero::equipment_ammo_show()
{
	std::cout << "Ammo : " << std::endl;
	for (int i = 0; i < number_type_of_ammo; i++)
	{
		std::cout << i << ")" << std::endl;
		std::cout << main_eq.eq3[i];
		std::cout << std::endl;
	}
}
void Hero::equipment_alcohol_show()
{
	std::cout << "Alcohol : " << std::endl;
	for (int i = 0; i < number_type_of_alcohol; i++)
	{
		std::cout << i << ")" << std::endl;
		std::cout << main_eq.eq4[i];
		std::cout << "Press " << i << " to use" << std::endl;
	}
	std::cout << "Press 9 to exit" << std::endl;
}
void Hero::equipment_food_show()
{
	std::cout << "Food : " << std::endl;
	for (int i = 0; i < number_type_of_food; i++)
	{
		std::cout << i << ")" << std::endl;
		std::cout << main_eq.eq5[i];
		std::cout << "Press " << i << " to use" << std::endl;
	}
	std::cout << "Press 9 to exit" << std::endl;
}

void Hero::sleep(double factor , double hours)
{
	Sleep((hours / factor) * 1000); 
}

double Hero::attack(double dmg) const
{
	return Value_attack+dmg; 
}

void Hero::heal(int heal_value) 
{ 
	if (HP += heal_value > 100)
	{
		HP = 100;
	}
	else
		HP += heal_value; 
}

int Hero::coordinate_x() const
{
	return coordinate[0]; 
}

int Hero::coordinate_y() const
{
	return coordinate[1];
}

void Hero::stamina_regen(int regen)
{
	if (Stamina + regen >= 120)
	{
		Stamina = 120;
	}
	else
		Stamina += regen; 
}

void Hero::damage_hero(double dmg)
{
	HP -=(int)dmg; 
}

void Hero::stamina_consumption()
{
	Stamina -= 50; 
}

int Hero::get_hp()
{
	return HP; 
}

void Hero::fill()
{
	int i=0;
	while (i <= 20) //заполнение хилки 
	{
		main_eq.eq1[0].add(); 
		main_eq.eq1[1].add(); 
		main_eq.eq1[2].add(); 
		i++; 
	}
	i = 0; 
	while (i <= 20) //заполнение патронов 
	{
		main_eq.eq3[0].ammo_add();
		main_eq.eq3[1].ammo_add();
		i++; 
	}
	i = 0; 
	while (i <= 5)
	{
		main_eq.eq5[0].food_add(); 
		main_eq.eq5[1].food_add();
		main_eq.eq5[2].food_add();
		main_eq.eq5[3].food_add();
		main_eq.eq5[4].food_add();
		main_eq.eq5[5].food_add();
		main_eq.eq5[6].food_add();
		main_eq.eq5[7].food_add();
		main_eq.eq5[8].food_add();
		i++; 
	}
}

// todo: проверка по значению не может быть бесконечным
void Hero::characteristic_up ()
{
	std::cout << "1) Up acc" << std :: endl; 
	std::cout << "2) Up head" << std::endl;
	std::cout << "3) Up hp" << std::endl;
	std::cout << "4) Up eloquence" << std::endl;
	int choise; 
	std::cin >> choise; 
	switch (choise)
	{
	case 1: 
		hero_ch.acc_procent++; 
		break; 
	case 2:
		hero_ch.head_procent++; 
		break;
	case 3:
		hero_ch.hp_heal++; 
		break; 
	case 4:
		hero_ch.eloquence++; 
		break; 
	}
}
