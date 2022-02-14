
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int * db_scheduler_handle; } ;
typedef TYPE_1__ DbHashEntry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(DbHashEntry *VAR_2)
{
 FUNC_0(VAR_2->state == VAR_1);
 FUNC_0(VAR_2->db_scheduler_handle == ((void*)0));

 if (!FUNC_3())
 {
  FUNC_1(VAR_2);
  return;
 }
 FUNC_2(VAR_2, VAR_0);
}
