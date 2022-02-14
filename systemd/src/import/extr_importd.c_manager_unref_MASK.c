
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Transfer ;
struct TYPE_6__ {int event; int bus; int polkit_registry; int transfers; int notify_fd; int notify_event_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static Manager *FUNC_9(Manager *VAR_0) {
        Transfer *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        FUNC_6(VAR_0->notify_event_source);
        FUNC_4(VAR_0->notify_fd);

        while ((VAR_1 = FUNC_1(VAR_0->transfers)))
                FUNC_8(VAR_1);

        FUNC_2(VAR_0->transfers);

        FUNC_0(VAR_0->polkit_registry);

        VAR_0->bus = FUNC_5(VAR_0->bus);
        FUNC_7(VAR_0->event);

        return FUNC_3(VAR_0);
}
