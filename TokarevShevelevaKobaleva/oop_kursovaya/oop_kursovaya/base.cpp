#include "StdAfx.h"
#include "base.h"
#include "machine.h"



void base::set_lost()
{

	int count_lost_military=count_lost_transport=0;
	for( vector<machine*>::const_iterator it = car.begin(); it != car.end(); ++it)
	{
		if(dynamic_cast <transport *>(*it) ) count_lost_transport++; else count_lost_military++;
	}

}

int base::get_lost(int n) const
{
	switch(n)
	{
	case 1: { return count_lost_military;}
	case 2: { return count_lost_transport;}
	}
}

void base::add_count_kill_military()
{
	count_kill_military++;
}

void base::add_count_kill_transport()
{
	count_kill_transport++;
}

void base::bay_car(int n)
{
	count_spice-=n;
}

int base::get_mid_trip(void) const
{
	return mid_trip;
}

void base::add_count_import()
{
	count_import++;
}

void base::add_trip(int n)
{
	count_spice+=n;
	import_spice+=n;
	mid_trip=import_spice/count_import;

}

int base::create_transport()
{
	if(get_count_transport()==0 && count_spice >= cost_transport)
	{
		car.push_back( new transport() );
		return 1;
	}
		return 0;
}

int base::create_military()
{
	if(count_spice >= cost_military)
	{
		car.push_back( new military() );
		return 1;
	}
	return 0;
}

int base::get_count_raz() const
{
	return count_import;
}

int base::get_count_kill_military() const
{
	return count_kill_military;
}

int base::get_count_kill_transport() const
{
	return count_kill_transport;
}


int base::get_cost_mil() const
{
	return cost_military;
}

int base::get_cost_tr() const
{
	return cost_transport;
}


int base::get_count_spice() const
{
	return count_spice;
}

int base::get_count_transport() const
{
	int kol=0;
	for( vector<machine*>::const_iterator it = car.begin(); it != car.end(); ++it)
	{
		if(dynamic_cast <transport *>(*it) && (*it)->get_amour()>0 ) kol++;
	}
	return kol;
}


int base::get_count_military() const
{
	int kol=0;
	for( vector<machine*>::const_iterator it = car.begin(); it != car.end(); ++it)
	{
		if(dynamic_cast <military *>(*it) && (*it)->get_amour()>0) kol++;
	}
	return kol;
}


int base::loser(void)
{
	if((get_count_military() == 0 && get_count_transport()==0) && (get_cost_mil() > get_count_spice() && get_cost_tr() >  get_count_spice()))
	return 1; else return 0;
}

base::base(int x,int y, int c):count_import(0),count_kill_military(0),count_kill_transport(0),mid_trip(0),count_lost_military(0),count_lost_transport(0),import_spice(0),loos(0)
{
	coord_x = x;
	coord_y = y;
	count_spice = c;
}


base::base(void):count_spice(10000),count_import(0),count_kill_military(0),count_kill_transport(0),mid_trip(0)
{
}


base::~base(void)
{
}
