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
public class BankWindow {
    /**Поля класса
     * countServed - кол-во клиентов, обслуженных окошком
     * client - текущий клиент окошка
     * isFree - свободно ли окошко
     */
    public final static int CREDITS_VALUE = 1;
    public final static int DEPOSITS_VALUE = 2;
    public final static int CARDS_VALUE = 3;
    public final static int PAYMENTS_VALUE = 4;
    public final static int TRANSFERS_VALUE = 5;
    
    private final int number;
    private Client client;
    private Operacion operacion;
    private int intOperacion;
    public boolean isFree;
    private int countServed;

    /**Конструктор
     * 
     * @param number
     */
    public BankWindow(int number)
    {
        this.number = number;
        this.client = null;
        this.operacion = null;
        this.isFree = true;
        this.countServed = 0;
        this.intOperacion = 0;
    }
    /**Задание клиента
     * 
     * @param c 
     */
    public void setClient(Client c)
    {
        this.client = c;
        this.intOperacion = this.client.getIntOperacion();
        this.isFree = false;
        this.operacion = c.getOperacion();
    }
    /**Работа
     * 
     */
    public void Work()
    {
        if(this.client != null)
        {
            this.operacion.Work();
            if(this.operacion.getTime() == 0)
            {
                this.client = null;
                this.operacion = null;
                this.countServed++;
                this.isFree = true;
                this.intOperacion = 0;
            }
        }
    }
    /**Получение значения кол-ва обслуженных клиентов
     * 
     * @return 
     */
    public int getCountServed()
    {
        return this.countServed;
    }
    public int getNumber()
    {
        return this.number;
    }
    public Client getClient()
    {
        return this.client;
    }
    public Operacion getOperacion()
    {
        return this.operacion;
    }
    public int getIntOperacion()
    {
        return this.intOperacion;
    }
}
