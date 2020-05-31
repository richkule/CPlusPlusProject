#pragma once
using namespace System;
using namespace System::Windows::Forms;
#include<cmath>
void VivodLB(ListBox^ L, double a);
void VivodLB(ListBox^ L, int a);
void VivodTB(TextBox^ T, double a);
double VvodTb(TextBox^ T);
double Funy(double x, double a, double c);
double Simpson(double a, double b, double eps, double dpa, double dpc, ListBox^ LI, ListBox^ LN, ListBox^ LH);
double Simpson(double a, double b, double eps, double dpa, double dpc);
void FunOp(double b, double x1, double x2, double eps, double dpa, double dpc, double& S1, double& S2, double& S3, double& S13, TextBox^ TBI1, TextBox^ TBI2, TextBox^ TBI3, ListBox^ LI1, ListBox^ LN1, ListBox^ LH1, ListBox^ LI2, ListBox^ LN2, ListBox^ LH2, ListBox^ LI3, ListBox^ LN3, ListBox^ LH3);
double FunOp(double b, double x1, double x2, double eps, double dpa, double dpc);
void TableFuny(double c, double a, double x1, double x2, double eps, int n, ListBox^ LF, ListBox^ LX);
void Dihotomia(double b1, double b2, double px1, double px2, double eps, double dpa, double dpc, double& b, double& fb, ListBox^ LBb1, ListBox^ LBb2, ListBox^ LBx1, ListBox^ LBx2, ListBox^ LBfx1, ListBox^ LBfx2, ListBox^ LBd);