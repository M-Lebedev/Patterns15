/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bankochered;

/**Класс Client - клиент банка
 *
 * @author Maks
 */
public class Client {
    /**поля класса
     * operacion - операция, которую нужно выполнить в банке
     * (кредит, вклад, банковские карты, платежи, переводы)
     * vozrast  - возраст человека, пришедшего в банк
     * (молодой, средних лет, пожилой)
     * stringOperacion и stringVozrast - строковые значения возраста и
     * операции
     * operacion - объект операции
     */
    public final static int MOLOD_VALUE = 1;
    public final static int SRED_VALUE = 2;
    public final static int POJIL_VALUE = 3;
    
    private String name;
    private int intOperacion;
    private int age;
    private int number;
    private Operacion operacion;
    
    /**Конструктор без параметров
     * 
     */
    public Client()
    {
        this.name = "";
        this.age = 0;
        this.intOperacion = 0;
        this.number = 0;
        this.operacion = null;
    }
    /**Конструктор с параметрами
     * 
     * @param name
     * @param age
     * @param operacion
     * @param number
     */
    public Client(String name, int age, int operacion, int number)
    {
        this.name = name;
        this.age = age;
        this.intOperacion = operacion;
        this.number = number;
        this.operacion = null;
    }
    public Client(Client client)
    {
        this.name = client.name;
        this.age = client.age;
        this.operacion = client.operacion;
        this.number = client.number;
        this.intOperacion = client.intOperacion;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setAge(int age)
    {
        this.age = age;
    }
    public void setIntOperacion(int operacion)
    {
        this.intOperacion = operacion;
    }
    public void setNumber(int number)
    {
        this.number = number;
    }
    public void setOperacion()
    {
        this.operacion = new Operacion(this.intOperacion, this.age);
    }
    public String getName()
    {
        return this.name;
    }
    public int getAge()
    {
        return this.age;
    }
    public int getIntOperacion()
    {
        return this.intOperacion;
    }
    public int getNumber()
    {
        return this.number;
    }
    public Operacion getOperacion()
    {
        return this.operacion;
    }
}
