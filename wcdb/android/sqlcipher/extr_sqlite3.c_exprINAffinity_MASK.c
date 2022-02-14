
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* pSelect; } ;
struct TYPE_18__ {int flags; scalar_t__ op; TYPE_1__ x; struct TYPE_18__* pLeft; } ;
struct TYPE_17__ {int db; } ;
struct TYPE_16__ {TYPE_3__* pEList; } ;
struct TYPE_15__ {TYPE_2__* a; } ;
struct TYPE_14__ {int pExpr; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int ,char) ;
 char* FUNC_2 (int ,int) ;
 char FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_6__*,int) ;

__attribute__((used)) static char *FUNC_6(Parse *VAR_2, Expr *VAR_3){
  Expr *VAR_4 = VAR_3->pLeft;
  int VAR_5 = FUNC_4(VAR_4);
  Select *VAR_6 = (VAR_3->flags & VAR_0) ? VAR_3->x.pSelect : 0;
  char *VAR_7;

  FUNC_0( VAR_3->op==VAR_1 );
  VAR_7 = FUNC_2(VAR_2->db, VAR_5+1);
  if( VAR_7 ){
    int VAR_8;
    for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
      Expr *VAR_9 = FUNC_5(VAR_4, VAR_8);
      char VAR_10 = FUNC_3(VAR_9);
      if( VAR_6 ){
        VAR_7[VAR_8] = FUNC_1(VAR_6->pEList->a[VAR_8].pExpr, VAR_10);
      }else{
        VAR_7[VAR_8] = VAR_10;
      }
    }
    VAR_7[VAR_5] = '\0';
  }
  return VAR_7;
}
