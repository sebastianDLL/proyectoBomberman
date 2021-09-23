#include <iostream>
//#include "Bomber.h"
#include "GameObject.h"
#include "GameActor.h"
using namespace std;

int main() {

	//GameObject o1;
	GameActor a1 ("pedro");
	GameActor a2(" ");

	cout << "El nombre del objeto es" << a1.getNombre() << endl;
	cout << "El nombre del objeto es" << a2.getNombre() << endl;







	cout << "Primer paso rumbo a BomberMan" << endl;

	return 0;


}