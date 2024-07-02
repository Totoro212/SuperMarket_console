#include "Sale.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Sale::Sale_Admin() {

    string s;
    int choose, i = 1;
    S:
    cout << "1 - ¬¥¬à¬Ò¬Ñ¬Ó¬Ú¬ä¬î ¬Ñ¬Ü¬è¬Ú¬ð | 2 - ¬µ¬Õ¬Ñ¬Ý¬Ú¬ä¬î ¬Ñ¬Ü¬è¬Ú¬ð" << endl;
    cin >> choose;
    if (choose == 1) {
        string add_sale;
        ofstream fout("files\\sale.txt", ios_base::app);
        cout << "¬¥¬à¬Ò¬Ñ¬Ó¬î¬ä¬Ö ¬ß¬Ñ¬Ù¬Ó¬Ñ¬ß¬Ú¬Ö ¬Ñ¬Ü¬è¬Ú¬Ú" << endl;
        getline(cin, add_sale);
        fout << add_sale << endl;
        fout.close();

        cout << "¬¡¬Ü¬è¬Ú¬ñ ¬å¬ã¬á¬Ö¬ê¬ß¬à ¬Õ¬à¬Ò¬Ñ¬Ó¬Ý¬Ö¬ß¬Ñ. ¬°¬ã¬ä¬Ñ¬Ý¬à¬ã¬î ¬ß¬Ñ¬á¬Ú¬ã¬Ñ¬ä¬î ¬Ü¬à¬Õ ¬ß¬Ñ ¬ï¬ä¬å ¬Ñ¬Ü¬è¬Ú¬ð" << endl;
        cout << "¬·¬à¬ä¬Ú¬ä¬Ö ¬Ý¬Ú ¬á¬â¬à¬Õ¬à¬Ý¬Ø¬Ú¬ä¬î ¬ã ¬Ñ¬Ü¬è¬Ú¬ñ¬Þ¬Ú\n 1 - ¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
        cin >> choose;
        system("cls");
        if (choose == 1) {
            goto S;
        }
        else {
            return;
        }
    }
    // ¬µ¬Õ¬Ñ¬Ý¬Ö¬ß¬Ú¬Ö ¬á¬à ¬ß¬à¬Þ¬Ö¬â¬å ¬ã¬ä¬â¬à¬Ü¬Ú
    else {
        ifstream fin("files\\sale.txt");
        while (getline(fin, s)) {
            cout << s << endl;
        }
        fin.close();

        cout << "¬¬¬Ñ¬Ü¬à¬Û ¬ß¬à¬Þ¬Ö¬â ¬å¬Õ¬Ñ¬Ý¬Ú¬ä¬î?" << endl;
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

        cout << "¬¡¬Ü¬è¬Ú¬ñ ¬å¬ã¬á¬Ö¬ê¬ß¬à ¬å¬Õ¬Ñ¬Ý¬Ö¬ß¬Ñ" << endl;
        cout << "¬·¬à¬ä¬Ú¬ä¬Ö ¬Ý¬Ú ¬á¬â¬à¬Õ¬à¬Ý¬Ø¬Ú¬ä¬î ¬ã ¬Ñ¬Ü¬è¬Ú¬ñ¬Þ¬Ú\n 1 - ¬Õ¬Ñ | 2 - ¬ß¬Ö¬ä" << endl;
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