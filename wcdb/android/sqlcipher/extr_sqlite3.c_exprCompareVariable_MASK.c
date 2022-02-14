
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_8__ {int iColumn; } ;
struct TYPE_7__ {int pReprepare; int pVdbe; int db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*,int ,int ,int **) ;
 int * FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(Parse *VAR_3, Expr *VAR_4, Expr *VAR_5){
  int VAR_6 = 0;
  int VAR_7;
  sqlite3_value *VAR_8, *VAR_9 = 0;

  FUNC_2(VAR_3->db, VAR_5, VAR_2, VAR_0, &VAR_9);
  if( VAR_9 ){
    VAR_7 = VAR_4->iColumn;
    FUNC_4(VAR_3->pVdbe, VAR_7);
    VAR_8 = FUNC_3(VAR_3->pReprepare, VAR_7, VAR_0);
    if( VAR_8 ){
      if( FUNC_6(VAR_8)==VAR_1 ){
        FUNC_5(VAR_8);
      }
      VAR_6 = 0==FUNC_0(VAR_8, VAR_9, 0);
    }
    FUNC_1(VAR_9);
    FUNC_1(VAR_8);
  }

  return VAR_6;
}
