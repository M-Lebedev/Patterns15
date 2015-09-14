#pragma once
#include "square.h"
#include <vector>

using namespace std;

class base
{


public:
	int coord_x; // position of x
	int coord_y; // position of y
	
protected:	
	int import_spice; // кол-во завезенного спайса
	int count_spice; // количество спайса на базе
	int count_import; // сколько раз приезжал разгружаться транспортникы. дефолт - 0
	int count_kill_military; // убито военных машин(0)
	int count_kill_transport; // убито транспортников(0)

public:
	int count_lost_military; // потеряно военных машин(0)
	int count_lost_transport; // потеряно транспортников(0)
	bool loos;
protected:
	int mid_trip; // средний привоз спайса

	
static int const cost_military=25000; // цена производсва военной машины
static int const cost_transport=18000; // цена производсва транспортной машины
	
	
public:
	vector <machine *> car; // вектор со всеми ТС базы

	void set_lost();
	int get_lost(int) const;

	int create_transport(); // создать транспортник
	int create_military(); // создать военную машину. Тип - рандом

	int get_cost_mil() const; //цена военной машины
	int get_cost_tr() const; // цена транспортника

	void set_cost_mil(int);	// устанавливаем цену военной машины
	void set_cost_tr(int); // устанавливаем цену транспортника

	void add_count_kill_military();
	void add_count_kill_transport();
	
	int get_count_spice() const; // кол-во спайса на базе
	int get_count_military() const; // кол-во военных машин у рассы
	int get_count_transport() const; // кол-во транспортников у рассы
	int get_count_raz() const; //Кол-во разгрузок
	int get_count_kill_military() const;
	int get_count_kill_transport() const;
	int get_mid_trip(void) const;

	void add_count_import(); // увеличиваем кол-во разгрузок
	void add_trip(int); // увеличиваем кол-во привезенного спайса
	void bay_car(int); // списание спайса на покупку машины

	

	int loser(void); // проиграла ли расса? 1 - да, 0 - нет


	base(int,int,int);
	base(void);
	~base(void);
};

