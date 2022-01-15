# Projekt - Zmiana natężenia światła emitowanego przez diodę w zależności od temperatury otoczenia. 
# Opis projektu:
W zależności od napięcia na termistorze zmieniana jest jasność świecenia diody LED. Czym wyższa temperatura, tym jaśniej świecić będzie dioda. 





# Urzadzenia:
- **Wyjścia:** Dioda LED
- **Wejścia:** Termistor

# Lista elementów projektu:

## Mikrokontroler
![img](zdjęcia/Mikrokontroler.PNG)


### 1.  Mikroprocesor - ATMEL ATmega328P


Producent: ATMEL

Typ ukadu scalonego: mikrokontroler AVR

Organizacja pamici Flash: 32kx8bit

Pojemno pamici EEPROM: 1024B

Pojemno pamici SRAM: 2048B

Czstotliwo taktowania: 20MHz

Liczba wej/wyj:	23 

Liczba kanaw PWM: 6 

Liczba timerw 8-bit: 2 

Liczba timerw 16-bit: 1 

Napicie pracy: 1.8...5.5V


![img](zdjęcia/Porty.png)


### 2. Rezonator kwarcowy 




## Elementy wejścia



### 3.  Termistor
Termistory NTC ze względny na “ładny”, gładki przebieg charakterystyki rezystancji w funkcji temperatury, są często stosowane w roli elementów pomiarowych. Układ elektroniczny mierzy rezystancję i na podstawie odpowiednich tabel lub wzorów przelicza uzyskaną wartość na temperaturę. Ich rezystancja może zmieniać się w naprawdę szerokim zakresie.
![img](zdjęcia/Termistor.PNG)

## Elementy wyjścia


### 4.  Dioda LED RGB
![img](zdjęcia/LED.PNG)

# Kod
