
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state_transition_failures; int vxid; int state; int * db_scheduler_handle; } ;
typedef int Oid ;
typedef int HTAB ;
typedef TYPE_1__ DbHashEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static DbHashEntry *
FUNC_3(HTAB *VAR_2, Oid VAR_3)
{
 DbHashEntry *VAR_4;
 bool VAR_5;

 VAR_4 = (DbHashEntry *) FUNC_1(VAR_2, &VAR_3, VAR_1, &VAR_5);
 if (!VAR_5)
 {
  VAR_4->db_scheduler_handle = ((void*)0);
  VAR_4->state = VAR_0;
  FUNC_0(VAR_4->vxid);
  VAR_4->state_transition_failures = 0;
  FUNC_2(VAR_4);
 }

 return VAR_4;
}
