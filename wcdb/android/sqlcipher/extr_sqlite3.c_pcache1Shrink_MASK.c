
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_7__ {TYPE_1__* pGroup; scalar_t__ bPurgeable; } ;
struct TYPE_6__ {int nMaxPage; } ;
typedef TYPE_1__ PGroup ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sqlite3_pcache *VAR_0){
  PCache1 *VAR_1 = (PCache1*)VAR_0;
  if( VAR_1->bPurgeable ){
    PGroup *VAR_2 = VAR_1->pGroup;
    int VAR_3;
    FUNC_1(VAR_2);
    VAR_3 = VAR_2->nMaxPage;
    VAR_2->nMaxPage = 0;
    FUNC_0(VAR_1);
    VAR_2->nMaxPage = VAR_3;
    FUNC_2(VAR_2);
  }
}
