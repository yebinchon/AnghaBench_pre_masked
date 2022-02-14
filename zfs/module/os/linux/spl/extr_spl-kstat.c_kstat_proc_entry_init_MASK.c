
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kpe_name; int kpe_module; int kpe_list; int * kpe_proc; int * kpe_owner; } ;
typedef TYPE_1__ kstat_proc_entry_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;

void
FUNC_2(kstat_proc_entry_t *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 VAR_1->kpe_owner = ((void*)0);
 VAR_1->kpe_proc = ((void*)0);
 FUNC_0(&VAR_1->kpe_list);
 FUNC_1(VAR_1->kpe_module, VAR_2, VAR_0);
 FUNC_1(VAR_1->kpe_name, VAR_3, VAR_0);
}
