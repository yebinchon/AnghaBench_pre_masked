
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ eStart; scalar_t__ regApp; scalar_t__ csrApp; scalar_t__ regAccum; TYPE_3__* pFunc; struct TYPE_8__* pNextWin; } ;
typedef TYPE_1__ Window ;
typedef int Vdbe ;
struct TYPE_10__ {scalar_t__ zName; int funcFlags; } ;
struct TYPE_9__ {int nMem; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FuncDef ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(Parse *VAR_7, Window *VAR_8){
  Vdbe *VAR_9 = FUNC_2(VAR_7);
  int VAR_10;
  int VAR_11 = 0;
  Window *VAR_12;
  for(VAR_12=VAR_8; VAR_12; VAR_12=VAR_12->pNextWin){
    FuncDef *VAR_13 = VAR_12->pFunc;
    FUNC_4(VAR_9, VAR_1, 0, VAR_12->regAccum);
    VAR_11 = FUNC_0(VAR_11, FUNC_5(VAR_12));
    if( VAR_13->zName==VAR_6
     || VAR_13->zName==VAR_5
    ){
      FUNC_4(VAR_9, VAR_0, 0, VAR_12->regApp);
      FUNC_4(VAR_9, VAR_0, 0, VAR_12->regApp+1);
    }

    if( (VAR_13->funcFlags & VAR_3) && VAR_12->csrApp ){
      FUNC_1( VAR_12->eStart!=VAR_4 );
      FUNC_3(VAR_9, VAR_2, VAR_12->csrApp);
      FUNC_4(VAR_9, VAR_0, 0, VAR_12->regApp+1);
    }
  }
  VAR_10 = VAR_7->nMem+1;
  VAR_7->nMem += VAR_11;
  return VAR_10;
}
