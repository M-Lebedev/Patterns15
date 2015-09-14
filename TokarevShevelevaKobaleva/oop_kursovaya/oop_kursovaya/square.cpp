#include "StdAfx.h"
#include "square.h"

// методы клетки
void square::set_coord(int x1,int y1)
{
	x = x1;	y = y1;
}

int square::get_coord_x() const
{	
	return x; 
}

int square::get_coord_y() const
{
	return y;
}
		// корабли на клетке
void square::set_sky(machine &adress)
{
	sky = &adress;
}

void square::set_land(machine &adress)
{
	land = &adress;
}

machine* square::get_sky() const
{
	return sky;
}

machine* square::get_land() const
{
	return land;
}

void square::clear_sky()
{
	sky=0;
}

void square::clear_land()
{
	land=0;
}

		// # корабли на клетке
 


//  ----

/*Методы определения типа клетки*/

int sand::get_type() const
{
	return 1;
}
int rock::get_type() const
{
	return 2;
}
int spice::get_type() const
{
	return 3;
}


// методы спайса


 int spice::get_count_spice() const
 {
	 return count;
 }

 void spice::get_spice(int kol)
 {
	 if(count >= kol) count-=kol;
 }

//  ----
 int square::get_type() const
 {
 return 35;
 }
// клетка, конструктор/деструктор
square::square(int x1, int y1)
{
	sky=land=0;
	x=x1; y=y1;
}

square::~square()
{
}

// песок, конструктор/деструктор
sand::sand(int x1, int y1):square(x1,y1)
{
}


sand::~sand()
{
}

// гора, конструктор/деструктор
rock::rock(int x1, int y1):square(x1,y1)
{
}

rock::~rock()
{
}

// спайс, конструктор/деструктор
spice::spice(int x1, int y1, int mc, int r):square(x1,y1)
{
	count = mc/2; max_count = mc; regen = r;
}

spice::~spice()
{
}