
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i16 ;
struct TYPE_7__ {int szEst; } ;
struct TYPE_6__ {int nColumn; scalar_t__* aiColumn; int szIdxRow; TYPE_1__* pTable; } ;
struct TYPE_5__ {scalar_t__ nCol; TYPE_3__* aCol; } ;
typedef TYPE_2__ Index ;
typedef TYPE_3__ Column ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(Index *VAR_0){
  unsigned VAR_1 = 0;
  int VAR_2;
  const Column *VAR_3 = VAR_0->pTable->aCol;
  for(VAR_2=0; VAR_2<VAR_0->nColumn; VAR_2++){
    i16 VAR_4 = VAR_0->aiColumn[VAR_2];
    FUNC_0( VAR_4<VAR_0->pTable->nCol );
    VAR_1 += VAR_4<0 ? 1 : VAR_3[VAR_0->aiColumn[VAR_2]].szEst;
  }
  VAR_0->szIdxRow = FUNC_1(VAR_1*4);
}
