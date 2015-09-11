/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bankochered;
import java.util.ArrayList;
import java.util.Random;

/**Класс Очереди банка
 *
 * @author Maks
 */
public class ClientQuene {
    /**Поля класса
     * ochered - поле очереди
     */
    private ArrayList<Client> ochered;
    private int numberClient;
    private final String nameClients[] = {"Александр","Андрей","Антон","Алексей",
        "Артём","Анатолий","Анна","Анастасия","Алёна","Артур","Афанасий","Алиса",
        "Алина","Борис","Богдан","Вадим","Валентина","Владимир","Валерий","Варвара",
        "Виктор","Вера","Вероника","Виктория","Василий","Валерия","Всеволод",
        "Виталий","Георгий","Геннадий","Григорий","Дмитрий","Денис","Данил",
        "Дарья","Евгений","Евгения","Екатерина","Ева","Елена","Егор","Елизавета",
        "Захар","Зоя","Зинаида","Иван","Игорь","Игнат","Ирина","Илья","Инга",
        "Кирилл","Константин","Карина","Клара","Ксения","Кристина","Лариса",
        "Леонид","Любовь","Лилия","Лидия","Людмила","Максим","Михаил","Макар",
        "Мария","Марина","Матвей","Наталья","Нина","Николай","Никита","Олег",
        "Ольга","Олеся","Оксана","Остап","Павел","Петр","Регина","Раиса","Руслан",
        "Ростислав","Роман","Ставр","Семен","Светлана","Святослав","Сергей","Софья",
        "Станислав","Степан","Тамара","Таисия","Татьяна","Тарас","Тимур","Тимофей",
        "Тихон","Ульяна","Федор","Филипп","Христофор","Харитон","Эдуард","Юрий",
        "Юлия","Яна","Ярослав","Яков"};
    public int allMolod;
    public int allSred;
    public int allPojil;
    public int kMolod;
    public int kSred;
    public int kPojil;
    
    
    /**Конструктор без параметров
     * 
     */
    public ClientQuene()
    {
        ochered = new ArrayList<>();
        numberClient = 0;
        allMolod = 0;
        allSred = 0;
        allPojil = 0;
    }
    /**Метод добавления в очередь 
     * передается клиент и добавляется в очередь
     * @param client 
     */
    public void push_ochered(Client client)
    {
        numberClient++;
        client.setNumber(numberClient);
        client.setOperacion();
        ochered.add(client);
    }
    /**Метод взятия из очереди
     * выдает клиента и удаляет его из очереди
     * @return 
     */
    public Client pop_ochered()
    {
        Client client = new Client(ochered.get(0));
        switch(client.getAge())
        {
            case Client.MOLOD_VALUE: allMolod++; break;
            case Client.SRED_VALUE: allSred++; break;
            case Client.POJIL_VALUE: allPojil++; break;
         }
        ochered.remove(0);
        return client;
    }
    public void generateClient(Random r, int newClients)
    {
        if(newClients != 0)
        {
            int k = r.nextInt(newClients);
            for(int j=0; j<k; j++)
            {
                int v = r.nextInt(3)+1;
                int op = r.nextInt(5)+1;
                String name = nameClients[r.nextInt(111)];
                Client c = new Client(name, v, op, 0);
                this.push_ochered(c);
            }
        }
    }
    
    /**Получение кол-ва клиентов в очереди
     * 
     * @return 
     */
    public int getKolvoClients()
    {
        return this.ochered.size();
    }
    /**Полуение клиента в позиции index
     * 
     * @param index
     * @return 
     */
    public Client getClientIndex(int index)
    {
        return this.ochered.get(index);
    }
    public int getNumberClient()
    {
        return this.numberClient;
    }
    public Client countKolvoClients(int index)
    {
        Client c = this.getClientIndex(index);
        switch(c.getAge())
        {
            case Client.MOLOD_VALUE: kMolod++; break;
            case Client.SRED_VALUE: kSred++; break;
            case Client.POJIL_VALUE: kPojil++; break;
        }
        return c;
    }
}
