
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_16__ {int get_name_owner_slot; } ;
typedef TYPE_1__ sd_bus_message ;
struct TYPE_17__ {int message; } ;
typedef TYPE_2__ sd_bus_error ;
typedef TYPE_1__ Unit ;
struct TYPE_15__ {int (* bus_name_owner_change ) (TYPE_1__*,int *,char const*) ;} ;


 TYPE_13__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int *,char const*) ;

__attribute__((used)) static int FUNC_11(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const sd_bus_error *VAR_3;
        const char *VAR_4;
        Unit *VAR_5 = VAR_1;
        int VAR_6;

        FUNC_1(VAR_0);
        FUNC_1(VAR_5);

        VAR_5->get_name_owner_slot = FUNC_9(VAR_5->get_name_owner_slot);

        if (FUNC_6(VAR_2)) {
                FUNC_4("Failed to get name owner from bus: %s", VAR_2->message);
                return 0;
        }

        VAR_3 = FUNC_7(VAR_0);
        if (FUNC_5(VAR_3, "org.freedesktop.DBus.Error.NameHasNoOwner"))
                return 0;

        if (VAR_3) {
                FUNC_4("Unexpected error response from GetNameOwner: %s", VAR_3->message);
                return 0;
        }

        VAR_6 = FUNC_8(VAR_0, "s", &VAR_4);
        if (VAR_6 < 0) {
                FUNC_2(VAR_6);
                return 0;
        }

        VAR_4 = FUNC_3(VAR_4);

        if (FUNC_0(VAR_5)->bus_name_owner_change)
                FUNC_0(VAR_5)->bus_name_owner_change(VAR_5, ((void*)0), VAR_4);

        return 0;
}
