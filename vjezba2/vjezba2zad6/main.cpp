#include <iostream>

using namespace std;

typedef struct{
    int *elementi;
    int l, f;
}Vektor;

void vector_new(Vektor *v, int x)
{
    v->f = x;
    v->l = 0;
    v->elementi = new (nothrow) int[v->f];
}

void vector_delete(Vektor *v)
{
    delete[]v->elementi;
    v->f = NULL;
    v->l = NULL;
}

void vector_push_back(Vektor* v, int el)
{
    if(v->l >= (v->f + 1))
    {
        v->f = v->f * 2;
        int *noviniz;
        noviniz = new (nothrow) int[v->f];
        noviniz = v->elementi;
        delete[]v->elementi;
        v->elementi = new (nothrow) int[v->f];
        v->elementi = noviniz;
        delete[]noviniz;
        v->elementi[v->l] = el;
        v->l++;
    }
    else
    {
        v->elementi[v->l] = el;
        v->l++;
    }
}

void vector_pop_back(Vektor* v)
{
    v->elementi[v->l] = NULL;
    v->l = v->l - 1;
}

int vector_front(Vektor* v)
{
    return v->elementi[0];
}

int vector_back(Vektor* v)
{
    return v->elementi[v->l];
}

int vector_size(Vektor *v)
{
    return (sizeof(v->elementi)/sizeof(int));
}

int main()
{
    int x;
    cout << "Unesi broj:" << endl;
    cin >> x;
    Vektor *novi;
    vector_new(novi,x);
    vector_push_back(novi, 3);
    vector_push_back(novi, 14);
    vector_push_back(novi, -5);
    vector_push_back(novi, 90);
    vector_push_back(novi, 0);
    for(int i = 0; i < novi->l; i++)
    {
        cout << novi->elementi[i] << endl;
    }
}
