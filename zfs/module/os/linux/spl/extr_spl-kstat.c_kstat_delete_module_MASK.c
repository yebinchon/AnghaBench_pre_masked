
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ksm_module_list; int ksm_name; int ksm_kstat_list; } ;
typedef TYPE_1__ kstat_module_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(kstat_module_t *VAR_1)
{
 FUNC_0(FUNC_3(&VAR_1->ksm_kstat_list));
 FUNC_4(VAR_1->ksm_name, VAR_0);
 FUNC_2(&VAR_1->ksm_module_list);
 FUNC_1(VAR_1, sizeof (kstat_module_t));
}
