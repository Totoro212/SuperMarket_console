#include "Sale.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Sale::Sale_Admin() {

    string s;
    int choose, i = 1;
    S:
    cout << "1 - ����ҬѬӬڬ�� �Ѭܬ�ڬ� | 2 - ���լѬݬڬ�� �Ѭܬ�ڬ�" << endl;
    cin >> choose;
    if (choose == 1) {
        string add_sale;
        ofstream fout("files\\sale.txt", ios_base::app);
        cout << "����ҬѬӬ��� �߬Ѭ٬ӬѬ߬ڬ� �Ѭܬ�ڬ�" << endl;
        getline(cin, add_sale);
        fout << add_sale << endl;
        fout.close();

        cout << "���ܬ�ڬ� ����֬�߬� �լ�ҬѬӬݬ֬߬�. �����Ѭݬ��� �߬Ѭ�ڬ�Ѭ�� �ܬ�� �߬� ���� �Ѭܬ�ڬ�" << endl;
        cout << "�����ڬ�� �ݬ� ����լ�ݬجڬ�� �� �Ѭܬ�ڬ�ެ�\n 1 - �լ� | 2 - �߬֬�" << endl;
        cin >> choose;
        system("cls");
        if (choose == 1) {
            goto S;
        }
        else {
            return;
        }
    }
    // ���լѬݬ֬߬ڬ� ��� �߬�ެ֬�� �����ܬ�
    else {
        ifstream fin("files\\sale.txt");
        while (getline(fin, s)) {
            cout << s << endl;
        }
        fin.close();

        cout << "���Ѭܬ�� �߬�ެ֬� ��լѬݬڬ��?" << endl;
        int delete_choice;
        cin >> delete_choice;

        ifstream in_file("files\\sale.txt");
        ofstream out_file("files\\temp.txt");

        int line_number = 1;
        while (getline(in_file, s)) {
            if (line_number != delete_choice) {
                out_file << s << endl;
            }
            line_number++;
        }
        in_file.close();
        out_file.close();

        remove("files\\sale.txt");
        rename("files\\temp.txt", "files\\sale.txt");

        cout << "���ܬ�ڬ� ����֬�߬� ��լѬݬ֬߬�" << endl;
        cout << "�����ڬ�� �ݬ� ����լ�ݬجڬ�� �� �Ѭܬ�ڬ�ެ�\n 1 - �լ� | 2 - �߬֬�" << endl;
        cin >> choose;
        system("cls");
        if (choose == 1) {
            goto S;
        }
        else {
            return;
        }
    }

    
}