
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_14__ {char* id; } ;
typedef TYPE_2__ Seat ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,char const*,int *,TYPE_2__**) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,int ,char*,char const*) ;
 int FUNC_9 (TYPE_1__*,char*,char const**,char const**,int*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        const char *VAR_6, *VAR_7;
        Manager *VAR_8 = VAR_4;
        int VAR_9, VAR_10;

        FUNC_2(VAR_3);
        FUNC_2(VAR_8);

        VAR_10 = FUNC_9(VAR_3, "ssb", &VAR_7, &VAR_6, &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        if (!FUNC_6(VAR_6))
                return FUNC_8(VAR_5, VAR_1, "Path %s is not normalized", VAR_6);
        if (!FUNC_7(VAR_6, "/sys"))
                return FUNC_8(VAR_5, VAR_1, "Path %s is not in /sys", VAR_6);

        if (FUNC_1(VAR_7) || FUNC_0(VAR_7)) {
                Seat *VAR_11;

                VAR_10 = FUNC_5(VAR_8, VAR_3, VAR_7, VAR_5, &VAR_11);
                if (VAR_10 < 0)
                        return VAR_10;

                VAR_7 = VAR_11->id;

        } else if (!FUNC_11(VAR_7))
                return FUNC_8(VAR_5, VAR_1, "Seat name %s is not valid", VAR_7);

        VAR_10 = FUNC_4(
                        VAR_3,
                        VAR_0,
                        "org.freedesktop.login1.attach-device",
                        ((void*)0),
                        VAR_9,
                        VAR_2,
                        &VAR_8->polkit_registry,
                        VAR_5);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;

        return FUNC_10(VAR_3, ((void*)0));
}
