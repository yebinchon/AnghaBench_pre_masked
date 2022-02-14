
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sd_id128_t ;
struct TYPE_11__ {int has_product_uuid; void* links_requesting_uuid; void* duids_requesting_uuid; int product_uuid; } ;
typedef TYPE_1__ sd_bus_message ;
struct TYPE_12__ {int message; } ;
typedef TYPE_2__ sd_bus_error ;
typedef TYPE_1__ Manager ;
typedef int Link ;
typedef int DUID ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *,void const*,size_t) ;
 int FUNC_8 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char,void const**,size_t*) ;
 void* FUNC_11 (void*) ;
 void* FUNC_12 (void*) ;

int FUNC_13(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        const sd_bus_error *VAR_4;
        const void *VAR_5;
        size_t VAR_6;
        DUID *VAR_7;
        Link *VAR_8;
        int VAR_9;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_9(VAR_0);
        if (VAR_4) {
                FUNC_6(FUNC_8(VAR_4),
                                "Could not get product UUID. Falling back to use machine-app-specific ID as DUID-UUID: %s",
                                VAR_4->message);
                goto configure;
        }

        VAR_9 = FUNC_10(VAR_0, 'y', &VAR_5, &VAR_6);
        if (VAR_9 < 0)
                goto configure;

        if (VAR_6 != sizeof(sd_id128_t)) {
                FUNC_5("Invalid product UUID. Falling back to use machine-app-specific ID as DUID-UUID.");
                goto configure;
        }

        FUNC_7(&VAR_3->product_uuid, VAR_5, VAR_6);
        while ((VAR_7 = FUNC_12(VAR_3->duids_requesting_uuid)))
                (void) FUNC_1(VAR_7, VAR_3->product_uuid);

        VAR_3->duids_requesting_uuid = FUNC_11(VAR_3->duids_requesting_uuid);

configure:
        while ((VAR_8 = FUNC_12(VAR_3->links_requesting_uuid))) {
                FUNC_4(VAR_8);

                VAR_9 = FUNC_2(VAR_8);
                if (VAR_9 < 0)
                        FUNC_3(VAR_8);
        }

        VAR_3->links_requesting_uuid = FUNC_11(VAR_3->links_requesting_uuid);



        VAR_3->has_product_uuid = 1;

        return 1;
}
