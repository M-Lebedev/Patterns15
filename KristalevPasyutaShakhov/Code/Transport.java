/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
public class Transport extends Plane{
  int max_weight_load;   // максимальный вес груза
  
  void set_max_weight_load(int max_weight_cargo)
  {
      max_weight_load=max_weight_cargo;
  }
  int get_max_weight_load()
  {
      return max_weight_load;
  }
  Transport(){};
  Transport(int max_weight,int max_time,int velocity,int time,String name)
  {
      
      max_weight_load = 0;
      fuel_weight_plane=max_weight;
      speed=velocity;
      max_time_flight=max_time;
      time_service=time;
      current_time_service=time;
      current_time_flight=0;
      stay_port = "home";
      arrival_port = "home";
      name_plane = name;
      military = false;
  }
}
