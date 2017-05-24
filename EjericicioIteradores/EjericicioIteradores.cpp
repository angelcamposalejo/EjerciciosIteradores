#include "stdafx.h"  //________________________________________ EjericicioIteradores.cpp
#include "EjericicioIteradores.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjericicioIteradores app;
	return app.BeginDialog(IDI_EjericicioIteradores, hInstance);
}

void EjericicioIteradores::Window_Open(Win::Event& e)
{
}

void EjericicioIteradores::btCalcular_Click(Win::Event& e)
{
	vector<double>entrada;
	Sys::Convert::ToVector(tbxEntrada.Text, entrada);
	double sum = 0.0;
	for (vector<double>::iterator i = entrada.begin(); i != entrada.end(); i++)
	{
		sum += *i;
	}
	tbxSalida.DoubleValue = sum;
}

