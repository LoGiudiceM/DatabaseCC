# Database CC
#### La seguente repository riguarda un programma in C++ che implementa un sistema di gestione automezzi del Ministero della Difesa.


### Introduzione

Lo scopo del programma è quello di gestire le informazioni relative agli automezzi del Ministero della Difesa. Il programma permette di inserire i dati relativi ad un automezzo, salvandoli su un file di testo, e di visualizzare le uscite effettuate nel corso della giornata.

### Descrizione del programma

Il programma è strutturato come segue:
La funzione *checkcaratspec* verifica che la password inserita contenga almeno un carattere speciale.
La funzione *checkchar* verifica che il carattere passato come argomento sia un carattere speciale.
La struttura *mezzo* contiene i dati relativi ad un automezzo, quali marca, modello, targa, grado e cognome del capopattuglia, grado e cognome dell'autista, ora e minuti di uscita.
La funzione *cv* consente di caricare i dati relativi ad un automezzo nell'array di tipo mezzo.
La funzione *sv* stampa a video i dati relativi ad un automezzo contenuti nell'array di tipo mezzo.
La funzione *scriviSuFile* salva su un file di testo i dati relativi agli automezzi contenuti nell'array di tipo mezzo.
La funzione *main* costituisce il cuore del programma, e contiene il codice che interagisce con l'utente e richiama le altre funzioni.

### Utilizzo del programma

L'utente, una volta avviato il programma, dovrà inserire il proprio username e una password. La password deve essere lunga almeno 5 caratteri e contenere almeno un carattere speciale. Se la password inserita non soddisfa questi requisiti, il programma richiederà all'utente di inserire nuovamente la password.
Una volta effettuato l'accesso, all'utente verranno presentate le seguenti opzioni:
Inserimento di un'uscita: l'utente potrà inserire i dati relativi ad un automezzo, quali marca, modello, targa, grado e cognome del capopattuglia, grado e cognome dell'autista, ora e minuti di uscita.
Visualizzazione delle uscite effettuate: l'utente potrà visualizzare i dati relativi alle uscite effettuate nel corso della giornata.
Visualizzazione del database: l’utente potrà visualizzare tutte le uscite registrate.
I dati relativi agli automezzi saranno salvati su un file di testo, denominato "*db.txt*".

### Conclusioni

Il programma implementato in C++ rappresenta una soluzione efficiente per la gestione delle informazioni relative agli automezzi del Ministero della Difesa. Il programma permette di inserire i dati relativi ad un automezzo, salvarli su un file di testo e visualizzare le uscite effettuate registrate.
