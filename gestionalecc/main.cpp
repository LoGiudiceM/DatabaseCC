#include<fstream>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cctype>
#include <sstream>


using namespace std;

bool checkcaratspec(string password);
bool checkchar(char caratt);

struct mezzo{ //dati
                  string marca;
                  string modello;
                  string targa;
                  string grado;
                  string grado2;
                  string cognome;
                  string cognome2;
                  float ora;
                  float minuti;
};

void cv (mezzo V[], int d){ //Carica vettore
     for(int i=0; i<d; i++){
                         cout<<"Marca: ";
                         cin>>V[i].marca;
                         cout<<"Modello: ";
                         cin>>V[i].modello;
                         cout<<"Targa: ";
                         cin>>V[i].targa;
                         cout<<"Inserire grado capopattuglia: ";
                         cin>>V[i].grado;
                         cout<<"Inserire cognome capopattuglia: ";
                         cin>>V[i].cognome;
                         cout<<"Inserire grado autista: ";
                         cin>>V[i].grado2;
                         cout<<"Inserire nome autista: ";
                         cin>>V[i].cognome2;
                         cout<<"Inserire ora: ";
                         cin>>V[i].ora;
                         cout<<"Inserire minuti: ";
                         cin>>V[i].minuti;
     }
}

void sv (mezzo V[], int d){ //Stampa vettore
          for(int i=0; i<d; i++){
                         cout<<endl;
                         cout<<"Riepilogo dati inseriti: "<<endl;
                         cout<<"Marca: "<<V[i].marca<<" ";
                         cout<<"Modello: "<<V[i].modello<<" ";
                         cout<<"Targa: "<<V[i].targa<<" ";
                         cout<<"Capopattuglia: "<<V[i].grado<<" "<<V[i].cognome<<" ";
                         cout<<"Autista: "<<V[i].grado2<<" "<<V[i].cognome2<<" "<<endl;

    }
}

void scriviSuFile(mezzo V[], int d) {
    ofstream db("db.txt", ios::app); // apertura del file in modalità append (aggiunta in coda al file)
    if (db.is_open()) {
        for (int i=0; i<d; i++) {
            db << "Marca: " << V[i].marca << "\n";
            db << "Modello: " << V[i].modello << "\n";
            db << "Targa: " << V[i].targa << "\n";
            db << "Capopattuglia: " << V[i].grado << " " << V[i].cognome << "\n";
            db << "Autista: " << V[i].grado2 << " " << V[i].cognome2 << "\n";
            db << "Ora: " << V[i].ora << "\n";
            db << "Minuti: " << V[i].minuti << "\n";
            db << "\n";
        }
        db.close(); // chiusura del file
        cout << "I dati sono stati salvati sul file 'db.txt'." << endl;
    } else {
        cout << "Errore: non è stato possibile aprire il file." << endl;
    }
}

// funzione per validare la password
bool validatePassword(string password) {
    bool hasUpper = false;
    bool hasSpecial = false;

    if (password.length() < 6) {
        return false;
    }

    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) {
            hasUpper = true;
        } else if (!isalnum(password[i])) {
            hasSpecial = true;
        }
    }

    return hasUpper && hasSpecial;
}

// funzione per creare un nuovo account
void createAccount() {
    string username, password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (!validatePassword(password)) {
        cout << "La password non soddisfa i requisiti" << endl;
        return;
    }

    ofstream file("usr.txt", ios::app);
    file << username << " " << password << endl;
    file.close();

    cout << "Account creato con successo" << endl;
}

// funzione per effettuare il login
bool login() {
    string username, password, line;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    ifstream file("usr.txt");
    while (getline(file, line)) {
        string user, pass;
        istringstream iss(line);
        iss >> user >> pass;

        if (user == username && pass == password) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}


const int n=1;

int main()
{

    //dichiarazioni
    string user;
    string password;
    string input;
    system("Color 71");
    mezzo V[n];
    int selezione;
    char selezione2;
    string credenziali;
    int temp=0;
    int choice;

    //intestazione

    cout<<"          MINISTERO DELLA DIFESA"<<endl;
    cout<<"       Stato Maggiore della Difesa"<<endl;
    cout<<"      Software Gestionale Automezzi"<<endl;
    cout<<"      -----------------------------"<<endl;
    cout<<"        Creato da Marco Lo Giudice"<<endl;
    cout<<"         Didactical Purpose Only"<<endl;
    cout<<endl;

    while (true) {
        cout << "1. Creare un nuovo account" << endl;
        cout << "2. Accedere a un account esistente" << endl;
        cout << "3. Esci" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                if (login()) {
                    cout << "Accesso effettuato con successo"<<endl;
                    cout<<"Benvenuto di seguito trovi le opzioni disponibili:"<<endl;
                    cout<<endl;
                    do {
        cout<<"Premere 1 per aggiungere un uscita"<<endl;
        cout<<"Premere 2 per visualizzare le uscite odierne"<<endl;
        cout<<"Premere 3 per visualizzare il database"<<endl;
        cout<<"Premere 4 per uscire dal programma"<<endl;
        cin>>selezione;
        cout<<endl;
        switch (selezione){
            case 1:
                if (temp<1){
                cout<<"Inserire il corpo di appartenenza:"<<endl;
                cout<<"Premere A per selezionare l'Aeronautica Militare"<<endl;
                cout<<"Premere E per selezionare l'Esercito Italiano"<<endl;
                cout<<"Premere M per selezionare la Marina Militare"<<endl;
                cout<<"Premere C per selezionare l'Arma dei Carabinieri"<<endl;
                }else{
                cout<<"Errore! hai gia' inserito un uscita per la data odierna"<<endl;
                }
                cin>>selezione2;
                cout<<endl;
                switch (selezione2){
                        case 'A':cv (V, n);scriviSuFile(V, n);temp ++;break;
                        case 'E':cv (V, n);scriviSuFile(V, n);temp ++;break;
                        case 'M':cv (V, n);scriviSuFile(V, n);temp ++;break;
                        case 'C':cv (V, n);scriviSuFile(V, n);temp ++;break;
                }
            case 2:sv (V,n);break;
            case 3: ifstream dbfile("db.txt");
                    if(dbfile.is_open()) {
                        string line;
                        while(getline(dbfile, line)) {
                            cout << line << endl;
                        }
                        dbfile.close();
                    } else {
                        cout << "Errore! Impossibile aprire il file db.txt" << endl;
                    }break;
            /*case 4:return 0;break;*/
        }
        cout<<endl;
    }while(selezione!=3);
            return 1;

                } else {
                    cout << "Username o password non validi" << endl;
                }
                break;
            case 3:
                return 0;
            default:
                cout << "Scelta non valida" << endl;
        }

    }



    return 0;
}
