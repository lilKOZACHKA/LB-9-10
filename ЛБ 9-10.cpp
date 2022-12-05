#include <iostream>
#include <conio.h>
using namespace std;

void ending() {
	cout << endl;
	cout << endl;
}

void task_1() {
	cout << " Вы выбрали задание 1" << endl;

	cout << " Сколько чисел вы хотите взять: ";
	int kit_numbers, in_the_end = 1;
	cin >> kit_numbers;
	int* arra_1 = new int[kit_numbers];
	cout << " Введите эти числа: ";
	for (int i = 0; i < kit_numbers; i++) {
		cin >> arra_1[i];
		if (arra_1[i] % 2 == 0)
			in_the_end = in_the_end * arra_1[i];
	}
	cout << " Произведение: " << in_the_end;
}

void task_2() {
	cout << " Вы выбрали задание 2" << endl;

	cout << " Сколько чисел вы хотите взять: ";
	int kit_numbers, max_minus = 0, min_mod = 0, pos_min = 0, pos_max = 0;
	cin >> kit_numbers;
	int* arra_1 = new int[kit_numbers];
	cout << " Введите эти числа: ";
	for (int i = 1; i < kit_numbers; i++) cin >> arra_1[i];
	for (int i = 1; i < kit_numbers; i++) {
		if (arra_1[i] < abs(min_mod)) {
			min_mod = arra_1[i];
			pos_min = i;
		}
		if (max_minus > arra_1[i] && arra_1[i] < 0) {
			max_minus = arra_1[i];
			pos_max = i;
		}
	}
	cout << " Минимальное по модулю число : " << min_mod << " на позиции: " << pos_min << endl;
	cout << " Максимальное отрицательное число : " << max_minus <<" на позиции: " << pos_max;
}

void task_3() {
	cout << " Вы выбрали задание 3" << endl;

	cout << " Сколько чисел вы хотите взять: ";
	int kit_numbers, back_number = 0;
	cin >> kit_numbers;
	int* arra_1 = new int[kit_numbers];
	cout << " Введите эти числа: ";
	for (int i = 1; i <= kit_numbers; i++) cin >> arra_1[i];
	for (int i = 1; i <= kit_numbers; i++) {
		if (arra_1[i] < 0) 
			back_number = i;
	}
	cout << " Последнее отрицательное число на позиции - " << back_number;
}

void task_4() {
	cout << " Вы выбрали задание 4" << endl;

	int kit_numbers = 0;
	cout << " Введите размер массива: ";
	cin >> kit_numbers;
	int* arra_1 = new int[kit_numbers];
	int* arra_2 = new int[kit_numbers];
	int sum_1 = 0, sum_2 = 0;
	cout << " Введите 10 чиcел: ";
	for (int i = 0; i < kit_numbers; i++) {
		cin >> arra_1[i];
		if (arra_1[i] > 0)
			sum_1 = sum_1 + arra_1[i];
	}
	cout << " Введите ещё 10 чиcел: ";
	for (int i = 0; i < kit_numbers; i++) {
		cin >> arra_2[i];
		if (arra_2[i] > 0)
			sum_2 = sum_2 + arra_2[i];
	}
	if (sum_1 > sum_2) {
		cout << " Второй массив меньше первого, умножили второй массив на 10: ";
		for (int i = 0; i < kit_numbers; i++) {
			arra_2[i] = arra_2[i] * 10;
			cout << arra_2[i] << " ";
		}
	}
	else {
		cout << " Второй массив меньше первого, умножили второй массив на 10: ";
		for (int i = 0; i < kit_numbers; i++) {
			arra_1[i] = arra_1[i] * 10;
			cout << arra_1[i] << " ";
		}
	}
}

void task_5() {
	cout << " Вы выбрали задание 5" << endl;

	int kit_numbers = 0;
	cout << " Введите размер массива: ";
	cin >> kit_numbers;
	int* arra_1 = new int[kit_numbers];
	int* arra_2 = new int[kit_numbers];
	bool pravda = false;

	cout << " Введите " << kit_numbers << " чисел: ";
	for (int i = 0; i < kit_numbers; i++) cin >> arra_1[i];
	cout << " Введите ещё " << kit_numbers << " чисел: ";
	for (int i = 0; i < kit_numbers; i++) cin >> arra_2[i];
	for (int i = 0; i < kit_numbers; i++) {
		if (arra_1[i] % 5 == 0 && pravda != true) {
			pravda = true;
			int max = arra_1[1], count_1 = 1, min = arra_2[1], count_2 = 1;
			for (int j = 0; j < kit_numbers; j++) {
				if (arra_1[j] > max) {
					max = arra_1[j];
					count_1 = j;
				}
				if (arra_2[j] < min) {
					min = arra_2[j];
					count_2 = j;
				}
			}
			arra_1[count_1] = 0;
			for (count_2+1; count_2 < kit_numbers; count_2++) {
				arra_2[count_2] *= 2;
			}
			break;
		}
		else 
			if (arra_2[i] % 5 == 0 && pravda != true) {
				pravda = true;
				int max = arra_1[1], count_1 = 1, min = arra_2[1], count_2 = 1;
				for (int j = 0; j < kit_numbers; j++) {
					if (arra_2[j] > max) {
						max = arra_2[j];
						count_2 = j;
					}
					if (arra_1[j] < min) {
						min = arra_1[j];
						count_1 = j;
					}
				}
				arra_2[count_2] = 0;
				for (count_1+1; count_1 < kit_numbers; count_1++) {
					arra_1[count_1] *= 2;
				}
				break;
			}	
	}
	cout << " Обновлённые массив #1:" << endl;
	for (int i = 0; i < kit_numbers; i++) cout << " " << arra_1[i];
	cout << endl << " Обновлённые массив #2:" << endl;
	for (int i = 0; i < kit_numbers; i++) cout << " " << arra_2[i];
}

void task_6() {
	cout << " Вы выбрали задание 6" << endl;

	int arra_1[6][8], arra_2[6];
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			arra_1[i][j] = rand() % 30 - 10 ;
			if (arra_1[i][j] > 4)
				arra_2[i] = arra_1[i][j];
			else
				arra_2[i] = 0;
		}
	}
	cout << " Двумерный массив: " << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++)
			cout << " " << arra_1[i][j];
		cout << endl;
	}
	cout << " Одномерный массив: " << endl;
	for (int i = 0; i < 6; i++)
		cout << " " << arra_2[i];
}

void task_7() {
	cout << " Вы выбрали задание 7" << endl;

	int arra_1[8][6], arra_2[8];
	srand(time(NULL));
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++) {
			arra_1[i][j] = rand() % 30 - 5;
			if (arra_1[i][j] > 0 && arra_2[i] != -1)
				arra_2[i] = 1;
			else
				arra_2[i] = -1;
		}
	}
	cout << " Двумерный массив: " << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++)
			cout << " " << arra_1[i][j];
		cout << endl;
	}
	cout << " Одномерный массив: " << endl;
	for (int i = 0; i < 8; i++)
		cout << " " << arra_2[i];
}

void task_8() {
	cout << " Вы выбрали задание 8" << endl;

	int arra_1[8][8], arra_2[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
	srand(time(NULL));
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			arra_1[i][j] = rand() % 10 - 2;
			if (arra_1[i][j-1] + arra_1[i][j] == 7 && arra_2[i] == -1)
				arra_2[i] = 1;
		}
	}
	cout << " Двумерный массив: " << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << " " << arra_1[i][j];
		cout << endl;
	}
	cout << " Одномерный массив: " << endl;
	for (int i = 0; i < 8; i++)
		cout << " " << arra_2[i];
}

void task_9() {
	cout << " Вы выбрали задание 9" << endl;

	int arra_1[8][8], arra_2[8], sum = 0;
	srand(time(NULL));
	for (int i = 0; i < 8; i++) {
		int min = 100;
		for (int j = 0; j < 8; j++) {
			arra_1[i][j] = rand() % 24 + 8;
			if (arra_1[i][j] < min)
				min = arra_1[i][j];
			arra_2[i] = min;
			sum += arra_2[i];
		}
	}
	cout << " Двумерный массив: " << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << " " << arra_1[i][j];
		cout << endl;
	}
	if (sum / 8)
		cout << " Массив имеет своё сред.ареф значение: " << sum / 8 << endl;
	else
		cout << " Массив не имеет своё сред.ареф значение" << endl;
	cout << " Одномерный массив: " << endl;
	for (int i = 0; i < 8; i++)
		cout << " " << arra_2[i];
}

void task_10() {
	cout << " Вы выбрали задание 10" << endl;

	int arra_1[8][8], arra_2[8], sum = 0;
	srand(time(NULL));
	for (int i = 0; i < 8; i++) {
		int max = 0;
		for (int j = 0; j < 8; j++) {
			arra_1[i][j] = rand() % 24 + 8;
			if (max == arra_1[i][j] && arra_2[i] != -1)
				arra_2[i] = -1;
			if (arra_1[i][j] > max) {
				max = arra_1[i][j];
				arra_2[i] = 1;
			}
		}
	}
	cout << " Двумерный массив: " << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << " " << arra_1[i][j];
		cout << endl;
	}
	cout << " Одномерный массив: " << endl;
	for (int i = 0; i < 8; i++)
		cout << " " << arra_2[i];
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "//---------------------------------------\\" << endl;
	cout << "||        Dimitradon Entertainment       ||" << endl;
	cout << "\\---------------------------------------//" << endl;
	cout << " Нажмите Esc - чтобы закрыть программу     " << endl << endl;
	cout << " Нажмите на клавиатуре одну из представенных комбинаций" << endl;
	cout << " P.S если вызвать первую задачу, то можно сразу пройти по поряду" << endl << endl;
	do { // Этот блок отвечает за клавиши вызова подпрограмм
		switch (_getch())
		{
		case '1': {
			task_1();
			ending();
		}
		case '2': {
			task_2();
			ending();
		}
		case '3': {
			task_3();
			ending();
		}
		case '4': {
			task_4();
			ending();
		}
		case '5': {
			task_5();
			ending();
		}
		case '6': {
			task_6();
			ending();
		}
		case '7': {
			task_7();
			ending();
		}
		case '8': {
			task_8();
			ending();
		}
		case '9': {
			task_9();
			ending();
		}
		case '0': {
			task_10();
			ending();
		}
		default:
			break;
		}
	} while (_getch() != 27);
	return 0;
}

