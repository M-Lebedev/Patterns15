/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
public class Plane {
    int fuel_weight_plane;			//Вес заправленного самолета
    int speed;					//Скорость
    int max_time_flight;			//Масксимальное время полета		   
    int current_time_flight;                    //Текущее время полета
    int needful_time_flight;                    //Необходимое время для полета
    int time_service;				//Время обслуживания самолета
    int current_time_service;                   //Текущее время обслуживания
    int number_airport;
    boolean military;
    String stay_port;                           //Порт пребывания
    String arrival_port;                        // Порт прибытия
    String name_plane;
    
    void set_fuel_weight_plane(int max_weight)
    {
        fuel_weight_plane=max_weight;
    }
    void set_speed(int velocity)
    {
	speed=velocity;
    }
    void set_max_time_flight(int max_time)
    {
        max_time_flight=max_time;
    }
    void set_time_service(int time)
    {
	time_service=time;
    }
    void set_options_plane(int max_weight,int max_time,int velocity,int time)
    {
	set_fuel_weight_plane(max_weight);
	set_max_time_flight(max_time);
	set_speed(velocity);
	set_time_service(time);
    }
    void set_current_time_service()
    {
	current_time_service=time_service;
    }
    void set_stay_port(String name)
    {
        stay_port = name;
    }
    void set_arrival_port(String name)
    {
        arrival_port = name;
    }
    void set_number_airport(int num)
    {
        number_airport=num;
    }
    boolean ready_to_flight()//самолет готов к полету
    {
	if(current_time_service<=0)
		return true;
	else
		return false;
    }  
    void set_current_time_flight()  //установить текущее время полета равным нулю
    {
        current_time_flight=0;
    }   
    void set_needful_time_flight(int XA,int YA, int XS, int YS)     //установить необходимое время полета до пункта прибытия
    {
        double x,y,z;
	y = (XA-XS);
	z = (YA-YS);
	x = Math.sqrt(y*y + z*z);
	needful_time_flight = (int)x; 
    }
    void increase_current_time_flight() //увеличить текущее время полета
    {
        current_time_flight++;
    }
    void decrease_current_time_service()
    {
	if(current_time_service>0)
		current_time_service--;
    }
    int get_fuel_weight_plane()
    {
	return fuel_weight_plane;
    }
    int get_speed()
    {
	return speed;
    }
    int get_max_time_flight()
    {
	return max_time_flight;
    } 
    int get_time_service()
    {
	return time_service;
    }
    int get_current_time_service()
    {
	return current_time_service;
    }
    int get_current_time_flight()
    {
        return current_time_flight;
    }
    int get_needful_time_flight()
    {
        return needful_time_flight;
    }
    int get_number_airport()
    {
        return number_airport;
    }
    int get_time_flight()
    {
        return (needful_time_flight-current_time_flight);
    }
    String get_stay_port()
    {
        return stay_port;
    }
    String get_arrival_port()
    {
        return arrival_port;
    }
    String get_name_plane()
    {
        return name_plane;
    }
    boolean get_military()
    {
        return military;
    }
    Plane(int max_weight,int max_time,int velocity,int time, String name)
    {
        fuel_weight_plane=max_weight;
	speed=velocity;
	max_time_flight=max_time;
	time_service=time;
	current_time_service=0;
	current_time_flight=0;
	stay_port = "home";
	arrival_port = "home";
	name_plane = name;
    }
    Plane(){}
}
