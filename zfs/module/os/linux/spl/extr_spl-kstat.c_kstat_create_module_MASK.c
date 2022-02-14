
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_4__ {int ksm_module_list; int ksm_kstat_list; int ksm_name; struct proc_dir_entry* ksm_proc; } ;
typedef TYPE_1__ kstat_module_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 struct proc_dir_entry* FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static kstat_module_t *
FUNC_5(char *VAR_4)
{
 kstat_module_t *VAR_5;
 struct proc_dir_entry *VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_5 = FUNC_1(sizeof (kstat_module_t), VAR_0);
 VAR_5->ksm_proc = VAR_6;
 FUNC_4(VAR_5->ksm_name, VAR_4, VAR_1+1);
 FUNC_0(&VAR_5->ksm_kstat_list);
 FUNC_2(&VAR_5->ksm_module_list, &VAR_2);

 return (VAR_5);

}
