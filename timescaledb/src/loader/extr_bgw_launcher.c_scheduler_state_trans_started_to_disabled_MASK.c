
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int * db_scheduler_handle; } ;
typedef TYPE_1__ DbHashEntry ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(DbHashEntry *VAR_3)
{
 FUNC_0(VAR_3->state == VAR_2);
 FUNC_0(FUNC_1(VAR_3->db_scheduler_handle, ((void*)0)) == VAR_0);

 FUNC_4();
 if (VAR_3->db_scheduler_handle != ((void*)0))
 {
  FUNC_2(VAR_3->db_scheduler_handle);
  VAR_3->db_scheduler_handle = ((void*)0);
 }
 FUNC_3(VAR_3, VAR_1);
}
