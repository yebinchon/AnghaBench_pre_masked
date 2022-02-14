
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_21__ {int search_domains; TYPE_10__* manager; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_22__ {int route_only; } ;
struct TYPE_20__ {int polkit_registry; } ;
typedef TYPE_1__ Link ;
typedef TYPE_3__ DnsSearchDomain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,TYPE_3__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_10__*,TYPE_3__**,int ,TYPE_1__*,char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (int *,int ,char*,...) ;
 int FUNC_13 (TYPE_1__*,char,char*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,char*,char const**,int*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (TYPE_1__*,int *) ;

int FUNC_19(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Link *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_8 = FUNC_18(VAR_7, VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_13(VAR_4, 'a', "(sb)");
        if (VAR_8 < 0)
                return VAR_8;

        for (;;) {
                const char *VAR_9;
                int VAR_10;

                VAR_8 = FUNC_15(VAR_4, "(sb)", &VAR_9, &VAR_10);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 == 0)
                        break;

                VAR_8 = FUNC_3(VAR_9);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 == 0)
                        return FUNC_12(VAR_6, VAR_2, "Invalid search domain %s", VAR_9);
                if (!VAR_10 && FUNC_2(VAR_9))
                        return FUNC_12(VAR_6, VAR_2, "Root domain is not suitable as search domain");
        }

        VAR_8 = FUNC_16(VAR_4, 0);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_4, VAR_0,
                                    "org.freedesktop.resolve1.set-domains",
                                    ((void*)0), 1, VAR_3,
                                    &VAR_7->manager->polkit_registry, VAR_6);
        if (VAR_8 < 0)
                return VAR_8;
        if (VAR_8 == 0)
                return 1;

        FUNC_5(VAR_7->search_domains);

        for (;;) {
                DnsSearchDomain *VAR_11;
                const char *VAR_12;
                int VAR_13;

                VAR_8 = FUNC_15(VAR_4, "(sb)", &VAR_12, &VAR_13);
                if (VAR_8 < 0)
                        goto clear;
                if (VAR_8 == 0)
                        break;

                VAR_8 = FUNC_4(VAR_7->search_domains, VAR_12, &VAR_11);
                if (VAR_8 < 0)
                        goto clear;

                if (VAR_8 > 0)
                        FUNC_6(VAR_11);
                else {
                        VAR_8 = FUNC_7(VAR_7->manager, &VAR_11, VAR_1, VAR_7, VAR_12);
                        if (VAR_8 < 0)
                                goto clear;
                }

                VAR_11->route_only = VAR_13;
        }

        VAR_8 = FUNC_14(VAR_4);
        if (VAR_8 < 0)
                goto clear;

        FUNC_9(VAR_7->search_domains);

        (void) FUNC_10(VAR_7);
        (void) FUNC_11(VAR_7->manager);

        return FUNC_17(VAR_4, ((void*)0));

clear:
        FUNC_8(VAR_7->search_domains);
        return VAR_8;
}
