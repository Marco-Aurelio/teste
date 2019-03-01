#include<botao.h>

botao :: botao(int BTN_1) {

  this-> BTN_1 = BTN_1;
  pinMode(BTN_1, INPUT_PULLUP);
}


botao :: botao(int btn1, int btn) {

  this-> btn = btn;
  this-> btn1 = btn1;
  pinMode(btn, INPUT_PULLUP);
  pinMode(btn1, INPUT_PULLUP);

}

int botao :: incremente(int num) {

  int static Num = 0;

  if (!digitalRead(btn))flag = 1;

  if (digitalRead(btn) && flag) {

    flag = 0x00;
    Num ++;
    if (Num > num)Num = 0;

  }
  if (!digitalRead(btn1))flag1 = 1;
  if (digitalRead(btn1) && flag1) {

    flag1 = 0x00;
    Num --;
    if (Num < 0)Num = num;

  } return Num;
}

int botao :: simples(int ini, bool increDecre) {

  this-> ini = ini;
  this-> increDecre = increDecre;
  int static dd = 0; 
  
  if (!digitalRead(BTN_1))flag2 = 1;
  if (digitalRead(BTN_1) && flag2) {
    
	flag2 = 0;
		
    if (increDecre) {//-----------------
		
      dd ++;
      if (dd > ini)dd = 0;
      
    }
	if (!increDecre) {
        dd --;       
        if (dd < 0)dd = ini;
        
      }	  
    }
	
	return dd;

	}//-----------fim simples











