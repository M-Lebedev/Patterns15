/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
public class Passenger extends Plane{
    int count_passengers;  //кол-во пассажиров
    
    void set_count_passengers(int acount)
    {
	count_passengers = acount;
    }
    int get_count_passengers()
    {
	return count_passengers;
    }
    Passenger(){};
    Passenger(int max_weight,int max_time,int velocity,int time,String name)
    {
        fuel_weight_plane=max_weight;
        speed=velocity;
        max_time_flight=max_time;
        time_service=time;
        current_time_service=time;
        current_time_flight=0;
        stay_port = "home";
        arrival_port = "home";
        name_plane = name;
	count_passengers = 0;
        military = false;
    }
}
