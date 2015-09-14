/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bankochered;

/**
 *
 * @author Maks
 */
public class Operacion {
    /**Поля
     * time - время обработки операции
     */
    private int time;
    private int operacion;

    public Operacion()
    {
        this.time = 0;
        this.operacion = 0;
    }
    /**Конструктор с параметрами
     * 
     * @param operacion
     * @param age 
     */
    public Operacion(int operacion, int age)
    {
        this.operacion = operacion;
        switch(age)
        {
            case 1: this.time = 2; break;
            case 2: this.time = 1; break;
            case 3: this.time = 3; break;
        }
        switch(this.operacion)
        {
            case 1: this.time = 5 * this.time; break;
            case 2: this.time = 3 * this.time; break;
            case 3: this.time = 4 * this.time; break;
            case 4: this.time = 1 * this.time; break;
            case 5: this.time = 2 * this.time; break;        
        }
    }
    public Operacion(Operacion operacion)
    {
        this.time = operacion.time;
        this.operacion = operacion.operacion;
    }
    
    public void setTime(int time)
    {
        this.time = time;
    }
    public void setOperacion(int operacion)
    {
        this.operacion = operacion;
    }
    public int getTime()
    {
        return this.time;
    }
    public int getOperacion()
    {
        return this.operacion;
    }
    public void Work()
    {
        if(this.time != 0)
            this.time--;
    }
}
