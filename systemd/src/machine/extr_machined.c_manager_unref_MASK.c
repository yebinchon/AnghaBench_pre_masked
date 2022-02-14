
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ n_operations; int event; int bus; int polkit_registry; int nscd_cache_flush_event; int image_cache_defer_event; int image_cache; int machine_leaders; int machine_units; int machines; scalar_t__ operations; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static Manager* FUNC_8(Manager *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        while (VAR_0->operations)
                FUNC_4(VAR_0->operations);

        FUNC_0(VAR_0->n_operations == 0);

        FUNC_2(VAR_0->machines);
        FUNC_2(VAR_0->machine_units);
        FUNC_2(VAR_0->machine_leaders);
        FUNC_2(VAR_0->image_cache);

        FUNC_6(VAR_0->image_cache_defer_event);
        FUNC_6(VAR_0->nscd_cache_flush_event);

        FUNC_1(VAR_0->polkit_registry);

        FUNC_5(VAR_0->bus);
        FUNC_7(VAR_0->event);

        return FUNC_3(VAR_0);
}
