#include <iostream>
#include <cmath>

using namespace std;

float divisione(float a, float b);
float elevamentoApotenza(float a, float b);
int leggiOperazione(string comando);
float moltiplicazione(float a, float b);
float somma(float a, float b);
float sottrazione(float a, float b);

int main() {
    string comando;
    float risultato;
    
    cout << "( +  - * / ^ )Inserisci l'operazione che vuoi eseguire:" << endl;
    cout << "[Nota: scrivi 'x' per terminare e 'r' per resettare il valore standard a 0]" << endl;
    do {
        cin >> comando;
        if (comando != "+" && comando != "-" && comando != "*" && comando != "/" && comando != "x" && comando != "r" && comando != "^") {
            cout << "Devi inserire un operazione tra i seguenti valori: + - * / ^ x r " << endl;
        }
    } while (comando != "+" && comando != "-" && comando != "*" && comando != "/" && comando != "x" && comando != "r" && comando != "^");
    risultato = leggiOperazione(comando);
    cout << "Uscito con successo" << endl;
    cout << "[ " << risultato << " ]" << endl;
    return 0;
}

float divisione(float a, float b) {
    float d;
    
    d = a / b;
    
    return d;
}

float elevamentoApotenza(float a, float b) {
    int p, i;
    
    p = (int) a;
    for (i = 1; i <= b; i++) {
        p = (int) (p * a);
    }
    
    return p;
}

int leggiOperazione(string comando) {
    float a, b, som, sott, m, p;
    float standard, operando;
    
    standard = 0;
    do {
        if (comando == "+") {
            cout << "Inserisci il numero da addizionare a " << standard << endl;
            cin >> operando;
            standard = somma(standard, operando);
        } else {
            if (comando == "-") {
                cout << "Inserisci il numero da sottrarre a " << standard << endl;
                cin >> operando;
                standard = sottrazione(standard, operando);
            } else {
                if (comando == "*") {
                    cout << "Inserisci il numero da moltiplicare a " << standard << endl;
                    cin >> operando;
                    standard = moltiplicazione(standard, operando);
                } else {
                    if (comando == "/") {
                        cout << "Inserisci il numero da dividere a " << standard << endl;
                        cin >> operando;
                        standard = divisione(standard, operando);
                    } else {
                        if (comando == "^") {
                            cout << "Inserisci l'esponente da mettere a " << standard << endl;
                            cin >> operando;
                            standard = elevamentoApotenza(standard, operando);
                        } else {
                            if (comando == "r") {
                                cout << "Valore resettato a 0" << endl;
                                standard = 0;
                            } else {
                                cout << "Inserisci un comando valido" << endl;
                            }
                        }
                    }
                }
            }
        }
        cout << "[ " << standard << " ]" << endl;
        cout << "( +  - * / ^ )Inserisci l'operazione che vuoi eseguire:" << endl;
        cin >> comando;
    } while (comando != "x");
    
    return standard;
}

float moltiplicazione(float a, float b) {
    float m;
    
    m = a * b;
    
    return m;
}

float somma(float a, float b) {
    int som;
    
    som = (int) (a + b);
    
    return som;
}

float sottrazione(float a, float b) {
    int sott;
    
    sott = (int) (a - b);
    
    return sott;
}