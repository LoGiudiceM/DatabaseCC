# Database CC
#### La seguente repository riguarda un programma in C++ che implementa un sistema di gestione automezzi del Ministero della Difesa.


### Introduzione

Lo scopo del programma è quello di gestire le informazioni relative agli automezzi del Ministero della Difesa. Il programma permette di inserire i dati relativi ad un automezzo, salvandoli su un file di testo, e di visualizzare le uscite effettuate nel corso della giornata.

### Descrizione del programma

Il programma utilizza le seguenti [librerie](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP):
| Libreria | Descrizione |
|--- |--- |
| [iostream](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#iostream) |  Fornisce gli strumenti per gestire l'input e l'output su console. In particolare, fornisce classi come cin (input standard) e cout (output standard) per la lettura e la scrittura su console. |
| [string.h](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#stringh) | Fornisce una serie di funzioni per la manipolazione di stringhe. In particolare, fornisce funzioni per copiare, concatenare e confrontare le stringhe. |
| [fstream](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#fstream) | Fornisce gli strumenti per lavorare con i file. In particolare, fornisce classi come ifstream (input file stream) e ofstream (output file stream) per leggere e scrivere rispettivamente dai file. |
| [stdlib.h](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#stdlibh) | Fornisce funzioni di utilità generale come l'allocation dinamica della memoria, la conversione di stringhe in numeri, e il controllo del flusso di programma attraverso funzioni come exit. |
| [windows.h](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#windowsh) | Libreria specifica per il sistema operativo Windows e fornisce una serie di funzioni per interagire con il sistema operativo, come la gestione delle finestre, la lettura/scrittura su file, la gestione dei processi e la comunicazione tra i processi. |
| [cctype](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#cctype) |  Fornisce funzioni per la manipolazione dei caratteri, in particolare per il controllo del tipo di carattere (ad esempio, se è una lettera, un numero o uno spazio) e la conversione tra caratteri maiuscoli e minuscoli. |
| [sstream](https://github.com/LoGiudiceM/DatabaseCC/wiki/Librerie-CPP#sstream) |  Fornisce una classe stringstream che permette di lavorare con le stringhe come se fossero stream di input/output, consentendo di manipolare le stringhe come se fossero file. In particolare, permette di convertire facilmente tipi di dati come numeri o bool in stringhe e viceversa. |

Il programma è strutturato come segue:
| Nome | Codice | Tipo | Descrizione |
|--- |--- |--- |--- |
| (RIMOSSO) [Controllo carattere speciale](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#controllo-carattere-speciale) | checkcaratspec | bool | INTEGRATA IN FUNZIONE 'validatePassword'. Verifica che la password inserita contenga almeno un carattere speciale. |
| (RIMOSSO) [Controllo carattere](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#verifica-carattere-speciale) | checkchar | bool | INTEGRATA IN FUNZIONE 'validatePassword'. Verifica che il carattere passato come argomento sia un carattere speciale. |
| [Mezzo](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#dati-mezzo) | mezzo | struct | Contiene i dati relativi ad un automezzo, quali marca, modello, targa, grado e cognome del capopattuglia, grado e cognome dell'autista, ora e minuti di uscita. |
| [Carica vettore](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#carica-vettore) | cv | void | Consente di caricare i dati relativi ad un automezzo nell'array di tipo mezzo. |
| [Stampa vettore](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#stampa-vettore) | sv | void | Stampa i contenuti dell'array di tipo mezzo. |
| [Scrivi su file](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#scrittura-su-file) | scriviSufile | void | Inserisce in un documento i valori dell'array di tipo mezzo. |
| [Convalida Password](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#convalida-password) | validatePassword | void | Controlla la validità della password. |
| [Registrazione](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#registrazione) | createAccount | void | Esegue la registrazione di un utente inserendo i dati su un archivio. |
| [Accesso](https://github.com/LoGiudiceM/DatabaseCC/wiki/Funzioni-nel-Programma#login) | login | bool | Esegue il login confrontando le credenziali inserite e quelle presenti sull'archivio. |

### Utilizzo del programma

Fare riferimento alla guida completa: [Guida all'utilizzo](https://github.com/LoGiudiceM/DatabaseCC/wiki/Utilizzo-del-programma)

L'utente, una volta avviato il programma, dovrà inserire il proprio username e una password. La password deve essere lunga almeno 6 caratteri e contenere almeno un carattere speciale. Se la password inserita non soddisfa questi requisiti, il programma richiederà all'utente di inserire nuovamente la password.

>[!NOTE] 
>
>I dati relativi agli utenti saranno salvati su un file di testo, denominato "*usr.txt*".

Una volta effettuato l'accesso, all'utente verranno presentate le seguenti opzioni:
+ Inserimento di un'uscita: l'utente potrà inserire i dati relativi ad un automezzo, quali marca, modello, targa, grado e cognome del capopattuglia, grado e cognome dell'autista, ora e minuti di uscita.
+ Visualizzazione delle uscite effettuate: l'utente potrà visualizzare i dati relativi alle uscite effettuate nel corso della giornata.
+ Visualizzazione del database: l’utente potrà visualizzare tutte le uscite registrate.

>[!NOTE] 
>
>I dati relativi agli automezzi saranno salvati su un file di testo, denominato "*db.txt*".

### Conclusioni

Il programma implementato in C++ rappresenta una soluzione efficiente per la gestione delle informazioni relative agli automezzi del Ministero della Difesa. Il programma permette di inserire i dati relativi ad un automezzo, salvarli su un file di testo e visualizzare le uscite effettuate registrate.
