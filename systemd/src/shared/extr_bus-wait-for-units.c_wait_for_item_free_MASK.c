
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int clean_result; int active_state; int bus_path; int slot_get_all; int slot_properties_changed; TYPE_1__* parent; int flags; } ;
typedef TYPE_2__ WaitForItem ;
struct TYPE_8__ {TYPE_2__* current; int items; scalar_t__ bus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int *,char*,int ,char*,char*,int *,int *,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static WaitForItem *FUNC_8(WaitForItem *VAR_1) {
        int VAR_2;

        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->parent) {
                if (FUNC_0(VAR_1->flags, VAR_0) && VAR_1->bus_path && VAR_1->parent->bus) {
                        VAR_2 = FUNC_6(
                                        VAR_1->parent->bus,
                                        ((void*)0),
                                        "org.freedesktop.systemd1",
                                        VAR_1->bus_path,
                                        "org.freedesktop.systemd1.Unit",
                                        "Unref",
                                        ((void*)0),
                                        ((void*)0),
                                        ((void*)0));
                        if (VAR_2 < 0)
                                FUNC_4(VAR_2, "Failed to drop reference to unit %s, ignoring: %m", VAR_1->bus_path);
                }

                FUNC_1(FUNC_3(VAR_1->parent->items, VAR_1->bus_path) == VAR_1);

                if (VAR_1->parent->current == VAR_1)
                        VAR_1->parent->current = ((void*)0);
        }

        FUNC_7(VAR_1->slot_properties_changed);
        FUNC_7(VAR_1->slot_get_all);

        FUNC_2(VAR_1->bus_path);
        FUNC_2(VAR_1->active_state);
        FUNC_2(VAR_1->clean_result);

        return FUNC_5(VAR_1);
}
