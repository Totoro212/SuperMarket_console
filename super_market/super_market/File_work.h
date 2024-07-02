#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class File_work
{
public:
	void Update(int n, string* ss, string vibor);
	void Vichit(int choose, string vibor, int number);
	int Proverka(int choose, string vibor);
	string Chek(int choose, string vibor);
	double Sum(int choose, string vibor);
	void Korzinka(string name, double kolichestvo, string vid, int sum);
	void Add(int choose, string vibor, int number);
	void Change_sale(int choose, string vibor, int number);
	string Show_product(string vibor);
	string Show_product_with_sale(string vibor);
	void Ubrat_produkti();
};
