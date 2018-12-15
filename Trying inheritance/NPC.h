#include <iostream>
#include <string>
#include <fstream>
#include "Struct.h"
#pragma once
class NPC_Class
{
protected:
	std ::string NPC_Name;
	std ::string city_name;

public:
	NPC_Class() {};
	NPC_Class(std::string, std::string) {};
	void NPC_choice_message() {};
	void NPC_choice_case(int, std::string) {};
	void print_message(std::string,std::string) {};
	void choose_message_term(int,std::string) {};
	};
class Quest_NPC :public NPC_Class
{
protected:
	int id;
	Quest one;
public:
	Quest_NPC() {};
	Quest_NPC(int,std::string,std::string,Quest){};
	void NPC_choice();
	void NPC_Quests_list() {};
};
