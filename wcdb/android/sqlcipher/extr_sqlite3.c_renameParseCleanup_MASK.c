
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
struct TYPE_6__ {int pRename; int zErrMsg; int pNewTrigger; TYPE_2__* pNewIndex; int pNewTable; scalar_t__ pVdbe; int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Index ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(Parse *VAR_0){
  sqlite3 *VAR_1 = VAR_0->db;
  Index *VAR_2;
  if( VAR_0->pVdbe ){
    FUNC_6(VAR_0->pVdbe);
  }
  FUNC_2(VAR_1, VAR_0->pNewTable);
  while( (VAR_2 = VAR_0->pNewIndex)!=0 ){
    VAR_0->pNewIndex = VAR_2->pNext;
    FUNC_4(VAR_1, VAR_2);
  }
  FUNC_3(VAR_1, VAR_0->pNewTrigger);
  FUNC_1(VAR_1, VAR_0->zErrMsg);
  FUNC_0(VAR_1, VAR_0->pRename);
  FUNC_5(VAR_0);
}
