
#include <iostream>
#include <fstream>
#include <string>
#include "File_work.h"
#include "Sale.h"
#include "Polzovatel.h"

using namespace std;

class Viborka : File_work {
public:
    File_work files;

    int number = 0, sum = 0;
    int obsumma = 0;
    int vid =0;
    string user_choose;
    string str_vid;
    string s = "в вашу корзину добавлено: ";
    string nvn = "к сожалению такого количества нет в наличии. в наличии осталось ";
    void Ovosh(int choose) {
        string nazvanie = "ovosh";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "какой вид сорта\n 1 - маленький цена: " << Sum(choose, nazvanie) * 0.5 << 
            " | 2 - большой цена: " << Sum(choose, nazvanie) << 
            " | 3 - королевский цена: " << Sum(choose, nazvanie) * 2 << 
            " | 4 - пересол цена: " << Sum(choose, nazvanie) * 1 << endl;
        cin >> vid;
        if (vid == 1) {
            str_vid = "маленький вид сорта, ";
            sum = Sum(choose, nazvanie) * 0.5;
        }
        else if (vid == 2) {
            str_vid = "большой вид сорта, ";
            sum = Sum(choose, nazvanie) * 1;
        }
        else if (vid == 3) {
            str_vid = "королевский вид сорта, ";
            sum = Sum(choose, nazvanie) * 2;
        }
        else if (vid == 4) {
            str_vid = "соленый вид сорта, ";
            sum = Sum(choose, nazvanie) * 1;
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        cout << "сколько кило" << endl;
        cin >> number;
        system("cls");
        sum *= number;
        if (proverit >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " кило " << str_vid << user_choose << " цена - " << sum << " сумм";Korzinka(user_choose, number, str_vid, sum);
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " кило" << endl;goto V;
        }
    }
    void Frukt(int choose) {
        string nazvanie = "frukt";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "какой вид сорта\n 1 - маленький цена: " << Sum(choose, nazvanie) * 0.5 <<
            " | 2 - большой цена: " << Sum(choose, nazvanie) <<
            " | 3 - красный цена: " << Sum(choose, nazvanie) * 2 << endl;
        cin >> vid;
        if (vid == 1) {
            str_vid = "маленький вид сорта, ";
            sum = Sum(choose, nazvanie) * 0.5;
        }
        else if (vid == 2) {
            str_vid = "большой вид сорта, ";
            sum = Sum(choose, nazvanie) * 1;
        }
        else if (vid == 3) {
            str_vid = "красный вид сорта, ";
            sum = Sum(choose, nazvanie) * 2;
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        cout << "сколько кило" << endl;
        cin >> number;
        system("cls");
        sum *= number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " кило " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " кило" << endl;goto V;
        }

    }
    void Molochka(int choose) {
        string nazvanie = "molochka";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "От какой компании\n 1 - Musafo | 2 - Nestle | 3 - Простокваша" << endl;
        cin >> vid;
        if (vid == 1) {
            str_vid = "маленький вид сорта, ";
            sum = Sum(choose, nazvanie) * 1.5;
            cout << "сколько процентов жирности\n 1 - 2% цена: " << Sum(choose, nazvanie) * 1.5 <<
                " | 2 - 6% цена: " << Sum(choose, nazvanie) <<
                " | 3 - 10% цена: " << Sum(choose, nazvanie) * 1.2 << endl;
            cin >> vid;
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 0.5;
            }
            if (vid == 2) {
                sum = Sum(choose, nazvanie);
            }
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 1.2;
            }
        }
        else if (vid == 2) {
            str_vid = "большой вид сорта, ";
            sum = Sum(choose, nazvanie) * 1;
            cout << "сколько процентов жирности\n 1 - 2% цена: " << Sum(choose, nazvanie) * 1.5 <<
                " | 2 - 6% цена: " << Sum(choose, nazvanie) <<
                " | 3 - 10% цена: " << Sum(choose, nazvanie) * 1.2 << endl;
            cin >> vid;
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 0.5;
            }
            if (vid == 2) {
                sum = Sum(choose, nazvanie);
            }
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 1.2;
            }
        }
        else if (vid == 3) {
            str_vid = "красный вид сорта, ";
            sum = Sum(choose, nazvanie) * 1.2;
            cout << "сколько процентов жирности\n 1 - 2% цена: " << Sum(choose, nazvanie) * 1.5 <<
                " | 2 - 6% цена: " << Sum(choose, nazvanie) <<
                " | 3 - 10% цена: " << Sum(choose, nazvanie) * 1.2 << endl;
            cin >> vid;
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 0.5;
            }
            if (vid == 2) {
                sum = Sum(choose, nazvanie);
            }
            if (vid == 1) {
                sum = Sum(choose, nazvanie) * 1.2;
            }
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        cout << "сколько кило/литра" << endl;
        cin >> number;
        system("cls");
        sum = Sum(choose, nazvanie) * number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " кило " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " кило" << endl;goto V;
        }
    }
    void Myasa(int choose) {
        string nazvanie = "meet";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "какая часть \n 1 - грудка цена: " << Sum(choose, nazvanie) * 1.2 <<
            " | 2 - ножка цена: " << Sum(choose, nazvanie) * 0.8 <<
            " | 3 - тело цена: " << Sum(choose, nazvanie) * 1.5 << endl;
        cin >> vid;
        if (vid == 1) {
            str_vid = "грудка, ";
            sum = Sum(choose, nazvanie) * 1.2;
        }
        else if (vid == 2) {
            str_vid = "ножка, ";
            sum = Sum(choose, nazvanie) * 0.8;
        }
        else if (vid == 3) {
            str_vid = "тело, ";
            sum = Sum(choose, nazvanie) * 1.5;
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        cout << "сколько кило" << endl;
        cin >> number;
        system("cls");
        sum *= number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " кило " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " кило" << endl;goto V;
        }
    }
    void Pribori(int choose) {
        string nazvanie = "pribori";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "какой вид \n 1 - маленький цена: " << Sum(choose, nazvanie) * 0.5 <<
            " | 2 - большой цена: " << Sum(choose, nazvanie) << endl;
        cin >> vid;
        if (vid == 1) {
            str_vid = "маленький вид, ";
            sum = Sum(choose, nazvanie) * 0.5;
        }
        else if (vid == 2) {
            str_vid = "большой вид, ";
            sum = Sum(choose, nazvanie) * 1;
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        cout << "сколько штук" << endl;
        cin >> number;
        system("cls");
        sum *= number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " штук" << endl;goto V;
        }
    }
    void Vipechka(int choose) {
        string nazvanie = "vipichka";
        int proverit = Proverka(choose, nazvanie);
    V:

        cout << "сколько кило" << endl;
        cin >> number;
        system("cls");
        sum = Sum(choose, nazvanie) * number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " штук " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " штук" << endl;goto V;
        }
    }
    void Konfeti(int choose) {
        string nazvanie = "sladost";
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "сколько кило" << endl;
        cin >> number;
        system("cls");
        sum = Sum(choose, nazvanie) * number;
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << number << " кило " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, str_vid, sum);
            
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " кило" << endl;goto V;
        }
    }
    void Napitki(int choose) {
        string nazvanie = "napitkalar";
        string litr;
        int proverit = Proverka(choose, nazvanie);
    V:
        cout << "Выберите вид\n 1 - 0.5л цена: " << Sum(choose, nazvanie) * 0.5 <<
            " | 2 - 1л цена: " << Sum(choose, nazvanie) * 0.75 <<
            " | 3 - 1.5л цена: " << Sum(choose, nazvanie) << endl;
        cin >> vid;
        cout << "сколько штук" << endl;

        cin >> number;
        system("cls");
        if (vid == 1) {
            litr = "0.5";
            sum = Sum(choose, nazvanie) * 0.5;
        }
        else if (vid == 2) {
            litr = "1";
            sum = Sum(choose, nazvanie) * 0.75;
        }
        else if (vid == 3) {
            litr = "1.5";
            sum = Sum(choose, nazvanie);
        }
        else {
            cout << "такого же нету" << endl;
            goto V;
        }
        if (Proverka(choose, nazvanie) >= number) {
            user_choose = files.Chek(choose, nazvanie); cout << s << litr << "л " << user_choose << " цена - " << sum << " сумм" << endl;Korzinka(user_choose, number, litr, sum);
            obsumma += sum;
            Vichit(choose, nazvanie, number);
        }
        else {
            cout << nvn << proverit << " литров" << endl;goto V;
        }
    }
    void Sale(int choose) {

        string s;
        cout << "У нас сейчас действуют акции:" << endl;
        cout << "В данный момент работают первые две акции" << endl;
        ifstream fout("files\\sale.txt");
        while (!fout.eof()) {
            getline((fout), s);
            cout << s << endl;
        }
        fout.close();
    }
};
int main()
{
    setlocale(LC_ALL, "UTF-8");

    string s;
    Viborka vibor;
    Polzovatel polzovatel;
    File_work filework;
    Sale sale;
    
    int choose, Mchoose;

P:
    system("cls");
    cout << endl << endl;
    cout << "           VALORANT" << endl;
    cout << "        Онлайн магазин" << endl;
    cout << endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
    ///////////////////////////////////////                 Вход                ///////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
    cout << "******************************\n";
    cout << "  Админ - 1 | Покупатель - 2  \n";
    cout << "******************************\n";
    cin >> choose;
    if (choose == 1) {
        string login;
        string password;
        cout << "Введите логин:" << endl;
        cin >> login;
        cout << "Введите пароль:" << endl;
        cin >> password;
        if (login == "123" && password == "123") {
            system("cls");
            cout << "************************************\n";
            cout << "   Добро пожаловать администратор   " << endl;
            cout << "************************************\n";
            polzovatel.Admin();
            goto P;
        }
        else {
            system("cls");
            cout << "Неверно" << endl;
            goto P;
        }

    }
    else {
        system("cls");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    ////////////////////////////////////                 Регистрация                ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
        R:
        string user_name = "guest", user_password = "guest", user_location;
        ///     акции    ///
        cout << "*****************************\n";
        cout << "*****       АКЦИИ       *****" << endl;
        cout << "*****************************\n" << endl;

        vibor.Sale(choose);
        ////////////////////
        cout << "*****************************************************\n";
        cout << "  1 - Регистрация | 2 - Войти | 3 - Войти как гость  " << endl;
        cout << "*****************************************************\n";
        cin >> choose;
        if (choose == 1) {
            if (polzovatel.User_registration(user_name, user_password, user_location)) {
                system("cls");
                cout << "Ваши данные успешно добавленны" << endl << endl;
                goto S;
            }
            else {
                cout << "что то пошло не так";
            }
        }
        else if (choose == 2) {
            cout << "Введите свой логин" << endl;
            cin >> user_name;
            cout << "Введите свой пароль" << endl;
            cin >> user_password;
            if (polzovatel.User_enter(user_name, user_password)) {
                system("cls");
                cout << "Добро пожаловать " << user_name << endl;
                goto N;
            }
            else {
                system("cls");
                cout << "Логин или пароль введены неправильно" << endl;
                goto R;
            }

        }
        else if (choose == 3) {
            system("cls");
            goto S;
        }
        else {
            system("cls");
            cout << "Пожалуйста выберите данные цифры" << endl;
            goto R;
        }
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
        ////////////////////////////////////              Главная часть                 ///////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
    S:
        cout << "Добро пожаловать в Valorant\n";
    N:
        cout << "Покупайте по акции и экономьте более 10%" << endl;
        cout << "**********************************************************************************************************************" << endl<< endl;
        vibor.Sale(choose);
        cout << "**********************************************************************************************************************" << endl;

        cout << "Что вас интересует к покупке\n" << endl;
        cout << "1 - овощи\n2 - фрукты\n3 - молочные продукты\n4 - мясные изделия\n5 - приборы\n6 - сладости\n7 - выпечка\n8 - напитки\n9 - акции" << endl;
        cin >> Mchoose;
        system("cls");
        switch (Mchoose)
        {
        case 1: cout << "0 - назад\nОВОЩИ\n" << filework.Show_product("ovosh"); break;
        case 2: cout << "0 - назад\nФРУКТЫ\n" << filework.Show_product("frukt"); break;
        case 3: cout << "0 - назад\nМОЛОЧНЫЕ ПРОДУКТЫ\n" << filework.Show_product("molochka");break;
        case 4: cout << "0 - назад\nМЯСНЫЕ ИЗДЕЛИЯ\n" << filework.Show_product("meet");break;
        case 5: cout << "0 - назад\nПРИБОРЫ\n" << filework.Show_product("pribori");break;
        case 6: cout << "0 - назад\nСЛАДОСТИ - продавется только в кило\n" << filework.Show_product("sladost");break;
        case 7: cout << "0 - назад\nВЫПЕЧКА\n" << filework.Show_product("vipichka");break;
        case 8: cout << "0 - назад\nНАПИТКИ\n" << filework.Show_product("napitkalar");break;
        case 9: vibor.Sale(choose); break;
        default: {cout << "такого нету. попробуйте еще раз\n"; goto N; break;}
        }
        cin >> choose;
        system("cls");
        if (choose == 0) goto N;
        switch (Mchoose) {
        case 0: goto N; break;
        case 1: vibor.Ovosh(choose); break;
        case 2: vibor.Frukt(choose); break;
        case 3: vibor.Molochka(choose); break;
        case 4: vibor.Myasa(choose); break;
        case 5: vibor.Pribori(choose); break;
        case 6: vibor.Vipechka(choose); break;
        case 7: vibor.Konfeti(choose); break;
        case 8: vibor.Napitki(choose); break;
        default: {cout << "такого нету. попробуйте еще раз\n"; goto N; break;}
        }
        

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
        ////////////////////////////////////                 Конец покупки              ///////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
        cout<< endl << "1 - вернуться к покупкам\n2 - очистить корзину\n3 - показать корзину\n4 - завершить покупку  " << endl;
        cin >> choose;
        if (choose == 1) {
            goto N;
        }
        else if (choose == 2) {
            ofstream cln;
            cln.open("files\\korzina.txt", ofstream::out | ofstream::trunc);
            cln.close();
            cout << "хотите ли вы продолжить заказ? \n 1 - да | 2 - нет \n";
            cin >> choose;
            if (choose == 1) {
                goto N;
            }
            else {
                return 0;
            }
        }
        else if (choose == 3) {
            system("cls");
            ifstream fout("files\\korzina.txt");
            string line;
            if (fout.is_open())
            {
                while (getline(fout, line))
                {
                    cout << line << endl;
                }
            }
            fout.close();
            cout << endl;
            cout << "Желаете ли вы убрать что-нибудь из корзины \n 1 - да | 2 - нет" << endl;
            cin >> choose;
            if (choose == 1) {
                system("cls");
                filework.Ubrat_produkti();
                goto T;
            }
            else {
                T:
                cout << "Тогда давайте\n 1 - Вернемся к покупкам\n 2 - Завершим покупку" << endl;
                cin >> choose;
                if (choose == 1) goto N;
                else goto E;
            }
        }
        else if (choose == 4) {
        E:
            system("cls");
            cout << "спасибо за покупку. в вашей корзине:\n";
            
            ifstream fout("files\\korzina.txt");
            string line;
            if (fout.is_open())
            {
                while (getline(fout, line))
                {
                    cout << line << endl;
                }
            }
            fout.close();

            /////акция////////
            if (vibor.obsumma > 100000) {
                cout << "с учетом нашей акции скидка на 10%" << endl;
                vibor.obsumma -= vibor.obsumma * 0.1;
            }
            //////////////////

            cout << "Выбираете способ получения\n 1 - самовывоз | 2 - Доставка\nстоимость доставки - 10000\n В данный момент действует акция:\n при сумме от 150000 сумм доставка бесплатно" << endl;
            cin >> choose;
            if (choose == 2) {
                if (polzovatel.User_location(user_name, user_password) == "отсутствует")
                {
                    cout << "Ваше местоположение:" << endl;
                    string temp_locate;
                    cin >> temp_locate;
                    if (vibor.obsumma > 150000) {
                        cout << endl;
                        cout << "с учетом нашей акции доставка бесплатка" << endl;
                        vibor.obsumma -= 10000;
                    }
                    vibor.obsumma += 10000;
                }
                else {
                    cout << "Ваше местоположение: " << polzovatel.User_location(user_name, user_password) << endl;
                    if (vibor.obsumma > 150000) {
                        cout << "с учетом нашей акции доставка бесплатка" << endl;
                        vibor.obsumma -= 10000;
                    }
                    vibor.obsumma += 10000;
                }
            }
            system("cls");
            bool otmetka = true;
            while (otmetka = true) {
                cout << "Выбираете способ оплаты\n 1 - наличными | 2 - картой( В данный момент не работает, ведутся переговоры с банком )" << endl;
                cin >> choose;
                if (choose == 1) {
                    otmetka = false;
                    break;
                }
                else if (choose == 2) {
                    cout << "Ну почеловечески же написано, ну не работает" << endl;
                }
            }
            cout << "Прекрасно спасибо за покупку" << endl;
            cout << "С вас " << vibor.obsumma << " сумм" << endl;
            cout << "Ожидаем вас еще" << endl;
            ofstream cln;
            cln.open("files\\korzina.txt", ofstream::out | ofstream::trunc);
            cln.close();
            return 0;
        }
    }

}