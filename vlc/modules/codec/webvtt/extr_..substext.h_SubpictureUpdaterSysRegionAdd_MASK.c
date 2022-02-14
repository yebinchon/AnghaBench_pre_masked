
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; } ;
typedef TYPE_1__ substext_updater_region_t ;



__attribute__((used)) static inline void FUNC_0(substext_updater_region_t *VAR_0,
                                                 substext_updater_region_t *VAR_1)
{
    substext_updater_region_t **VAR_2 = &VAR_0->p_next;
    for(; *VAR_2; VAR_2 = &(*VAR_2)->p_next);
    *VAR_2 = VAR_1;
}
