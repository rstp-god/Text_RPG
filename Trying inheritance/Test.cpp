#include "Enemy.h"
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
	system("pause"); 
	return 0; 
}