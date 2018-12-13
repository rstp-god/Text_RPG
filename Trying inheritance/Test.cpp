#include "Enemy.h"
#include "Hero.h"
#include "map.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Enemy *training;
	Ninja en1(1, 10, 2, 1);
	training = &en1;
	training->print_stats();
	cout << "Damage " << training->attack() << endl;
	Trasher en2(1, 20, 3, 1);
	training = &en2;
	training->print_stats();
	cout << "Damage " << training->attack() << endl;
	Thinker en3(1, 5, 2, 15, 1);
	training = &en3;
	training->print_stats();
	cout << "Damage " << training->attack() << endl;
	Boss en4(1, 25, 5, 1, 3);
	training = &en4;
	training->print_stats();
	cout << "Damage " << training->attack() << endl;
	cout << "Special damage " << en4.special_attack() << endl;
	training = &en3;
	string name;
	cout << "Character Name ";
	getline(cin, name);
	Hero hero(name);
	hero.print_info();
	cout << hero.attack() << endl;
	hero.damage_hero(10);
	cout << "Damaged" << endl;
	hero.print_info();
	hero.heal(15);
	cout << "Heal" << endl;
	hero.print_info();
	cout << "Stamina is gone" << endl;
	hero.stamina_consumption();
	hero.print_info();
	cout << "Stamina regen" << endl;
	hero.stamina_regen(60);
	hero.print_info();
	cout << "attacked by mob" << endl;
	hero.damage_hero(training->attack());
	hero.print_info();
	cout << "attacked by hero" << endl;
	training->damage(hero.attack());
	training->print_stats();
	system("pause");
	return 0;
}