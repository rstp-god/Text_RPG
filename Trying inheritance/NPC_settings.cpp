#include "npc.h"


NPC_Class::NPC_Class(std::string city_name, std::string NPC_Name) {};



	void NPC_Class::NPC_choice_message() {
		std::cout << "You entered into the city named" << city_name << std::endl;
		std::cout << "Where do you want to go?" << std::endl;
		std::cout << "1.To saloon" << std::endl;
		std::cout << "2.To sherif" << std::endl;
	};


	void NPC_Class::NPC_choice_case(int NPC_choice,std::string NPC_Name) {
		switch (NPC_choice) {
		case 1:
			NPC_Name = "Saloon";
			break;
		case 2:
			NPC_Name = "Sherif";
			break;
		case 3:
			std ::cout << "You peek the wrong house, fool!";
			break;
		}
	}


	void NPC_Class::print_message(std::string character_name, std::string NPC_Name) {
		if (NPC_Name == "Saloon") {
			std::cout << "Greetings at my saloon, " << character_name << "!" << std::endl;
			std::cout << "What do you want from me?" << std::endl;
			std::cout << "1.Check out my new bar!" << std::endl;
			std::cout << "2.I have an interesting message for you!" << std::endl;
			std::cout << "3.Quit" << std::endl;
		}
			if (NPC_Name == "Sherif") {
				std::cout << "Hello, " << character_name << "!" << std::endl;
				std::cout << "What are you doing in my station?" << std::endl;
				std::cout << "1.Shop" << std::endl;
				std::cout << "2.Check this bad guys!" << std::endl;
				std::cout << "3.Quit" << std::endl;
		};
	};


	void NPC_Class::choose_message_term(int choice, std::string NPC_Name) {
		if (NPC_Name == "Saloon") {
			switch (choice) {
			case 1:
				std::cout << "shopmenu";
				break;
			case 2:
				std::cout << "missions";
				break;
			case 3:
				std::cout << "Better luck next time!";
				break;
			}
		}
		else {
			switch (choice) {
			case 1:
				std::cout << "shopmenu1";
				break;
			case 2:
				std::cout << "missions1";
				break;
			case 3:
				std::cout << "Better luck next time!!";
				break;
			};
		};
	};


	Quest_NPC::Quest_NPC(int id_NPC, std::string NPC_Name, std::string city_name, Quest id) {};




	void NPC_Class::NPC_choice_message() {
		std::cout << "You entered into the city named" << city_name << std::endl;
		std::cout << "Where do you want to go?" << std::endl;
		std::cout << "1.To saloon" << std::endl;
		std::cout << "2.To sherif" << std::endl;
	};


	void NPC_Class::NPC_choice_case(int NPC_choice, std::string NPC_Name) {
		switch (NPC_choice) {
		case 1:
			NPC_Name = "Saloon";
			break;
		case 2:
			NPC_Name = "Sherif";
			break;
		case 3:
			std ::cout<< "You peek the wrong house, fool!";
			break;
		}
	}


	void Quest_NPC::NPC_choice() {
		std::cin >> id;
		switch(id){
		case 1:
			std::cout << "Quest_menu1" << std ::endl;
			std::cout << "Quest1" << std::endl;
			std::cout << "Quest2" << std::endl;
			std::cout << "Quest3" << std::endl;
			switch (id) {
			case 1:
				std::cout << "Quest1";
			case 2:
				std::cout << "Quest2";
			case 3:
				std::cout << "Quest3";
		}
			break;
		case 2:
			std::cout << "Quest_menu2" << std ::endl;
			std::cout << "Quest1" << std::endl;
			std::cout << "Quest2" << std::endl;
			std::cout << "Quest3" << std::endl;
			switch (id) {
			case 1:
				std::cout << "Quest1";
			case 2:
				std::cout << "Quest2";
			case 3:
				std::cout << "Quest3";
			}
			break;
		case 3:
			std::cout << "Quest_menu3" << std ::endl;
			std::cout << "Quest1" << std::endl;
			std::cout << "Quest2" << std::endl;
			std::cout << "Quest3" << std::endl;
			switch (id) {
			case 1:
				std::cout << "Quest1";
			case 2:
				std::cout << "Quest2";
			case 3:
				std::cout << "Quest3";
			}
			break;
		}
	};