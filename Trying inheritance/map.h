#pragma once
class map
{
private:
	int *current_posistion = new int;
public:
	map();
	~map() {delete current_posistion;}
};

