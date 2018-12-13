#include "Enemy.h"
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std; 

int main()
{
	Enemy *trainig; 
	Ninja en1(1, 10, 2, 1); 
	trainig = &en1; 
	trainig->print_stats();
	cout << "Damage " << trainig->attack()<< endl;
	Trasher en2(1, 20, 3, 1); 
	trainig = &en2; 
	trainig->print_stats();
	cout << "Damage " << trainig->attack() << endl; 
	Thinker en3(1, 5, 2, 15, 1); 
	trainig = &en3; 
	trainig->print_stats();
	cout << "Damage " << trainig->attack() << endl; 
	Boss en4(1, 25, 5, 1, 3); 
	trainig = &en4; 
	trainig->print_stats();
	cout << "Damage " << trainig->attack() << endl; 
	cout << "Special damage " << en4.special_attack() << endl;
	string name; 
	cout << "Character Name"; 
	cin >> name; 
	Hero hero(name); 
	hero.print_info();
	cout << hero.attack() << endl; 
	hero.damage_hero(10);
	cout << "Damaged" << endl; 
	hero.print_info(); 
	hero.heal(15); 
	cout << "Heal" << endl; 
	hero.print_info(); 
	cout << "Stamina is gone"<< endl; 
	hero.stamina_consumption(); 
	hero.print_info(); 
	cout << "Stamina regen" << endl; 
	hero.stamina_regen(60); 
	hero.print_info(); 
	system("pause"); 
	return 0; 
}