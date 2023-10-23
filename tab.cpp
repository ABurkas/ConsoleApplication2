#include "tab.h"
#include <iostream>
#include <cstdlib>
using namespace std;

tab::tab()
{
	size = 0;
	t = NULL;
}
tab::tab(int s)
{
	t = new int[s];
	size = s;
}
void tab::Wypelnij()
{
	for (int i = 0; i < size; i++)
		t[i] = rand() % 10 + 1;

}

void tab::Wyswietl()
{
	for (int i = 0; i < size; i++) {
		cout << t[i] << endl;
	}
}

tab::~tab()
{
	delete[]t;
}

tab* tab::Clone()
{
	tab *r;

	r = new tab(size);

	memcpy(r->t, t, sizeof(int) * size);

	return r;
}

tab::tab(tab& xx) 
{
	t = new int[xx.size];
	memcpy(t, xx.t, sizeof(int) * xx.size);
	size == xx.size;
}