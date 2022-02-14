
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pLimit; int selFlags; scalar_t__ op; int nSelectRow; struct TYPE_6__* pNext; struct TYPE_6__* pPrior; TYPE_1__* pEList; } ;
struct TYPE_5__ {scalar_t__ nExpr; } ;
typedef int SelectDest ;
typedef TYPE_2__ Select ;
typedef int Parse ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*,int,int ,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_3(
  Parse *VAR_4,
  Select *VAR_5,
  SelectDest *VAR_6
){
  int VAR_7 = 1;
  int VAR_8 = 0;
  int VAR_9 = VAR_5->pLimit==0;
  FUNC_1( VAR_5->selFlags & VAR_0 );
  do{
    FUNC_1( VAR_5->selFlags & VAR_1 );
    FUNC_1( VAR_5->op==VAR_2 || (VAR_5->op==VAR_3 && VAR_5->pPrior==0) );
    FUNC_1( VAR_5->pNext==0 || VAR_5->pEList->nExpr==VAR_5->pNext->pEList->nExpr );
    if( VAR_5->pPrior==0 ) break;
    FUNC_1( VAR_5->pPrior->pNext==VAR_5 );
    VAR_5 = VAR_5->pPrior;
    VAR_7 += VAR_9;
  }while(1);
  FUNC_0((VAR_4, 0, "SCAN %d CONSTANT ROW%s", VAR_7,
                    VAR_7==1 ? "" : "S"));
  while( VAR_5 ){
    FUNC_2(VAR_4, VAR_5, -1, 0, 0, VAR_6, 1, 1);
    if( !VAR_9 ) break;
    VAR_5->nSelectRow = VAR_7;
    VAR_5 = VAR_5->pNext;
  }
  return VAR_8;
}
