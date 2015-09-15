/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Данил
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;

public class GlobalVars{
    private static GlobalVars global;
    int crash_plane;		// упавшие самолеты
    int killed_people;		// погибшие люди
    int lost_cargo ;		// потерянно груза
    int flown_people;		// кол-во прилетевших людей
    int delivered_cargo;	// доставленного груза
    int all_plane;              // общее кол-во самолетов
    int plane_in_port;		// кол-во самолетов в аэропортах
    int cargo_in_plane;		// масса груза в полете
    int people_in_plane;	//кол-во людей в полете
    int count;
    int count_airports;
    int search_time;
    Plane craft;
    Airport port;
    Airport arrival_port;
    Airport stay_port;
    String TU;
    String Airbus;
    String Boing;
    String SU;
    String AN;
    String MIG;
    String name_airplane;
    String number_plane;
    String[] city_airport;
    
    ArrayList<Plane> Flights = new  ArrayList<Plane>();
    ArrayList<Plane> Before_flights = new  ArrayList<Plane>();
    ArrayList<Airport> Airports = new  ArrayList<Airport>();
    ArrayList<Plane> Deleted = new ArrayList<Plane>();
    ArrayList<Plane> Crashed_planes = new ArrayList<Plane>();
    javax.swing.Timer timer;

    private GlobalVars()
    {
        crash_plane = 0;    // упавшие самолеты
        killed_people = 0;  // погибшие люди
        lost_cargo = 0;     // потерянно груза
        flown_people = 0;   // прилетевших людей
        delivered_cargo = 0;  // доставленного груза
        all_plane=0;
        plane_in_port=0;
        cargo_in_plane=0;
        people_in_plane=0;
        search_time = 0;
        arrival_port = new Airport();
        stay_port = new Airport();
        port = new Airport();
        TU="ТУ";
        Airbus="Airbus";
        Boing="Boing";
        SU="СУ";
        AN="АН";
        MIG="МиГ";
    }
    public static GlobalVars getGlobal()
    {
        if(global == null)
        {
            global = new GlobalVars();
        }
        return global;
    }
}
