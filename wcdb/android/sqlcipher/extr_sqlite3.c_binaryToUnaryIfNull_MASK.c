
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3 ;
struct TYPE_7__ {scalar_t__ op; int pRight; } ;
struct TYPE_6__ {int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_2, Expr *VAR_3, Expr *VAR_4, int VAR_5){
    sqlite3 *VAR_6 = VAR_2->db;
    if( VAR_4 && VAR_3 && VAR_3->op==VAR_1 && !VAR_0 ){
      VAR_4->op = (u8)VAR_5;
      FUNC_0(VAR_6, VAR_4->pRight);
      VAR_4->pRight = 0;
    }
  }
