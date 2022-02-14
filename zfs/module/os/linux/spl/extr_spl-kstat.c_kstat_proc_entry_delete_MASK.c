
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kpe_proc; int kpe_list; int kpe_name; TYPE_2__* kpe_owner; } ;
typedef TYPE_1__ kstat_proc_entry_t ;
struct TYPE_6__ {int ksm_kstat_list; int ksm_proc; } ;
typedef TYPE_2__ kstat_module_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(kstat_proc_entry_t *VAR_1)
{
 kstat_module_t *VAR_2 = VAR_1->kpe_owner;
 if (VAR_1->kpe_proc)
  FUNC_5(VAR_1->kpe_name, VAR_2->ksm_proc);

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_1->kpe_list);





 if (VAR_1->kpe_proc && FUNC_2(&VAR_2->ksm_kstat_list))
  FUNC_0(VAR_2);
 FUNC_4(&VAR_0);

}
