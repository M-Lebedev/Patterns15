/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
import java.util.ArrayList;

public class Airport {
int locationX;              // Координаты X
int locationY;              // Координаты Y
int count_plane;            // Кол-во мест для самолетов
int current_count_plane;    // Текущее кол-во мест занятых самолетами
int number_airport;         // Номер аэропорта
boolean security;
ArrayList<Plane> angar;     // Ангар с самолетами
String name_airport;

int get_count_plane()
{
	return count_plane;
}
int get_current_count_plane()
{
    return current_count_plane;
}
int get_locationX()
{
    return locationX;
}
int get_locationY()
{
    return locationY;
}
int get_number_airport()
{
    return number_airport;
}
String get_name_airport()
{
    return name_airport;
}
boolean get_security()
{
    return security;
}
void decrease_count_plane()
{
	if(current_count_plane>0)
		current_count_plane--;
}
void increase_count_plane()
{
    current_count_plane++;
}
Airport(){}
Airport(int count,String name,int X,int Y, int num)
{
    security = false;
    count_plane=count;
    name_airport = name;
    locationX=X;
    locationY=Y;
    number_airport = num;
    current_count_plane = count_plane;
}
}
