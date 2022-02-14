
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; int db_scheduler_handle; } ;
typedef TYPE_1__ DbHashEntry ;



 int VAR_0 ;



 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(DbHashEntry *VAR_1)
{
 switch (VAR_1->state)
 {
  case 129:
   FUNC_2(VAR_1);
   if (VAR_1->state == 131)
    FUNC_1(VAR_1);
   break;
  case 131:
   FUNC_1(VAR_1);
   break;
  case 128:
   if (FUNC_0(VAR_1->db_scheduler_handle, ((void*)0)) == VAR_0)
    FUNC_3(VAR_1);
   break;
  case 130:
   break;
 }
}
