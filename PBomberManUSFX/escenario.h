#pragma once
class escenario
{
private:
	int tamaño;
	int filas;
	int columnas;


public:
	int getTamaño() { return tamaño; }
	void setTamaño(int _tamaño) { tamaño = _tamaño; }

	int getFilas() { return filas; }
	void setFilas(int _filas) { filas = _filas;}

	int getColumnas() { return columnas; }
	void setColumnas(int _columnas) { columnas = _columnas; }


	void Recorrer();
	void Aparecer();
	void Desaparecer();

};

