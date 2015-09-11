#include "StdAfx.h"
#include "machine.h"
#include "base.h"


// машина в целом

// перемещение машины
int machine::move(int x, int y, int max_x, int max_y)
{
	/*bool success=0;
	if((x>(-2) && x<2) && (max_x <= (coord_x+x) && (coord_x+x) >= 0 )) {coord_x+=x; success=1;}
	if((y>(-2) && y<2) && (max_y <= (coord_y+y) && (coord_y+y) >= 0 )) {coord_y+=y; success=1;}
	return success;*/
	coord_x=x;
	coord_y=y;
	return 1;
}

int machine::get_live_time(void) const
{
	return live_time;
}

int machine::damage(int c)
{
	bool crushed=0;
	 if(max_amour >= (amour-c)) amour-=c; 
	 if(amour<=0) {crushed=1; amour=0; }
	return crushed;
}

int machine::get_russ(void) const
{
	return russ;
}

int machine::get_speed(void) const
{
	return speed;
}
int machine::get_amour(void) const
{
	return amour;
}
int machine::get_max_amour(void) const
{
	return max_amour;
}

// узнаем координаты 
int machine::get_coord_x(void)
{
	return coord_x;
}
int machine::get_coord_y(void)
{
	return coord_y;
}

void machine::add_time()
{
	live_time++;
}

// # машина в целом


/*Транспортник*/
void transport::clear_bag()
{
	//base::add_count_import();
	//base::add_trip(count_spice);
	count_spice = go_home = 0; // сбрасываем весь спайс и пошли на сборы

}
int transport::count_spice_inbag() const
{
	return count_spice;
}
int transport::max_value_car() const
{
	return max_value;
}

int transport::get_go_home(void) const
{
	return go_home;
}

void transport::add_spice(int n)
{
	if(count_spice+n >=12000) count_spice=12000; else count_spice+=n;
}
void transport::set_go_home(int n)
{
	go_home = n; 
}

/* # Транспортник*/




/* Военник */

int military::get_type(void) const
{
	return sky_land;
}

/* #Военник*/


//конструктор машины полный
machine::machine(int x, int y, int am, int max_am, int sp, int rus)
{
	coord_x=x; coord_y=y;
	amour = am; max_amour = max_am;
	speed = sp; russ = rus;
	live_time=rip=0;


}
//конструктор военной машины полный(с использованием базового конструктора)
military::military(int x, int y, int am, int max_am, int sp, int rus, bool sk_la, int sl, int sr, int ll, int lr ):machine(x, y, am, max_am, sp, rus)
{
	sky_land = sk_la;
	sky_losses = sl;
	sky_radius = sr;
	land_losses = ll;
	land_radius = lr;
}

//конструктор транспортника полный(с использованием базового конструктора)
transport::transport(int x, int y, int am, int max_am, int sp, int rus, int val):machine(x, y, am, max_am, sp, rus)
{
	sky =1 ;
	go_home = count_spice = 0;
	max_value = val;
}


// куонструкторы и деструкторы пустые
machine::machine(void)
{
}

machine::~machine(void)
{
}

military::military(void)
{
}

military::~military(void)
{
}

transport::transport(void)
{
	sky=go_home=0;
}

transport::~transport(void)
{
}