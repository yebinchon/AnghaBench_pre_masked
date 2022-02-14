
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bDone; int list; } ;
typedef TYPE_1__ SortSubtask ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void *FUNC_3(void *VAR_0){
  SortSubtask *VAR_1 = (SortSubtask*)VAR_0;
  int VAR_2;
  FUNC_1( VAR_1->bDone==0 );
  VAR_2 = FUNC_2(VAR_1, &VAR_1->list);
  VAR_1->bDone = 1;
  return FUNC_0(VAR_2);
}
