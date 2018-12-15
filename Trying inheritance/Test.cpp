#include "map.h"
#include "Enemy.h"
#include "Hero.h"
#include <iostream>
using namespace std;

int main()
{
	Enemy *training; 
	Ninja en(20,0,0,0); 
	training = &en; 
	Hero gamer("Savage"); 
	gamer.equipment_fill(); 
	map m1(gamer.coordinate_x(), gamer.coordinate_y()); 
mainmenu: 
	cout << "1)Equipment see" << endl;
	cout << "2)map see" << endl; 
	cout << "3)Fight w8 ninja!" << endl; 
	int mainmenuchoise; 
	cin >> mainmenuchoise; 
	switch (mainmenuchoise)
	{
	case 1: 
		int choise;
		while (true)
		{
			cout << "1)Heal items see" << endl;
			cout << "2)Weapon items see" << endl;
			cout << "3)Ammo items see" << endl;
			cout << "4)Alcohol items see" << endl;
			cout << "5)Food items see" << endl;
			cout << "6)Exit to main menu" << endl;
			cin >> choise;
				switch (choise)
				{
				case 1:
					gamer.equipment_heal_show();
					break;
				case 2:
					gamer.equipment_weapon_show(); 
					break;
				case 3:
					gamer.equipment_ammo_show(); 
					break; 
				case 4: 
					gamer.equipment_alcohol_show(); 
					break; 
				case 5: 
					gamer.equipment_food_show(); 
					break; 
				case 6: 
					goto mainmenu; 
					break; 
				default:
					break;
				}
		}
	break; 
	case 2: 
		m1.mapopen(); 
		break; 
	case 3: 
		int fightchoise; 
		while (true)
		{

			cout << "1)Attack!" << endl; 
			cout << "2)Heal!" << endl;
			cin >> fightchoise; 
			switch (fightchoise)
			{
			case 1:
				int weaponchoose; 
				cout << "Choose weapon " << endl;
				gamer.equipment_weapon_show(); 
				cin >> weaponchoose;
				switch (weaponchoose)
				{
				case 1: 
					cout << "Shoot!" << endl;
					training->damage(gamer.attack(gamer.main_eq.eq2[0].dmg_add()));
					break; 
				case 2:
					cout << "Shoot!" << endl;
					training->damage(gamer.attack(gamer.main_eq.eq2[1].dmg_add()));
					break; 
				case 3:
					cout << "Cut!" << endl;
					training->damage(gamer.attack(gamer.main_eq.eq2[2].dmg_add()));
					break;
				default:
					break;
				}
				break; 
			case 2:
				break;
			default:
				break;
			}
			gamer.print_info();
			training->print_stats(); 
		}
		break; 
	}
	system("pause"); 
	return 0;
}