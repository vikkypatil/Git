#include "Warehouse.h"
#include "Apparel.h"
#include "Electronics.h"
int main()
{
	Apparel a;
	Electronics e;
	Warehouse w;
	w.Register("Elec", &e);
	w.Register("Appa", &a);


}