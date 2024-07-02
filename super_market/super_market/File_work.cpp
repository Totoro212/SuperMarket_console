#include "File_work.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void File_work::Update(int n, string* ss, string vibor) {
    fstream file("files\\" + vibor + ".txt", ios::out);
    int i = 0;
    while (n > i) {
        
        if (ss[i++] != "")
        {
            i--;
            file << ss[i++] << endl;
        }
    }
    file.close();
}



void File_work::Vichit(int choose, string vibor, int number) {
    string s, ss[100];
    fstream file("files\\" + vibor + ".txt", ios::in | ios::out);
    int i = 1, j = 0;
    while (!file.eof()) {
        getline((file), s);
        if (choose == i++) {
            string chislo = s.substr(s.find_last_of("++") + 2, s.length() - s.find_last_of("++"));
            int chislo_int = stoi(chislo);
            chislo_int -= number;
            s = s.substr(0, s.find_last_of("++") + 2) + to_string(chislo_int);
            ss[j++] = s;
        }
        else
            ss[j++] = s;
    }
    file.close();
    Update(j, ss, vibor);
}

void File_work::Change_sale(int choose, string vibor, int number) {
    string s, ss[100];
    fstream file("files\\" + vibor + ".txt", ios::in | ios::out);
    int i = 1, j = 0;
    while (!file.eof()) {
        getline((file), s);
        if (choose == i++) {
            string chislo = s.substr(s.find_first_of("++") + 3,s.find_last_of("++")-1);
            int chislo_int = stoi(chislo);
            chislo_int = number;
            s = s.substr(0, s.find_first_of("++") + 3) + to_string(chislo_int) + s.substr(s.find_last_of("++")-2);
            ss[j++] = s;
        }
        else
            ss[j++] = s;
    }
    file.close();
    Update(j, ss, vibor);
}

void File_work::Add(int choose, string vibor, int number) {
    string s, ss[100];
    fstream file("files\\" + vibor + ".txt", ios::in | ios::out);
    int i = 1, j = 0;
    while (!file.eof()) {
        getline((file), s);
        if (choose == i++) {
            string chislo = s.substr(s.find_last_of("++") + 2, s.length() - s.find_last_of("++"));
            int chislo_int = stoi(chislo);
            chislo_int += number;
            s = s.substr(0, s.find_last_of("++") + 2) + to_string(chislo_int);
            ss[j++] = s;
        }
        else
            ss[j++] = s;
    }
    file.close();
    Update(j, ss, vibor);
}



int File_work::Proverka(int choose, string vibor) {
    string s; int i = 1;
    ifstream fout("files\\" + vibor + ".txt");
    while (!fout.eof()) {
        getline((fout), s);
        if (choose == i++) {
            s = s.substr(s.find_last_of("++") + 2, s.length() - s.find_last_of("++"));
            fout.close();
            return atoi(s.c_str());
        }
    }
}


string File_work::Chek(int choose, string vibor) {
    string s; int i = 1;
    ifstream fout("files\\" + vibor + ".txt");
    while (!fout.eof()) {
        getline((fout), s);
        if (choose == i++) {
            s = s.substr(s.find("- ") + 2, s.find("++")- s.find("- ")-3);
            fout.close();
            return s;
        }
    }
}


double File_work::Sum(int choose, string vibor) {
    string s; int i = 1;
    ifstream fin("files\\" + vibor + ".txt");
    while (!fin.eof()) {
        getline((fin), s);
        if (choose == i++) {
            s = s.substr(s.find("++") + 2);
            s = s.substr(0, s.find("++"));
            fin.close();
            return atoi(s.c_str());
        }
    }

}


void File_work::Korzinka(string name, double kolichestvo, string vid, int sum) {
    string ks = "�� �ӬѬ�֬� �ܬ��٬ڬ߬�";
    string nazvanie;
    ofstream fin("files\\korzina.txt", ios::app);// ����լ�ݬج֬߬ڬ� �٬Ѭ�ڬ�� �� ��Ѭ۬�
    if (fin.is_open()) {
        fin << kolichestvo << " �ܬڬݬ�/�ݬڬ����/����� " << vid << name << " ��֬߬� - " << sum << endl;
        fin.close();
    }
    else
    {
        cout << "Error!" << endl;
        fin.close();
    }

}



void File_work::Ubrat_produkti() {
    string s;
    int choose;
S:
    ifstream fin("files\\korzina.txt");
    while (getline(fin, s)) {
        cout << s << endl;
    }
    fin.close();

    cout << "���Ѭܬ�� �߬�ެ֬� ��լѬݬڬ��?" << endl;
    int delete_choice;
    cin >> delete_choice;

    ifstream in_file("files\\korzina.txt");
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

    remove("files\\korzina.txt");
    rename("files\\temp.txt", "files\\korzina.txt");

    cout << "���ܬ�ڬ� ����֬�߬� ��լѬݬ֬߬�" << endl;
    cout << "���֬ݬѬ֬�� �ݬ� �֬�� ���� �߬ڬҬ�լ� ��Ҭ�Ѭ�� �ڬ� �ܬ��٬ڬ߬�?\n 1 - �լ� | 2 - �߬֬�" << endl;
    cin >> choose;
    system("cls");
    if (choose == 1) {
        goto S;
    }
    else {
        return;
    }
}
string File_work::Show_product(string vibor) {
    string s, result;
    ifstream fin("files\\" + vibor + ".txt");
    if (fin.is_open()) {
        while (getline(fin, s)) {
            size_t firstPos = s.find("++");
            if (firstPos != string::npos) {
                size_t secondPos = s.find_last_of("++");
                if (secondPos != string::npos) {
                    string part1 = s.substr(0, firstPos);
                    string part2 = s.substr(secondPos+2);
                    result += part1 + "�ܬ�ݬڬ�֬��Ӭ� - " + part2 + "\n";
                }
                else {
                    result += s + "\n";
                }
            }
            else {
                result += s + "\n";
            }
        }
        fin.close();
    }

    return result;
}

string File_work::Show_product_with_sale(string vibor) {
    string s, result;
    ifstream fin("files\\" + vibor + ".txt");
    if (fin.is_open()) {
        while (getline(fin, s)) {
            size_t firstPos = s.find("++");
            if (firstPos != string::npos) {
                size_t secondPos = s.find_last_of("++"); 
                if (secondPos != string::npos) {
                    string part1 = s.substr(0, firstPos); 
                    string part2 = s.substr(firstPos + 3, secondPos - firstPos - 4); 
                    result += part1 + "��֬߬� - " + part2 + "\n";
                }
                else {
                    result += s + "\n"; 
                }
            }
            else {
                result += s + "\n";
            }
        }
        fin.close();
    }

    return result;
}