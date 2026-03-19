# Management Interactiv de Ligă și Programator de Turnee

O aplicație C++ de tip Command Line Interface (CLI) concepută pentru a automatiza programarea și gestionarea ligilor sportive. Acest proiect implementează un algoritm de tip Round-Robin pentru a asigura generarea sistematică a meciurilor pentru orice număr de participanți.

## Caracteristici Principale
 **Programare Automată a Meciurilor:** Utilizează o logică de rotație circulară pentru a genera automat atât meciurile din "Tur", cât și cele din "Retur". 
 **Clasament în Timp Real:** Dispune de un sistem interactiv care actualizează instantaneu tabelul ligii pe măsură ce scorurile meciurilor sunt introduse.
 **Sistem de Clasare Ierarhică:** Implementează o funcție de sortare personalizată pentru a clasa echipele pe baza criteriilor profesionale: 
    1. Total puncte
    2. Golaveraj (Diferența de goluri)
    3. Goluri marcate.

## Specificații Tehnice
 **Limbaj:** C++.
 **Logica de Bază:**
     **Algoritm:** Programare Round-Robin pentru etapele de campionat. 
     **Procesarea Datelor:** Sortare multi-criteriu executată pe matrice 2D pentru o gestionare optimizată a datelor.
 **Arhitectură:** Structurată folosind funcții modulare pentru procesarea scorurilor, generarea tabelelor și amestecarea echipelor.

## Flux de Lucru
1. **Input:** Utilizatorul definește numărul de echipe și introduce numele acestora.
2. **Generare:** Programul calculează rotația optimă a meciurilor.
3. **Execuție:** Utilizatorul introduce scorurile pentru fiecare confruntare (ex: "2 1").
4. **Output:** Un tabel de ligă formatat este afișat după fiecare etapă, prezentând statisticile actualizate.


Compilează codul sursă folosind orice compilator C++ .
