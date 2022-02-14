
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int event; int bus; int polkit_registry; int image_cache_defer_event; int image_cache; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static Manager* FUNC_7(Manager *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_2(VAR_0->image_cache);

        FUNC_5(VAR_0->image_cache_defer_event);

        FUNC_1(VAR_0->polkit_registry);

        FUNC_4(VAR_0->bus);
        FUNC_6(VAR_0->event);

        return FUNC_3(VAR_0);
}
