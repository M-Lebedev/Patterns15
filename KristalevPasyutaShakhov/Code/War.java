/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
public class War extends Plane{
    
   int count_team;
   War(){};
   War(int max_weight,int max_time,int velocity,int time,String name,int count)
   {
        count_team = count;
        fuel_weight_plane=max_weight;
        speed=velocity;
        max_time_flight=max_time;
        time_service=time;
        current_time_service=time;
        current_time_flight=0;
        stay_port = "home";
        arrival_port = "home";
        name_plane = name;
        military = true;
   }
   int get_count_team()
   {
       return count_team;
   }
}
