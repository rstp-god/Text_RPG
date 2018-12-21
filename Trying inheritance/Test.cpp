#include "map.h"
#include "Enemy.h"
#include "Hero.h"
#include <iostream>
using namespace std;

int main()
{
	HWND hwnd;
	char Title[1024];
	int iWidth = GetSystemMetrics(SM_CXSCREEN);  // разрешение экрана по горизонтали
	int iHeight = GetSystemMetrics(SM_CYSCREEN); // разрешение экрана по вертикали
	GetConsoleTitle(Title, 1024); // Узнаем имя окна
	// или GetModuleFileName(NULL,Title, sizeof(Title));
	hwnd = FindWindow(NULL, Title); // Узнаем hwnd окна
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
	// или
	//  MoveWindow(hwnd,0,0,iWidth,iHeight,true);


	Enemy *training; 
	Ninja en(20,20,10,0); 
	training = &en; 
	Hero gamer("Savage"); 
	gamer.equipment_fill(); 
	map m1(gamer.coordinate_x(), gamer.coordinate_y()); 
	gamer.fill(); 
start: 
	int mainmenuchoise;
	while (true)
	{
	mainmenu: 
		system("color F0"); 
		cout << "1)Open Equipment" << endl;
		cout << "2)map see" << endl;
		cout << "3)Fight w8 ninja!" << endl;
		cout << "4)test test test" << endl; 
		cout << "5)Exit game!" << endl; 
		cin >> mainmenuchoise;
		system("cls");
		switch (mainmenuchoise)
		{
		case 1:
			int choise;
			while (true)
			{
				cout << "1)Heal items" << endl;
				cout << "2)Weapon items" << endl;
				cout << "3)Ammo items" << endl;
				cout << "4)Alcohol items" << endl;
				cout << "5)Food items" << endl;
				cout << "6)Exit to main menu" << endl;
				cin >> choise;
				int x;
				system("cls");
				switch (choise)
				{
				case 1:
					system("color F4"); 
					gamer.equipment_heal_show();
					cin >> x; 
					if (x != 9)
					{
						cout << "using.." << endl;
						gamer.heal(gamer.main_eq.eq1[x].use());
					}
					break; 
				case 2:
					system("color F3");
					gamer.equipment_weapon_show();
					break;
				case 3:
					system("color F0");
					gamer.equipment_ammo_show();
					break;
				case 4:
					system("color F1");
					gamer.equipment_alcohol_show();
					cin >> x;
					int hours; 
					cout << "How many hours u need to sleep"; 
					cin >> hours; 
					if (x != 9)
					{
					cout << "using.." << endl;
					gamer.sleep(gamer.main_eq.eq4[x].use(), hours); 
					}
					break;
				case 5:
					system("color F5");
					gamer.equipment_food_show();
					cin >> x; 
					if (x != 9)
					{
						cout << "eating..." << endl; 
						gamer.stamina_regen(gamer.main_eq.eq5[x].use());
					}
					break;
				case 6:
					goto mainmenu;
					system("cls");
					break;
				default:
					break;
				}
			}
			break;
		case 2:
			m1.mapopen();
			system("cls");
			break;
		case 3:
			int fightchoise;
			system("cls");
			while (true)
			{
			fightmenu:
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
					if (gamer.main_eq.eq3[weaponchoose].get_number() != 0 || weaponchoose == 2)
					{
						switch (weaponchoose)
						{
						case 0:
							cout << "Shoot!" << endl;
							training->damage(gamer.attack(gamer.main_eq.eq2[0].dmg_add()));
							gamer.main_eq.eq3[0].ammo_minus();
							break;
						case 1:
							cout << "Shoot!" << endl;
							training->damage(gamer.attack(gamer.main_eq.eq2[1].dmg_add()));
							gamer.main_eq.eq3[1].ammo_minus();
							break;
						case 2:
							cout << "Cut!" << endl;
							training->damage(gamer.attack(gamer.main_eq.eq2[2].dmg_add()));
							break;
						default:
							break;
						}
					}
					else
					{
						cout << "No ammo!" << endl;
						goto fightmenu; 
					}
						break;
				case 2:
					int healchoise;
					cout << "Choose heal item" << endl;
					gamer.equipment_heal_show();
					cin >> healchoise;
					switch (healchoise)
					{
					  case 0:
						  cout << "Heal!" << endl; 
						  gamer.heal(gamer.main_eq.eq1[0].use()); 
						  break; 
					  case 1:
						  cout << "Heal!" << endl;
						  gamer.heal(gamer.main_eq.eq1[1].use());
						  break; 
					  case 2: 
						  cout << "Heal!" << endl;
						  gamer.heal(gamer.main_eq.eq1[2].use());
						  break; 
					default:
						break;
					}
					break;
				default:
					break;
				}
				system("color F4"); 
				cout << "You get damaged!" << endl; 
				gamer.damage_hero(training->attack());
				gamer.print_info();
				training->print_stats();
				if (gamer.get_hp() <= 0 || training->get_hp() <= 0)
				{
					if (gamer.get_hp() <= 0)
					{
						cout << "U died" << endl;
						goto start; 
					}
					else
					{
						cout << "Ninja died!" << endl;
					    goto mainmenu;
					}
				}
				else
				{
					goto fightmenu;
					system("cls");
				}
			}
			break;
		case 4: 
			break; 
		case 5: 
			cout << "Cya!" << endl; 
			return 0; 
			break; 
		}
	}
}
