/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
public class Military_airport extends Airport{
    Military_airport(){}
    Military_airport(int count,String name,int X,int Y, int num)
    {
        security = true;
        count_plane=count;
        name_airport = name;
        locationX=X;
        locationY=Y;
        number_airport = num;
        current_count_plane = count_plane;
    }
}
