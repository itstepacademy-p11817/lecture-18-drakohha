#include <iostream>
#include <time.h>
#include <stdlib.h>

void sort_recurs(int a[],int hi, int lo) {
	static int ind = 0;
	static int temp = 0;
	static int P;
	P= a[hi];
	while (lo < hi) {
	
			if (a[lo] > a[hi]) {
				temp = a[lo];
				a[lo] = a[hi];
				a[hi] = temp;
				
				



				std::cout << "\n";
				for (int j = 0; j < 10; j++) {
					std::cout << " " << a[j];
				}
				
				sort_recurs(a, hi, lo);
				sort_recurs(a, lo, 0);
				
			}
			lo++;
			
	}

}

int main() {
	srand(time(NULL));
	int flag_menu = 1;
	int a[10] = { 0 };
	int temp = 0;
	int ind = 0;
	int ind_2 = 0;
	int ind_3 = 0;
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 9;
	}


	do {
		std::cout << "\n" << "Viberete sposob sortirovki : 1-4, 0-vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 5) {
			for (int i = 0; i < 10; i++) {
				a[i] = rand() % 9;
			}

		}

		if (flag_menu == 1) {
			
			ind = 0;
			ind_2 = 0;
			
			std::cout << "\n" << "ishodnui massiv =" << "\n";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}

			std::cout << "\n" << "sortirovka vstavkami :";
			
			do {
				for (int i = ind; i < 10; i++) {
					if (a[i] <= a[ind_2]) {
						ind_2 = i;
					}
			}
				temp = a[ind];
				a[ind] = a[ind_2];
				a[ind_2] = temp;
				ind++;
				ind_2 = ind;
				std::cout << "\n";
				for (int j = 0; j < 10; j++) {
					std::cout << " " << a[j];
				}
			
			} while (ind != 9);
			
			
			std::cout << "\n" << "Otsortirovanui massiv = ";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}
			ind = 0;
		}


		if (flag_menu == 2) {

			std::cout << "\n" << "ishodnui massiv =" << "\n";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}

			std::cout << "\n" << "sort obmenom";
			ind = 0;
			ind_2 = 0;
			for (int i = 0; i < 10; i++) {
				for (int j = ind; j < 10; j++)
				{
					if (a[j] <= a[ind_2]) {
						ind_2 = j;
					}
				}
				temp = a[i];
				a[i] = a[ind_2];
				a[ind_2] = temp;
				ind++;
				ind_2 = ind;
				std::cout << "\n";
				for (int j = 0; j < 10; j++) {
					std::cout << " " << a[j];
				}
			}

			std::cout << "\n" << "Otsortirovanui massiv = ";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}


		}
	
	
		if (flag_menu == 3) {

			std::cout << "\n" << "Sort puzirek :";

			std::cout << "\n" << "ishodnui massiv =" << "\n";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}
			ind_2 = 1;
			ind_3 = 0;
			ind_3 = 1;
			do {
				ind_3 = 1;
				for (int i = 0; i < 9; i++) {
					
					if (a[i] >= a[i + 1]) {
					temp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = temp;
					ind_3 ++;

				}
					
				}
				if (ind_3 == 1) {
					ind_2 = 0;
				}
				ind++;
				if (ind >= 9) {
					ind_2 = 0;
				}
				std::cout << "\n";
				for (int j = 0; j < 10; j++) {
					std::cout << " " << a[j];
				}

			} while (ind_2 != 0);
			std::cout << "\n" << "Otsortirovanui massiv = ";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}

		}

		if (flag_menu == 4) {


			std::cout << "\n" << "nipan9tna9 fign9=";

			std::cout << "\n" << "ishodnui massiv =" << "\n";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}


			sort_recurs(a, 9, 0);

			std::cout << "\n" << "Otsortirovanui massiv = ";
			for (int j = 0; j < 10; j++) {
				std::cout << " " << a[j];
			}

		}

	
	} while (flag_menu != 0);
}