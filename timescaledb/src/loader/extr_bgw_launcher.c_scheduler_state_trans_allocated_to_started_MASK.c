
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_5__ {scalar_t__ state; int vxid; int * db_scheduler_handle; int db_oid; } ;
typedef TYPE_1__ DbHashEntry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(DbHashEntry *VAR_2)
{
 pid_t VAR_3;
 bool VAR_4;

 FUNC_0(VAR_2->state == VAR_0);
 FUNC_0(VAR_2->db_scheduler_handle == ((void*)0));

 VAR_4 =
  FUNC_2(VAR_2->db_oid, VAR_2->vxid, &VAR_2->db_scheduler_handle);

 if (!VAR_4)
 {
  FUNC_3(VAR_2);
  return;
 }
 FUNC_5(VAR_2->db_scheduler_handle, &VAR_3);
 FUNC_1(VAR_2->vxid);
 FUNC_4(VAR_2, VAR_1);
}
