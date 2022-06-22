#ifndef ZONAFRANCA
#define ZONAFRANCA
#include "Fabrica.h"
#define MAX_FABRICAS 60
#include<string>
class ZonaFranca {
   private:
      Fabrica * fabrica[MAX_FABRICAS];
	  int cantidad;
	  void add(Fabrica *);
   public:
      ZonaFranca();
	  ~ZonaFranca();
	  Fabrica * getFabrica(string);
};

#endif
