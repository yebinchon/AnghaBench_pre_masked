
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int usec_t ;
typedef int sd_device ;
struct TYPE_13__ {scalar_t__ dev_db_clone; int * dev; } ;
typedef TYPE_1__ UdevRules ;
typedef TYPE_1__ UdevEvent ;
typedef int Hashmap ;
typedef scalar_t__ DeviceAction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,char const**) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*,int ,int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_1__*) ;

int FUNC_18(UdevEvent *VAR_2,
                             usec_t VAR_3,
                             Hashmap *VAR_4,
                             UdevRules *VAR_5) {
        const char *VAR_6;
        DeviceAction VAR_7;
        sd_device *VAR_8;
        int VAR_9;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_8 = VAR_2->dev;

        VAR_9 = FUNC_12(VAR_8, &VAR_6);
        if (VAR_9 < 0)
                return FUNC_9(VAR_8, VAR_9, "Failed to get subsystem: %m");

        VAR_9 = FUNC_3(VAR_8, &VAR_7);
        if (VAR_9 < 0)
                return FUNC_9(VAR_8, VAR_9, "Failed to get ACTION: %m");

        if (VAR_7 == VAR_1) {
                FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5);
                return 0;
        }

        VAR_9 = FUNC_1(VAR_8, &VAR_2->dev_db_clone);
        if (VAR_9 < 0)
                return FUNC_8(VAR_8, VAR_9, "Failed to clone sd_device object: %m");

        if (VAR_2->dev_db_clone && FUNC_11(VAR_8, ((void*)0)) >= 0)

                (void) FUNC_16(VAR_2->dev_db_clone);

        if (VAR_7 == VAR_0) {
                VAR_9 = FUNC_14(VAR_2);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        VAR_9 = FUNC_15(VAR_5, VAR_2, VAR_3, VAR_4);
        if (VAR_9 < 0)
                return FUNC_8(VAR_8, VAR_9, "Failed to apply udev rules: %m");

        VAR_9 = FUNC_10(VAR_2);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_17(VAR_2);
        if (VAR_9 < 0)
                return VAR_9;


        VAR_9 = FUNC_2(VAR_8, VAR_2->dev_db_clone);
        if (VAR_9 < 0)
                return FUNC_8(VAR_8, VAR_9, "Failed to set initialization timestamp: %m");


        VAR_9 = FUNC_5(VAR_8, VAR_2->dev_db_clone, 1);
        if (VAR_9 < 0)
                return FUNC_8(VAR_8, VAR_9, "Failed to update tags under /run/udev/tag/: %m");

        VAR_9 = FUNC_6(VAR_8);
        if (VAR_9 < 0)
                return FUNC_8(VAR_8, VAR_9, "Failed to update database under /run/udev/data/: %m");

        FUNC_4(VAR_8);

        VAR_2->dev_db_clone = FUNC_13(VAR_2->dev_db_clone);

        return 0;
}
