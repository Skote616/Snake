// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Snake {
	int data;
	Snake* next;

};

Snake snake;

void generate()
{
	snake.data = 1;
	Snake* current = snake.next;
	for (int i = 0; i < 4; i++)
	{
		current->data = 1;
		current = current->next;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	char answ = ' ';
	std::cout << "\n";
	while (true)
	{
		while (answ != '1' && answ != '2' && answ != '3')
		{
			std::cout << "\nВыбери размер доски \n1.15х15\n2.20х20\n3.30х30\n";
			std::cin >> answ;
			std::cout << "\n";
		}
			switch (answ)
			{
				case 1:
				{
					int mass[15] [15];
					int first = (double)rand() * (14 - 0) / RAND_MAX + 0;
					int second= (double)rand() * (14 - 0) / RAND_MAX + 0;
					break;
				}

				case 2:
				{
					int mass[20][20];
					int first = (double)rand() * (19 - 0) / RAND_MAX + 0;
					int second = (double)rand() * (19 - 0) / RAND_MAX + 0;
					break;
				}

				case 3:
				{
					int mass[30][30];
					int first = (double)rand() * (29 - 0) / RAND_MAX + 0;
					int second = (double)rand() * (29 - 0) / RAND_MAX + 0;
					break;
				}
				default:
				{
					std::cout << "Ошибка";
					break;
				}
			}
		
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
