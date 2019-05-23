#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Struct.h"
class NPC
{
protected:
	std::string NPC_Name;
	std::string city_name;

public:
	NPC() {};
	NPC(std::string, std::string) {};
	void NPC_choice_message() {};
	void NPC_choice_case(int, std::string) {};
	void print_message(std::string, std::string) {};
	void choose_message_term(int, std::string) {};
	int reputation_check() {}; 

};


class Quest_NPC :public NPC
{
protected:
	int id;
	Quest one;
public:
	Quest_NPC() {};
	Quest_NPC(int, std::string, std::string, Quest) {};
	void NPC_choice() {};
	void NPC_Quests_list() {};
};
