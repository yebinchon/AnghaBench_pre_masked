
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int duids_requesting_uuid; int links_requesting_uuid; int product_uuid; scalar_t__ has_product_uuid; struct TYPE_15__* manager; struct TYPE_15__* network; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_1__ Link ;
typedef TYPE_1__ DUID ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(Link *VAR_1) {
        Manager *VAR_2;
        DUID *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->manager);
        FUNC_0(VAR_1->network);

        VAR_2 = VAR_1->manager;
        VAR_3 = FUNC_2(VAR_1);

        if (!FUNC_4(VAR_1))
                return 1;

        if (VAR_2->has_product_uuid) {
                (void) FUNC_1(VAR_3, VAR_2->product_uuid);
                return 1;
        }

        if (!VAR_2->links_requesting_uuid) {
                VAR_4 = FUNC_7(VAR_2, VAR_1);
                if (VAR_4 < 0) {
                        if (VAR_4 == -VAR_0)
                                return VAR_4;

                        FUNC_5(VAR_1, VAR_4,
                                               "Failed to get product UUID. Falling back to use machine-app-specific ID as DUID-UUID: %m");
                        return 1;
                }
        } else {
                VAR_4 = FUNC_8(VAR_2->links_requesting_uuid, VAR_1);
                if (VAR_4 < 0)
                        return FUNC_6();

                VAR_4 = FUNC_8(VAR_2->duids_requesting_uuid, VAR_3);
                if (VAR_4 < 0)
                        return FUNC_6();

                FUNC_3(VAR_1);
        }

        return 0;
}
