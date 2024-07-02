#include "Polzovatel.h"
#include "Sale.h"
#include "File_work.h"
#include <iostream>
#include <string>
using namespace std;
File_work fw;
Sale sale;
void Polzovatel::Admin() {
    int choose;
        system("cls");
    S:
    cout << "¬£¬í¬Ò¬Ö¬â¬Ú¬ä¬Ö ¬é¬ä¬à ¬ç¬à¬ä¬Ú¬ä¬Ö ¬Ú¬Ù¬Þ¬Ö¬ß¬Ú¬ä¬î" << endl;
    cout << "1 - ¬Õ¬à¬Ò¬Ñ¬Ó¬Ú¬ä¬î ¬Ü¬à¬Ý¬Ú¬é¬Ö¬ã¬ä¬Ó¬à\n2 - ¬Ú¬Ù¬Þ¬Ö¬ß¬Ú¬ä¬î ¬è¬Ö¬ß¬å\n3 - ¬Ú¬Ù¬Þ¬Ö¬ß¬Ú¬ä¬î ¬Ñ¬Ü¬è¬Ú¬ð\n4 - ¬á¬à¬ã¬Þ¬à¬ä¬â¬Ö¬ä¬î ¬á¬à¬Ý¬î¬Ù¬à¬Ó¬Ñ¬ä¬Ö¬Ý¬Ö¬Û\n5 - ¬Õ¬à¬Ò¬Ñ¬Ó¬Ú¬ä¬î ¬ß¬à¬Ó¬í¬Û ¬á¬â¬à¬Õ¬å¬Ü¬ä" << endl;
    cin >> choose;
    system("cls");
    if (choose == 1) {
        int number, Mchoose;
        string vibor;
    K:
        cout << "1 - ¬à¬Ó¬à¬ë¬Ú\n2 - ¬æ¬â¬å¬Ü¬ä¬í\n3 - ¬Þ¬à¬Ý¬à¬é¬ß¬í¬Ö ¬á¬â¬à¬Õ¬å¬Ü¬ä¬í\n4 - ¬Þ¬ñ¬ã¬ß¬í¬Ö ¬Ú¬Ù¬Õ¬Ö¬Ý¬Ú¬ñ\n5 - ¬á¬â¬Ú¬Ò¬à¬â¬í\n6 - ¬ã¬Ý¬Ñ¬Õ¬à¬ã¬ä¬Ú\n7 - ¬Ó¬í¬á¬Ö¬é¬Ü¬Ñ\n8 - ¬ß¬Ñ¬á¬Ú¬ä¬Ü¬Ú" << endl;
        cin >> Mchoose;
        system("cls");
        switch (Mchoose)
        {
        case 1: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬°¬£¬°¬»¬ª\n" << fw.Show_product("ovosh") << endl; break;
        case 2: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬¶¬²¬µ¬¬¬´¬½\n" << fw.Show_product("frukt") << endl; break;
        case 3: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬®¬°¬­¬°¬¹¬¯¬½¬¦ ¬±¬²¬°¬¥¬µ¬¬¬´¬½\n" << fw.Show_product("molochka") << endl;break;
        case 4: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬®¬Á¬³¬¯¬½¬¦ ¬ª¬©¬¥¬¦¬­¬ª¬Á\n" << fw.Show_product("meet") << endl;break;
        case 5: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬±¬²¬ª¬¢¬°¬²¬½\n" << fw.Show_product("pribori") << endl;break;
        case 6: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬£¬½¬±¬¦¬¹¬¬¬¡\n" << fw.Show_product("sladost") << endl;break;
        case 7: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬³¬­¬¡¬¥¬°¬³¬´¬ª\n" << fw.Show_product("vipichka") << endl;break;
        case 8: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬¯¬¡¬±¬ª¬´¬¬¬ª\n" << fw.Show_product("napitkalar") << endl;break;
        }
        cin >> choose;
        system("cls");
        cout << "¬³¬Ü¬à¬Ý¬î¬Ü¬à ¬Ó¬í ¬ç¬à¬ä¬Ú¬ä¬Ö ¬Õ¬à¬Ò¬Ñ¬Ó¬Ú¬ä¬î" << endl;
        cin >> number;
        if (choose == 0) goto K;
        else if (choose == 1 || choose == 2 || choose == 3 || choose == 4 || choose == 5 || choose == 6 || choose == 7 || choose == 8)
        {
            switch (Mchoose) {
            case 1: vibor = "ovosh";fw.Add(choose, vibor, number); break;
            case 2: vibor = "frukt";fw.Add(choose, vibor, number); break;
            case 3: vibor = "molochka";fw.Add(choose, vibor, number); break;
            case 4: vibor = "meet";fw.Add(choose, vibor, number); break;
            case 5: vibor = "pribori";fw.Add(choose, vibor, number); break;
            case 6: vibor = "vipichka";fw.Add(choose, vibor, number); break;
            case 7: vibor = "sladost";fw.Add(choose, vibor, number); break;
            case 8: vibor = "napitkalar";fw.Add(choose, vibor, number); break;
            }
        }
        cout << "¬µ¬ã¬á¬Ö¬ê¬ß¬à ¬á¬à¬á¬à¬Ý¬ß¬Ö¬ß¬à" << endl;
        cout << "¬ç¬à¬ä¬Ú¬ä¬Ö ¬Ý¬Ú ¬Ó¬í ¬Ú¬Ù¬Þ¬Ö¬ß¬Ú¬ä¬î ¬Ö¬ë¬Ö ¬é¬ä¬à ¬ß¬Ú¬Ò¬å¬Õ¬î:\n 1 -¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
        cin >> choose;
        if (choose == 1) {
            goto K;
        }
        else {
            goto S;
        }
    }
    else if (choose == 2) {
        int number, Mchoose;
        string vibor;
    C:
        cout << "1 - ¬à¬Ó¬à¬ë¬Ú\n2 - ¬æ¬â¬å¬Ü¬ä¬í\n3 - ¬Þ¬à¬Ý¬à¬é¬ß¬í¬Ö ¬á¬â¬à¬Õ¬å¬Ü¬ä¬í\n4 - ¬Þ¬ñ¬ã¬ß¬í¬Ö ¬Ú¬Ù¬Õ¬Ö¬Ý¬Ú¬ñ\n5 - ¬á¬â¬Ú¬Ò¬à¬â¬í\n6 - ¬ã¬Ý¬Ñ¬Õ¬à¬ã¬ä¬Ú\n7 - ¬Ó¬í¬á¬Ö¬é¬Ü¬Ñ\n8 - ¬ß¬Ñ¬á¬Ú¬ä¬Ü¬Ú" << endl;
        cin >> Mchoose;
        system("cls");
        switch (Mchoose)
        {
        case 1: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬°¬£¬°¬»¬ª\n" << fw.Show_product_with_sale("ovosh") << endl; break;
        case 2: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬¶¬²¬µ¬¬¬´¬½\n" << fw.Show_product_with_sale("frukt") << endl; break;
        case 3: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬®¬°¬­¬°¬¹¬¯¬½¬¦ ¬±¬²¬°¬¥¬µ¬¬¬´¬½\n" << fw.Show_product_with_sale("molochka") << endl;break;
        case 4: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬®¬Á¬³¬¯¬½¬¦ ¬ª¬©¬¥¬¦¬­¬ª¬Á\n" << fw.Show_product_with_sale("meet") << endl;break;
        case 5: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬±¬²¬ª¬¢¬°¬²¬½\n" << fw.Show_product_with_sale("pribori") << endl;break;
        case 6: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬³¬­¬¡¬¥¬°¬³¬´¬ª - ¬á¬â¬à¬Õ¬Ñ¬Ó¬Ö¬ä¬ã¬ñ ¬ä¬à¬Ý¬î¬Ü¬à ¬Ó ¬Ü¬Ú¬Ý¬à\n" << fw.Show_product_with_sale("sladost") << endl;break;
        case 7: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬£¬½¬±¬¦¬¹¬¬¬¡\n" << fw.Show_product_with_sale("vipichka") << endl;break;
        case 8: cout << "0 - ¬ß¬Ñ¬Ù¬Ñ¬Õ\n¬¯¬¡¬±¬ª¬´¬¬¬ª\n" << fw.Show_product_with_sale("napitkalar") << endl;break;
        }
        cin >> choose;
        system("cls");
        cout << "¬ß¬Ñ ¬Ü¬Ñ¬Ü¬å¬ð ¬ã¬å¬Þ¬Þ¬å ¬ç¬à¬ä¬Ú¬ä¬Ö ¬á¬à¬Þ¬Ö¬ß¬ñ¬ä¬î" << endl;
        cin >> number;
        if (choose == 0) goto C;
        else if (choose == 1 || choose == 2 || choose == 3 || choose == 4 || choose == 5 || choose == 6 || choose == 7 || choose == 8)
        {
            switch (Mchoose) {
            case 1: vibor = "ovosh";fw.Change_sale(choose, vibor, number); break;
            case 2: vibor = "frukt";fw.Change_sale(choose, vibor, number); break;
            case 3: vibor = "molochka";fw.Change_sale(choose, vibor, number); break;
            case 4: vibor = "meet";fw.Change_sale(choose, vibor, number); break;
            case 5: vibor = "pribori";fw.Change_sale(choose, vibor, number); break;
            case 6: vibor = "vipichka";fw.Change_sale(choose, vibor, number); break;
            case 7: vibor = "sladost";fw.Change_sale(choose, vibor, number); break;
            case 8: vibor = "napitkalar";fw.Change_sale(choose, vibor, number); break;
            }
        }
        cout << "¬µ¬ã¬á¬Ö¬ê¬ß¬à ¬Ú¬Ù¬Þ¬Ö¬ß¬Ö¬ß¬ß¬à" << endl;
        cout << "¬ç¬à¬ä¬Ú¬ä¬Ö ¬Ý¬Ú ¬Ó¬í ¬Ú¬Ù¬Þ¬Ö¬ß¬Ú¬ä¬î ¬Ö¬ë¬Ö ¬é¬ä¬à ¬ß¬Ú¬Ò¬å¬Õ¬î:\n 1 -¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
        cin >> choose;
        if (choose == 1) {
            goto C;
        }
        else {
            goto S;
        }
    }
    /////////////¬¡¬Ü¬è¬Ú¬Ú/////////////
    else if (choose == 3) {
        sale.Sale_Admin();
        goto S;
    }
    else if (choose == 4) {
        List_users();
        cout << "¬ß¬Ñ¬Ø¬Þ¬Ú¬ä¬Ö 1 ¬Õ¬Ý¬ñ ¬Ó¬í¬ç¬à¬Õ¬Ñ" << endl;
        cin >> choose;
        if (choose == 1) return;
    }
    else if (choose == 5) {


        int Mchoose;
        string vibor;
        string product_name;
        int sale;
        int amount;
        D:
        int num = 1;
        cout << "1 - ¬à¬Ó¬à¬ë¬Ú\n2 - ¬æ¬â¬å¬Ü¬ä¬í\n3 - ¬Þ¬à¬Ý¬à¬é¬ß¬í¬Ö ¬á¬â¬à¬Õ¬å¬Ü¬ä¬í\n4 - ¬Þ¬ñ¬ã¬ß¬í¬Ö ¬Ú¬Ù¬Õ¬Ö¬Ý¬Ú¬ñ\n5 - ¬á¬â¬Ú¬Ò¬à¬â¬í\n6 - ¬ã¬Ý¬Ñ¬Õ¬à¬ã¬ä¬Ú\n7 - ¬Ó¬í¬á¬Ö¬é¬Ü¬Ñ\n8 - ¬ß¬Ñ¬á¬Ú¬ä¬Ü¬Ú" << endl;
        cin >> Mchoose;
        switch (Mchoose)
        {
        case 1: vibor = "ovosh"; break;
        case 2: vibor = "frukt"; break;
        case 3: vibor = "molochka";break;
        case 4: vibor = "meet";break;
        case 5: vibor = "pribori";break;
        case 6: vibor = "vipichka";break;
        case 7: vibor = "sladost";break;
        case 8: vibor = "napitkalar";break;
        }
        string s; int i = 1;
        ifstream fin("files\\" + vibor + ".txt");
        while (getline(fin, s)) {
            if (s !="") {
                num++;
            }
        }        
        fin.close();
        system("cls");
        cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬ß¬Ñ¬Ù¬Ó¬Ñ¬ß¬Ú¬Ö ¬á¬â¬à¬Õ¬å¬Ü¬ä¬Ñ" << endl;
        cin >> product_name;
        cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬è¬Ö¬ß¬å ¬á¬â¬à¬Õ¬å¬Ü¬ä¬å" << endl;
        cin >> sale;
        cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬ã¬Ü¬à¬Ý¬î¬Ü¬à ¬Ö¬ã¬ä¬î ¬Ó ¬ß¬Ñ¬Ý¬Ú¬é¬Ú¬Ú ¬á¬â¬à¬Õ¬å¬Ü¬ä¬Ñ" << endl;
        cin >> amount;
        ofstream fout("files\\"+vibor+".txt", ios_base::app);
        fout << num << " - " << product_name << " ++ " << sale << " ++ " << amount << endl;
        fout.close();

        cout << "¬±¬â¬à¬Õ¬å¬Ü¬ä ¬å¬ã¬á¬Ö¬ê¬ß¬à ¬Õ¬à¬Ò¬Ñ¬Ó¬Ý¬Ö¬ß" << endl;
        cout << "¬·¬à¬ä¬Ú¬ä¬Ö ¬Ý¬Ú ¬Õ¬à¬Ò¬Ñ¬Ó¬Ú¬ä¬î ¬Ö¬ë¬Ö ¬á¬â¬à¬Õ¬å¬Ü¬ä\n 1 - ¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
        cin >> choose;
        system("cls");
        if (choose == 1) {
            goto D;
        }
        else {
            goto S;
        }
    }
}
bool Polzovatel::User_registration(string user_login, string user_password, string user_location) {
    int choose = 0;
    string s;
    string user_name, user_pass, location, login;
S:
    cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬å¬ß¬Ú¬Ü¬Ñ¬Ý¬î¬ß¬í¬Û ¬Ý¬à¬Ô¬Ú¬ß" << endl;
    cin >> user_name;
    cout << "¬±¬â¬Ú¬Õ¬å¬Þ¬Ñ¬Û¬ä¬Ö ¬á¬Ñ¬â¬à¬Ý¬î" << endl;
    cin >> user_pass;
    cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬Ý¬à¬Ü¬Ñ¬è¬Ú¬ð" << endl;
    cin >> location;
    ifstream fin("files//user.txt");
    if (fin.is_open()) {
        string qwe;
        while (fin >> qwe) {
            if (qwe == user_name) {
                fin.close();
                system("cls");
                cout << "¬Ü ¬ã¬à¬Ø¬Ñ¬Ý¬Ö¬ß¬Ú¬ð ¬ï¬ä¬à¬ä ¬Ý¬à¬Ô¬Ú¬ß ¬Ù¬Ñ¬ß¬ñ¬ä" << endl;
                goto S;
            }
        }
        fin.close();
    }

    ofstream fout("files//user.txt", ios::app);
    if (fout.is_open()) {
        fout << user_name + " -- " + user_pass + " -- " + location << endl;
        fout.close();
        return true;
    }
}
bool Polzovatel::User_enter(string user_login, string user_password) {
    int choose = 0;
    string s;
    string user_name, user_pass, login;
    ifstream fin("files//user.txt");
    if (fin.is_open()) {
        while (getline(fin, s)) {
            size_t firstPos = s.find("--");
            size_t secondPos = s.find_last_of("--");
            string login = s.substr(0, s.find("--") - 1);
            string pass = s.substr(s.find("--") + 3, secondPos - firstPos - 5);
            if (login == user_login && pass == user_password) {
                fin.close();
                return true;
            }
        }
        fin.close();
    }
    return false;
}
string Polzovatel::User_location(string user_login, string user_password) {
    string locate = "¬à¬ä¬ã¬å¬ä¬ã¬ä¬Ó¬å¬Ö¬ä";
    string s;
    string user_name, user_pass, login;
    ifstream fin("files//user.txt");
    if (user_login == "guest" && user_password == "guest") {
        return locate;
    }
    if (fin.is_open()) {
        while (getline(fin, s)) {
            size_t firstPos = s.find("--");
            size_t secondPos = s.find_last_of("--");
            string login = s.substr(0, s.find("--") - 1);
            string pass = s.substr(s.find("--") + 3, secondPos - firstPos - 5);
            locate = s.substr(secondPos+2);
            if (login == user_login && pass == user_password) {
                fin.close();
                return locate;
            }
        }
        fin.close();
    }
    return locate;
}
string Polzovatel::List_users() {
    string s;
    ifstream fin("files\\user.txt");
    string result;

    if (fin.is_open()) {
        while (getline(fin, s)) {
            cout << s << endl;  
        }
        fin.close();
    }

    return result;
}