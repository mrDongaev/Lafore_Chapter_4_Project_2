#include <iostream>

using namespace std;

struct point { // ���������� ��������� ��� ��������� �� x � y

	int x_1, y_1, x_2, y_2;

};
enum deter_coord{input_x, input_y}; // ���������� ������������ ����� ������������� ����, �� ������ �����

void clear(); // ��������� �������

int main();

void clear() { // ������� ��� ������� ������ getchar

	while (getchar() != '\n');

}
int main() {

	point c{0,0,0,0}; // ����������� ���������� ����������������� ����

	deter_coord flag_coord;

	float temp = 0, number = 0; //���������� ����������, � ������� ����� �������� �������������� ���� char �� float � number, ��� ��������� ��������� �������� x ��� y

	char ch = 0, q = 0;

	do
	{
		cout << "Enter the coordinates of point P1: ";
		
		flag_coord = input_x;

		while (true)
		{
			ch = getchar();

			if (ch == ' ')
			{
				flag_coord = input_y;

				c.x_1 = number;

				number = 0;

				ch = 0;

				continue;
			}
			else if (flag_coord == input_y && ch == '\n')
			{
				flag_coord = input_x;

				c.y_1 = number;

				number = 0;

				ch = 0;

				break;
			}

			temp = ch - 48;

			number = ((temp / 10) + number) * 10;
			
		}

		cout << "Enter the coordinates of point P2: ";
		
		while (true)
		{
			ch = getchar();

			if (ch == ' ')
			{
				flag_coord = input_y;

				c.x_2 = number;

				number = 0;

				ch = 0;

				continue;
			}
			else if (flag_coord == input_y && ch == '\n')
			{
				flag_coord = input_x;

				c.y_2 = number;

				number = 0;

				ch = 0;

				break;
			}

			temp = ch - 48;

			number = ((temp / 10) + number) * 10;

		}

		cout << "The sum of the X coordinates = " << c.x_1 + c.x_2 << endl;

		cout << "The sum of the Y coordinates = " << c.y_1 + c.y_2 << endl;

		cout << "Your task is complete, would you like to try again? (Y / N)\n";

		cin >> q;

	} while (q != 'n');







}