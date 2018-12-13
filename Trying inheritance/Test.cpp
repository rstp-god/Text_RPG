#include "Enemy.h"
#include "map.h"
#include <iostream>
#include <string>
using namespace std; 

int main()
{
	Enemy *trainig; 
	Ninja en1(1, 10, 2, 1); 
	trainig = &en1; 
	cout << "Ninja :" << endl; 
	cout << "Damage " << trainig->attack()<< endl;
	trainig->print_stats();
	Trasher en2(1, 20, 3, 1); 
	trainig = &en2; 
	cout << "Trasher :" << endl; 
	cout << "Damage " << trainig->attack() << endl; 
	trainig->print_stats();
	Thinker en3(1, 5, 2, 15, 1); 
	trainig = &en3; 
	cout << "Thinker :" << endl; 
	cout << "Damage " << trainig->attack() << endl; 
	trainig->print_stats();
	Boss en4(1, 25, 5, 1, 3); 
	trainig = &en4; 
	cout << "Boss :" << endl; 
	cout << "Damage " << trainig->attack() << endl; 
	cout << "Special damage " << en4.special_attack() << endl;
	trainig->print_stats();
	
	return 0; 
}