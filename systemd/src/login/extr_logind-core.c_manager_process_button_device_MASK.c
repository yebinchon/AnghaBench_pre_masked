
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_5__ {int buttons; } ;
typedef TYPE_1__ Manager ;
typedef int Button ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,int **) ;
 scalar_t__ FUNC_8 (int *,char*,char const**) ;
 int FUNC_9 (int *,char const**) ;

int FUNC_10(Manager *VAR_1, sd_device *VAR_2) {
        const char *VAR_3;
        Button *VAR_4;
        int VAR_5;

        FUNC_0(VAR_1);

        VAR_5 = FUNC_9(VAR_2, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        if (FUNC_4(VAR_2, VAR_0)) {

                VAR_4 = FUNC_5(VAR_1->buttons, VAR_3);
                if (!VAR_4)
                        return 0;

                FUNC_1(VAR_4);

        } else {
                const char *VAR_6;

                VAR_5 = FUNC_7(VAR_1, VAR_3, &VAR_4);
                if (VAR_5 < 0)
                        return VAR_5;

                if (FUNC_8(VAR_2, "ID_SEAT", &VAR_6) < 0 || FUNC_6(VAR_6))
                        VAR_6 = "seat0";

                FUNC_3(VAR_4, VAR_6);

                VAR_5 = FUNC_2(VAR_4);
                if (VAR_5 < 0)

                        FUNC_1(VAR_4);
        }

        return 0;
}
