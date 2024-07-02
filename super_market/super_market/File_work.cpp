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
    string ks = "¬Ó ¬Ó¬Ñ¬ê¬Ö¬Û ¬Ü¬à¬â¬Ù¬Ú¬ß¬Ö";
    string nazvanie;
    ofstream fin("files\\korzina.txt", ios::app);// ¬á¬â¬à¬Õ¬à¬Ý¬Ø¬Ö¬ß¬Ú¬Ö ¬Ù¬Ñ¬á¬Ú¬ã¬Ú ¬Ó ¬æ¬Ñ¬Û¬Ý
    if (fin.is_open()) {
        fin << kolichestvo << " ¬Ü¬Ú¬Ý¬à/¬Ý¬Ú¬ä¬â¬à¬Ó/¬ê¬ä¬å¬Ü " << vid << name << " ¬è¬Ö¬ß¬Ñ - " << sum << endl;
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

    cout << "¬¬¬Ñ¬Ü¬à¬Û ¬ß¬à¬Þ¬Ö¬â ¬å¬Õ¬Ñ¬Ý¬Ú¬ä¬î?" << endl;
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

    cout << "¬¡¬Ü¬è¬Ú¬ñ ¬å¬ã¬á¬Ö¬ê¬ß¬à ¬å¬Õ¬Ñ¬Ý¬Ö¬ß¬Ñ" << endl;
    cout << "¬¨¬Ö¬Ý¬Ñ¬Ö¬ä¬Ö ¬Ý¬Ú ¬Ö¬ë¬Ö ¬é¬ä¬à ¬ß¬Ú¬Ò¬å¬Õ¬î ¬å¬Ò¬â¬Ñ¬ä¬î ¬Ú¬Ù ¬Ü¬à¬â¬Ù¬Ú¬ß¬í?\n 1 - ¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
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
                    result += part1 + "¬Ü¬à¬Ý¬Ú¬é¬Ö¬ã¬ä¬Ó¬à - " + part2 + "\n";
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
                    result += part1 + "¬è¬Ö¬ß¬Ñ - " + part2 + "\n";
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