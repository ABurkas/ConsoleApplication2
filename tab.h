class tab
{
    int* t;
    int size;
public:
    tab();
    tab(tab&);
    tab(int s);
    ~tab();
    void Wypelnij();
    void Wyswietl();
    tab* Clone();
};
