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
    cout << "����Ҭ֬�ڬ�� ���� ����ڬ�� �ڬ٬ެ֬߬ڬ��" << endl;
    cout << "1 - �լ�ҬѬӬڬ�� �ܬ�ݬڬ�֬��Ӭ�\n2 - �ڬ٬ެ֬߬ڬ�� ��֬߬�\n3 - �ڬ٬ެ֬߬ڬ�� �Ѭܬ�ڬ�\n4 - ����ެ���֬�� ���ݬ�٬�ӬѬ�֬ݬ֬�\n5 - �լ�ҬѬӬڬ�� �߬�Ӭ�� ����լ�ܬ�" << endl;
    cin >> choose;
    system("cls");
    if (choose == 1) {
        int number, Mchoose;
        string vibor;
    K:
        cout << "1 - ��Ӭ���\n2 - ����ܬ��\n3 - �ެ�ݬ��߬�� ����լ�ܬ��\n4 - �ެ��߬�� �ڬ٬լ֬ݬڬ�\n5 - ���ڬҬ���\n6 - ��ݬѬլ����\n7 - �Ӭ��֬�ܬ�\n8 - �߬Ѭ�ڬ�ܬ�" << endl;
        cin >> Mchoose;
        system("cls");
        switch (Mchoose)
        {
        case 1: cout << "0 - �߬Ѭ٬Ѭ�\n����������\n" << fw.Show_product("ovosh") << endl; break;
        case 2: cout << "0 - �߬Ѭ٬Ѭ�\n������������\n" << fw.Show_product("frukt") << endl; break;
        case 3: cout << "0 - �߬Ѭ٬Ѭ�\n���������������� ����������������\n" << fw.Show_product("molochka") << endl;break;
        case 4: cout << "0 - �߬Ѭ٬Ѭ�\n������������ ��������������\n" << fw.Show_product("meet") << endl;break;
        case 5: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product("pribori") << endl;break;
        case 6: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product("sladost") << endl;break;
        case 7: cout << "0 - �߬Ѭ٬Ѭ�\n����������������\n" << fw.Show_product("vipichka") << endl;break;
        case 8: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product("napitkalar") << endl;break;
        }
        cin >> choose;
        system("cls");
        cout << "���ܬ�ݬ�ܬ� �Ӭ� ����ڬ�� �լ�ҬѬӬڬ��" << endl;
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
        cout << "�����֬�߬� �����ݬ߬֬߬�" << endl;
        cout << "����ڬ�� �ݬ� �Ӭ� �ڬ٬ެ֬߬ڬ�� �֬�� ���� �߬ڬҬ�լ�:\n 1 -�լ� | 2 - �߬֬�" << endl;
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
        cout << "1 - ��Ӭ���\n2 - ����ܬ��\n3 - �ެ�ݬ��߬�� ����լ�ܬ��\n4 - �ެ��߬�� �ڬ٬լ֬ݬڬ�\n5 - ���ڬҬ���\n6 - ��ݬѬլ����\n7 - �Ӭ��֬�ܬ�\n8 - �߬Ѭ�ڬ�ܬ�" << endl;
        cin >> Mchoose;
        system("cls");
        switch (Mchoose)
        {
        case 1: cout << "0 - �߬Ѭ٬Ѭ�\n����������\n" << fw.Show_product_with_sale("ovosh") << endl; break;
        case 2: cout << "0 - �߬Ѭ٬Ѭ�\n������������\n" << fw.Show_product_with_sale("frukt") << endl; break;
        case 3: cout << "0 - �߬Ѭ٬Ѭ�\n���������������� ����������������\n" << fw.Show_product_with_sale("molochka") << endl;break;
        case 4: cout << "0 - �߬Ѭ٬Ѭ�\n������������ ��������������\n" << fw.Show_product_with_sale("meet") << endl;break;
        case 5: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product_with_sale("pribori") << endl;break;
        case 6: cout << "0 - �߬Ѭ٬Ѭ�\n���������������� - ����լѬӬ֬��� ���ݬ�ܬ� �� �ܬڬݬ�\n" << fw.Show_product_with_sale("sladost") << endl;break;
        case 7: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product_with_sale("vipichka") << endl;break;
        case 8: cout << "0 - �߬Ѭ٬Ѭ�\n��������������\n" << fw.Show_product_with_sale("napitkalar") << endl;break;
        }
        cin >> choose;
        system("cls");
        cout << "�߬� �ܬѬܬ�� ���ެެ� ����ڬ�� ���ެ֬߬���" << endl;
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
        cout << "�����֬�߬� �ڬ٬ެ֬߬֬߬߬�" << endl;
        cout << "����ڬ�� �ݬ� �Ӭ� �ڬ٬ެ֬߬ڬ�� �֬�� ���� �߬ڬҬ�լ�:\n 1 -�լ� | 2 - �߬֬�" << endl;
        cin >> choose;
        if (choose == 1) {
            goto C;
        }
        else {
            goto S;
        }
    }
    /////////////���ܬ�ڬ�/////////////
    else if (choose == 3) {
        sale.Sale_Admin();
        goto S;
    }
    else if (choose == 4) {
        List_users();
        cout << "�߬Ѭجެڬ�� 1 �լݬ� �Ӭ���լ�" << endl;
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
        cout << "1 - ��Ӭ���\n2 - ����ܬ��\n3 - �ެ�ݬ��߬�� ����լ�ܬ��\n4 - �ެ��߬�� �ڬ٬լ֬ݬڬ�\n5 - ���ڬҬ���\n6 - ��ݬѬլ����\n7 - �Ӭ��֬�ܬ�\n8 - �߬Ѭ�ڬ�ܬ�" << endl;
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
        cout << "����ҬѬӬ��� �߬Ѭ٬ӬѬ߬ڬ� ����լ�ܬ��" << endl;
        cin >> product_name;
        cout << "����ҬѬӬ��� ��֬߬� ����լ�ܬ��" << endl;
        cin >> sale;
        cout << "����ҬѬӬ��� ��ܬ�ݬ�ܬ� �֬��� �� �߬Ѭݬڬ�ڬ� ����լ�ܬ��" << endl;
        cin >> amount;
        ofstream fout("files\\"+vibor+".txt", ios_base::app);
        fout << num << " - " << product_name << " ++ " << sale << " ++ " << amount << endl;
        fout.close();

        cout << "�����լ�ܬ� ����֬�߬� �լ�ҬѬӬݬ֬�" << endl;
        cout << "�����ڬ�� �ݬ� �լ�ҬѬӬڬ�� �֬�� ����լ�ܬ�\n 1 - �լ� | 2 - �߬֬�" << endl;
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
    cout << "����ҬѬӬ��� ��߬ڬܬѬݬ�߬�� �ݬ�Ԭڬ�" << endl;
    cin >> user_name;
    cout << "����ڬլ�ެѬ۬�� ��Ѭ��ݬ�" << endl;
    cin >> user_pass;
    cout << "����ҬѬӬ��� �ݬ�ܬѬ�ڬ�" << endl;
    cin >> location;
    ifstream fin("files//user.txt");
    if (fin.is_open()) {
        string qwe;
        while (fin >> qwe) {
            if (qwe == user_name) {
                fin.close();
                system("cls");
                cout << "�� ���جѬݬ֬߬ڬ� ����� �ݬ�Ԭڬ� �٬Ѭ߬��" << endl;
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
    string locate = "��������Ӭ�֬�";
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