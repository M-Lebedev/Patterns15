#pragma once
#include "machine.h"

class square
{
protected:
	int x; // координаты по x
	int y; // координаты по y
	machine *sky; // небо
	machine *land; //земля

public:

	virtual void set_coord(int,int); // установить координаты
	virtual int get_coord_x() const; // координаты х
	virtual int get_coord_y() const; // координаты у
	// корабли на клетке
	void set_sky(machine &); // установить адрес воздушной машины
	void clear_sky(); // очистить адрес неба
	machine* get_sky() const; // получить адрес воздушной машины

	void set_land(machine &); // установить адрес наземной машины
	machine* get_land() const; // получить адрес наземной машины
	void clear_land(); // очистить адрес земли
	virtual int get_type() const; // тип клетки


	square(int,int);
	~square();
};

// песок
class sand : public square
{
public:
	virtual int get_type() const;
	sand(int,int);
	~sand();
};


// гора
class rock : public square
{
public:
	virtual int get_type() const;
	rock(int, int);
	~rock();
};

//спайс
class spice : public square
{
protected:

	int count; // количество оставшегося спайса
	int max_count; // максимальное кол-во спайса 0-4000
public:
	int regen; // скорость регенирации спайса 1-100

public:

	int get_count_spice() const;
	void get_spice(int);

	//void //уменьшаем броню наземной военной машине

	virtual int get_type() const;
	spice(int,int,int,int);
	~spice();
};