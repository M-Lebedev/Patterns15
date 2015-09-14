#pragma once

class machine
{
protected:
	int coord_x; // координаты по x
	int coord_y; // координаты по y
	int amour; // текущая броня
	int max_amour; // максимальная броня
	int speed; // скорость
	int russ; // номер рассы
	int live_time; // время жизни машины(0)
	

public:
	int rip; // подохла машинка

	int move(int,int,int,int); // перемещение
	int get_coord_x(void); // узнаем координату x
	int get_coord_y(void); // узнаем координату y

	int damage(int); // наносим урон(можно и регенерить хп) и узнаем результат
	int get_russ(void) const; // узнаем рассу
	int get_speed(void) const; // узнаем скорость машины
	int get_amour(void) const; // узнаем остаток брони
	int get_max_amour(void) const; // узнаем максимульную броню
	int get_live_time(void) const; // узнаем, сколько шагов живет машина

virtual	void add_time(); // увеличиваем счетчик времени жизни

	machine(int,int,int,int,int,int); // full
	machine(void);
	~machine(void);
};



class transport : public machine
{

	bool sky; // в воздухе или нет 1 - воздух, 0 - земля
	bool go_home; // домой или еще побродим 1-домой, 0-бродим

	int max_value; // объем багажника
	int count_spice; // количество спайса в багажнике

public:

	void clear_bag(); // очищаем багажник
	int count_spice_inbag() const; // количество спайса в багажнике
	int max_value_car() const; // максимальный объем
	int get_go_home(void) const; // домой или бродит, ищет
	void set_go_home(int); // направляем на базу
	void add_spice(int);

	transport(int,int,int,int,int,int,int); // сложный конструктор, с вызовом базового
	transport(void);
	~transport(void);
};




class military : public machine
{
public:
	bool sky_land; // 1 - воздух, 0 - земля
	

	// "воздушное" оружие
	int sky_losses; // скорострельность(урон за 1 шаг) 1-10
	int sky_radius; // дальность поражения

	// наземное оружие
	int land_losses; // скорострельность(урон за 1 шаг)
	int land_radius; // дальность поражения


public:

	int get_type(void) const; // наземная или возушная

	military(int,int,int,int,int,int,bool,int,int,int,int); // сложный конструктор, с вызовом базового
	military(void);
	~military(void);
};
