// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "tuto04.h"
#include <stdlib.h>
#include <stdio.h>
#include "func.c"

void funcbuttonclick() {
  printf( "This is a test of clicked button!  ");
  printf( "Integer: %d\n " , integerinc++ );
}

static void cb_Click(Fl_Button*, void*) {
  funcbuttonclick();
}

Fl_Double_Window* win1() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(525, 300);
    w = o;
    { Fl_Button* o = new Fl_Button(25, 25, 150, 65, "Click Me Button !");
      o->callback((Fl_Callback*)cb_Click);
      Fl_Group::current()->resizable(o);
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  w->show();
  return w;
}

int main() {
  printf("Hello, World!\n");  win1(); 
   Fl::run();
}
