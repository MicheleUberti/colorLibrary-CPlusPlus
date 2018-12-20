/*
*	Created by Michele Uberti
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

void colorString(int colorText, int colorBackground){

	/*
	LISTA COLORI TESTO:
	
	0 = nero
	1 = blu scuro
	2 = verde
	3 = ciano
	4 = rosso
	5 = viola
	6 = giallo
	7 = bianco
	
	IL NERO VIENE RAPPRESENTATO CON IL GRIGIO SCURO
	*/
	
	/*
	LISTA EVIDENZIATORI TESTO:
	
	0 = nero
	1 = blu scuro
	2 = verde
	3 = ciano
	4 = rosso
	5 = viola
	6 = giallo
	7 = bianco
	*/
	
	
	int colorStringText=0;
	
	if(colorBackground!=0){
		for(int i=0;i<=colorBackground;i++){
			colorStringText=colorText+16;
		}
	}	
	
	else if(colorBackground==0){
		colorStringText=colorText;
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | colorStringText);
}
