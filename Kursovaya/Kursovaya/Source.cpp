#include "Header.h"
void VivodLB(ListBox^ L, double a)
// Функция вывода в listBox дробных значений
{
	L->Items->Add(Convert::ToString(a));
}
void VivodLB(ListBox^ L, int a) 
// Функция вывода в listbox целых значений
{
	L->Items->Add(Convert::ToString(a));
}
void VivodTB(TextBox^ T, double a)
// Функция вывода в TextBox
{
	T->Text = Convert::ToString(a);
}
double VvodTb(TextBox^ T)
// Функция для ввода из TextBox
{
	return Convert::ToDouble(T->Text);
}
double Funy(double x, double a, double c)
// Функция описывающая основную кривую
{
	
	return sqrt(exp(-pow((x - a), 2) / c));
}
double Simpson(double a, double b, double eps, double dpa, double dpc,ListBox^ LI, ListBox^ LN,ListBox^ LH)
// Функция формулы Симпсона c выводом промежуточных значений в ListBox'ы
// LI - Для вывода промежуточных значений интеграла
// LN - Промежуточные значения количества шагов
// LH - Промежуточные значения шага
{
	double s, s1, x;
	int n = 2, c;
	double h = (b - a) / n;
	s = (Funy(a,dpa,dpc) + 4 * Funy((a + b)/2,dpa,dpc) + Funy(b,dpa,dpc)) * (h / 3);
	VivodLB(LI, s);
	VivodLB(LN, n); // Вывод промежуточных значений
	VivodLB(LH, h);
	do
	{
		n = 2 * n;
		h = (b - a) / n;
		s1 = s;
		c = 4;
		x = a;
		// Сложение первого и последнего вычисления, которая вычисляется без множителей
		s = Funy(a,dpa,dpc) + Funy(b,dpa,dpc);
		for (int i = 1; i < n; i++)
		{
			x = x + h;
			s = s + c * Funy(x, dpa, dpc);
			// позволяет чередовать множители 4,2 на четных и нечетных шагах  для метода Симпсона
			c = 6 - c;
		}
		s = s * h / 3;
		VivodLB(LI, s);
		VivodLB(LN, n);
		VivodLB(LH, h);
	} while ((abs(s1 - s) / 15 > eps));
	return s;
}
double Simpson(double a, double b, double eps, double dpa, double dpc)
// Функция формулы Симпсона без вывода промежуточных значений
{
	double s, s1, x;
	int n = 2, c;
	double h = (b - a) / n;
	s = (Funy(a, dpa, dpc) + 4 * Funy((a + b) / 2, dpa, dpc) + Funy(b, dpa, dpc)) * (h / 3);
	do
	{
		n = 2 * n;
		h = (b - a) / n;
		s1 = s;
		c = 4;
		x = a;
		s = Funy(a, dpa, dpc) + Funy(b, dpa, dpc);
		// Сложение первого и последнего вычисления, которая вычисляется без множителей
		for (int i = 1; i < n; i++)
		{
			x = x + h;
			s = s + c * Funy(x, dpa, dpc);
			// позволяет чередовать множители 4,2 на четных и нечетных шагах  для метода Симпсона
			c = 6 - c;
		}
		s = s * h / 3;

	} while ((abs(s1 - s) / 15 > eps));
	return s;
}
void FunOp(double b, double x1, double x2, double eps, double dpa, double dpc, double&S1, double&S2, double&S3,double&S13, TextBox^ TBI1, TextBox^ TBI2, TextBox^ TBI3,ListBox^ LI1, ListBox^ LN1, ListBox^ LH1, ListBox^ LI2, ListBox^ LN2, ListBox^ LH2, ListBox^ LI3, ListBox^ LN3, ListBox^ LH3)
// Функция оптимизируемой функции F(b)
// С выводом промежуточных значений для интегралов и значений площадей
// LI - Для вывода промежуточных значений интеграла
// LN - Промежуточные значения количества шагов
// LH - Промежуточные значения шага
// Номер рядом с элементом для вывода означает для какой площади выводятся значения
{
	// Вычичления интегралов необходидмых дял вычисления каждой из площади
	double In1 = Simpson(x1, dpa-b, eps, dpa, dpc, LI1, LN1,LH1);
	double In2 = Simpson(dpa - b, dpa + b, eps, dpa, dpc, LI2, LN2, LH2);
	double In3 = Simpson(dpa + b, x2, eps, dpa, dpc, LI3, LN3, LH3);
	// Вычисление параметра R
	double R = Funy(dpa - b, dpa, dpc);
	// Вычисления площадей
	S1 = R * (dpa - b - x1) - In1;
	S2 = In2-R*b*2;
	S3 = R * (x2 - dpa - b) - In3;
	S13 = S1 + S3;
	// Вывод значений интегралов в пром. формы интегрирования
	VivodTB(TBI1, In1);
	VivodTB(TBI2, In2);
	VivodTB(TBI3, In3);
}
double FunOp(double b, double x1, double x2, double eps, double dpa, double dpc)
// Функция оптимизируемой функции F(b) без вывода пром. значений интегралов
{
	// Вычичления интегралов необходидмых дял вычисления каждой из площади
	double In1 = Simpson(x1, dpa - b, eps, dpa, dpc);
	double In2 = Simpson(dpa - b, dpa + b, eps, dpa, dpc);
	double In3 = Simpson(dpa + b, x2, eps, dpa, dpc);
	// Вычисление параметра R
	double R = Funy(dpa - b, dpa, dpc);
	double S1 = R * (dpa - b - x1) - In1;
	double S2 = In2 - R * b * 2;
	double S3 = R * (x2 - dpa - b) - In3;
	// Вывод значений интегралов в пром. формы интегрирования
	return fabs(S2 - (S1 + S3));
}
void TableFuny(double c, double a, double x1, double x2, double eps, int n, ListBox^ LF, ListBox^ LX)
{
	// Функция выводящая таблицу значений оптимизируемой функции
	// LF - ListBox содержащий значения функции
	// LX - ListBox содержащий вычисляемые точки x
	double h = (a - x1) / n;
	double x = 0;
	for (int i = 0; i < n; i++)
	{
		x = x + h;
		double y = FunOp(x, x1, x2, eps, a, c);
		VivodLB(LF, y);
		VivodLB(LX, x);
	}
}
void Dihotomia(double b1, double b2, double px1, double px2, double eps, double dpa, double dpc, double& b, double& fb, ListBox^ LBb1, ListBox^ LBb2, ListBox^ LBx1, ListBox^ LBx2, ListBox^ LBfx1, ListBox^ LBfx2, ListBox^ LBd)
{
	// Функция, реализующая метод дихотомии
	// С выводом пром. значений в listBox'ы
	// LBb1,2 - Изначальные границы отрезка на итерации
	// LBx1,2 - Точки x1,x2 на итерации
	// LBfx1,2 - Значения функции в точках x1,x2
	// LBd - Длина отрезка неопределенности на итерации
	double d = eps / 10;
	do
	{
		double x1 = (b1 + b2 - 2 * d) / 2;
		double x2 = (b1 + b2 + 2 * d) / 2;
		double fx1 = FunOp(x1, px1, px2, eps, dpa, dpc);
		double fx2 = FunOp(x2, px1, px2, eps, dpa, dpc);
		double del = b2 - b1;
		// Вывод промежуточных значений
		VivodLB(LBb1, b1);
		VivodLB(LBb2, b2);
		VivodLB(LBx1, x1);
		VivodLB(LBx2, x2);
		VivodLB(LBfx1, fx1);
		VivodLB(LBfx2, fx2);
		VivodLB(LBd, del);
		if (fx1 > fx2) b1 = x1;
		else b2 = x2;
	} while (b2 - b1 > eps);
	 b = (b2 + b1) / 2;
	 fb = FunOp(b, px1, px2, eps, dpa, dpc);
}