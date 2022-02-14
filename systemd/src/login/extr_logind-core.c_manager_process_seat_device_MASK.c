
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_11__ {int seat; } ;
struct TYPE_10__ {int seats; int devices; } ;
typedef int Seat ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,int,TYPE_2__**) ;
 int FUNC_8 (TYPE_1__*,char const*,int **) ;
 scalar_t__ FUNC_9 (int *,char*,char const**) ;
 int FUNC_10 (int *,char const**) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int *) ;

int FUNC_15(Manager *VAR_1, sd_device *VAR_2) {
        Device *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);

        if (FUNC_2(VAR_2, VAR_0)) {
                const char *VAR_5;

                VAR_4 = FUNC_10(VAR_2, &VAR_5);
                if (VAR_4 < 0)
                        return 0;

                VAR_3 = FUNC_4(VAR_1->devices, VAR_5);
                if (!VAR_3)
                        return 0;

                FUNC_12(VAR_3->seat);
                FUNC_3(VAR_3);

        } else {
                const char *VAR_6, *VAR_7;
                bool VAR_8;
                Seat *VAR_9;

                if (FUNC_9(VAR_2, "ID_SEAT", &VAR_6) < 0 || FUNC_5(VAR_6))
                        VAR_6 = "seat0";

                if (!FUNC_13(VAR_6)) {
                        FUNC_6(VAR_2, "Device with invalid seat name %s found, ignoring.", VAR_6);
                        return 0;
                }

                VAR_9 = FUNC_4(VAR_1->seats, VAR_6);
                VAR_8 = FUNC_11(VAR_2, "master-of-seat") > 0;


                if (!VAR_8 && !VAR_9)
                        return 0;

                VAR_4 = FUNC_10(VAR_2, &VAR_7);
                if (VAR_4 < 0)
                        return VAR_4;

                VAR_4 = FUNC_7(VAR_1, VAR_7, VAR_8, &VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;

                if (!VAR_9) {
                        VAR_4 = FUNC_8(VAR_1, VAR_6, &VAR_9);
                        if (VAR_4 < 0) {
                                if (!VAR_3->seat)
                                        FUNC_3(VAR_3);

                                return VAR_4;
                        }
                }

                FUNC_1(VAR_3, VAR_9);
                FUNC_14(VAR_9);
        }

        return 0;
}
