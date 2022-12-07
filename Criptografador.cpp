#include <bits/stdc++.h>
#include <fstream>
using namespace std;
  
// CRIADO PELO ACADEMICO: Guilherme Antônio Gomes da Silva 
// NO DIA 25/11/2022

class encdec {
    int key;
  
  
    string fle = "Brasilgeek's'.txt";
    char c;
  
public:
    void encrypt();
    void decrypt();
};
  

void encdec::encrypt()
{

    cout << "key: ";
    cin >> key;
  

    fstream fin, fout;
  
    fin.open(fle, fstream::in);
    fout.open("criptografar.txt", fstream::out);
  
 
    while (fin >> noskipws >> c) {
        int temp = (c + key);
  
  
        fout << (char)temp;
    }
  

    fin.close();
    fout.close();
}

void encdec::decrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("criptografar.txt", fstream::in);
    fout.open("descriptografar.txt", fstream::out);
  
    while (fin >> noskipws >> c) {
  
  
        int temp = (c - key);
        fout << (char)temp;
    }
  
    fin.close();
    fout.close();
}

int main()
{
    encdec enc;
    char c;
    cout << "\n";
    cout << "Digite sua escolha: -> \n";
    cout << "1.criptografar \n";
    cout << "2.descriptografar \n";
    cin >> c;
    cin.ignore();
  
    switch (c) {
    case '1': {
        enc.encrypt();
        break;
    }
    case '2': {
        enc.decrypt();
        break;
    }
    }
}