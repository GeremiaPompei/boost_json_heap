# boost_json_heap

Progetto esempio per testare le due librerie [**boost**](https://www.boost.org/) fibonacci_heap e json.

## Istallazione e build
### Istallazione libboost
```
sudo apt-get install libboost-all-dev
```
### Istallazione cmake
```
sudo apt-get install cmake
```
### Build
Fare il download della directory e aprire il terminale. Posizionarsi all'interno della directory e digitare 
```
mkdir build
cd build
cmake ..
make
```
Se ci sono problemi legati a permessi all'avvio dell'esehuibile digitare 
```
chmod +x boost_json_heap
```
Per eseguire il programma basta digitare 
```
./boost_json_heap
```

## Funzionamento
Il programma permette di aggiungere nuovi **Value** in formato json al suo interno. I valori inseriti verranno poi riordinati grazie all'*heap* *di* *fibonacci* 
e mostrati a video. Per uscire dal programma basta insterire il comando *exit*. 

Un **Value**  è un oggetto formato da un **id** intero e un **name** stringa.
Per inserire un nuovo Value basta inserire tale stringa formattata in **json** con l'ID e il NAME scelto 

{"id": ID, "name": "NAME"}
