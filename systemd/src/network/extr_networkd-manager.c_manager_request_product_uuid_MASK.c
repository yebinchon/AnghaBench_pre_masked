
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bus; int duids_requesting_uuid; int links_requesting_uuid; scalar_t__ has_product_uuid; } ;
typedef TYPE_1__ Manager ;
typedef int Link ;
typedef int DUID ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,int *,char*,char*,char*,char*,int ,TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(Manager *VAR_1, Link *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        if (VAR_1->has_product_uuid)
                return 0;

        FUNC_4("Requesting product UUID");

        if (VAR_2) {
                DUID *VAR_4;

                FUNC_1(VAR_4 = FUNC_2(VAR_2));

                VAR_3 = FUNC_9(&VAR_1->links_requesting_uuid, ((void*)0));
                if (VAR_3 < 0)
                        return FUNC_5();

                VAR_3 = FUNC_9(&VAR_1->duids_requesting_uuid, ((void*)0));
                if (VAR_3 < 0)
                        return FUNC_5();

                VAR_3 = FUNC_10(VAR_1->links_requesting_uuid, VAR_2);
                if (VAR_3 < 0)
                        return FUNC_5();

                VAR_3 = FUNC_10(VAR_1->duids_requesting_uuid, VAR_4);
                if (VAR_3 < 0)
                        return FUNC_5();

                FUNC_3(VAR_2);
        }

        if (!VAR_1->bus || FUNC_8(VAR_1->bus) <= 0) {
                FUNC_4("Not connected to system bus, requesting product UUID later.");
                return 0;
        }

        VAR_3 = FUNC_7(
                        VAR_1->bus,
                        ((void*)0),
                        "org.freedesktop.hostname1",
                        "/org/freedesktop/hostname1",
                        "org.freedesktop.hostname1",
                        "GetProductUUID",
                        VAR_0,
                        VAR_1,
                        "b",
                        0);
        if (VAR_3 < 0)
                return FUNC_6(VAR_3, "Failed to get product UUID: %m");

        return 0;
}
