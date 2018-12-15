#include "map.h"
#include "Enemy.h"
#include "Hero.h"
#include "map.h"
#include "Item.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Enemy *training; 
	Ninja en(20,0,0,0); 
	Hero gamer("Savage"); 
	Apple take; 
	Bandages ban; 
	Revolver r;
	gamer.print_info();
	cout << "I'am need healing!" << endl; 
	gamer.heal(ban.use()); 
	gamer.print_info();
	training = &en;
	training->print_stats(); 
	cout << "Attack Ninja!" << endl; 
	training->damage(gamer.attack(r.dmg_add())); 
	training->print_stats(); 
	cout << "Stamina" << endl; 
	gamer.stamina_consumption(); 
	gamer.print_info();
	cout << "Regen stamina" << endl; 
	gamer.stamina_regen(take.use()); 
	cout << "test" << endl; 
	gamer.print_info(); 
	return 0;
}