#ifndef _BOTAO_H_H_
#define _BOTAO_H_H_
#include<Arduino.h>

class botao {

  public:
  botao(int BTN_1);
  botao(int btn1,int btn);
  int incremente(int num);
  int simples(int ini,bool increDecre);
  ~botao(){};
  

  private:
  int btn,btn0,btn1,ini=0,BTN_1;
  bool flag = 0x00;
  bool flag2 = 0x00;
  bool flag1 = 0x00;
  bool increDecre;
 
  
};

#endif
