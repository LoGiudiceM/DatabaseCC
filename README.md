# Database CC
#### La seguente repository riguarda un programma in C++ che implementa un sistema di gestione automezzi del Ministero della Difesa.


### Introduzione

Lo scopo del programma è quello di gestire le informazioni relative agli automezzi del Ministero della Difesa. Il programma permette di inserire i dati relativi ad un automezzo, salvandoli su un file di testo, e di visualizzare le uscite effettuate nel corso della giornata.

### Descrizione del programma

Il programma utilizza le seguenti librerie:
| Libreria | Descrizione |
|--- |--- |
| iostream |  Fornisce gli strumenti per gestire l'input e l'output su console. In particolare, fornisce classi come cin (input standard) e cout (output standard) per la lettura e la scrittura su console. |
| string.h | Fornisce una serie di funzioni per la manipolazione di stringhe. In particolare, fornisce funzioni per copiare, concatenare e confrontare le stringhe. |
| fstream | Fornisce gli strumenti per lavorare con i file. In particolare, fornisce classi come ifstream (input file stream) e ofstream (output file stream) per leggere e scrivere rispettivamente dai file. |
| stdlib.h | Fornisce funzioni di utilità generale come l'allocation dinamica della memoria, la conversione di stringhe in numeri, e il controllo del flusso di programma attraverso funzioni come exit. |
| windows.h | Libreria specifica per il sistema operativo Windows e fornisce una serie di funzioni per interagire con il sistema operativo, come la gestione delle finestre, la lettura/scrittura su file, la gestione dei processi e la comunicazione tra i processi. |
| cctype |  Fornisce funzioni per la manipolazione dei caratteri, in particolare per il controllo del tipo di carattere (ad esempio, se è una lettera, un numero o uno spazio) e la conversione tra caratteri maiuscoli e minuscoli. |
| sstream |  Fornisce una classe stringstream che permette di lavorare con le stringhe come se fossero stream di input/output, consentendo di manipolare le stringhe come se fossero file. In particolare, permette di convertire facilmente tipi di dati come numeri o bool in stringhe e viceversa. |

Il programma è strutturato come segue:
| Nome | Codice | Tipo | Descrizione |
|--- |--- |--- |--- |
| Controllo carattere speciale | checkcaratspec | bool | Verifica che la password inserita contenga almeno un carattere speciale. |
| Controllo carattere | checkchar | bool | Verifica che il carattere passato come argomento sia un carattere speciale. |
| Mezzo | mezzo | struct | Contiene i dati relativi ad un automezzo, quali marca, modello, targa, grado e cognome del capopattuglia, grado e cognome dell'autista, ora e minuti di uscita. |
| Carica vettore | cv | void | Consente di caricare i dati relativi ad un automezzo nell'array di tipo mezzo. |
| Stampa vettore | sv | void | Stampa i contenuti dell'array di tipo mezzo. |
| Scrivi su file | scriviSufile | void | Inserisce in un documento i valori dell'array di tipo mezzo. |
| Convalida Password | validatePassword | void | Controlla la validità della password. |
| Registrazione | createAccount | void | Esegue la registrazione di un utente inserendo i dati su un archivio. |
| Accesso | login | bool | Esegue il login confrontando le credenziali inserite e quelle presenti sull'archivio. |

### Utilizzo del programma

L'utente, una volta avviato il programma, dovrà inserire il proprio username e una password. La password deve essere lunga almeno 5 caratteri e contenere almeno un carattere speciale. Se la password inserita non soddisfa questi requisiti, il programma richiederà all'utente di inserire nuovamente la password.

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
