
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nCol; scalar_t__ iPKey; int szTabRow; TYPE_2__* aCol; } ;
typedef TYPE_1__ Table ;
struct TYPE_5__ {scalar_t__ szEst; } ;
typedef TYPE_2__ Column ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(Table *VAR_0){
  unsigned VAR_1 = 0;
  const Column *VAR_2;
  int VAR_3;
  for(VAR_3=VAR_0->nCol, VAR_2=VAR_0->aCol; VAR_3>0; VAR_3--, VAR_2++){
    VAR_1 += VAR_2->szEst;
  }
  if( VAR_0->iPKey<0 ) VAR_1++;
  VAR_0->szTabRow = FUNC_0(VAR_1*4);
}
