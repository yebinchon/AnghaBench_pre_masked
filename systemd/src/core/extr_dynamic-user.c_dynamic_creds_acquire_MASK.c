
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ user; scalar_t__ group; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_1__ DynamicCreds ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

int FUNC_5(DynamicCreds *VAR_0, Manager *VAR_1, const char *VAR_2, const char *VAR_3) {
        bool VAR_4 = 0;
        int VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);





        if (!VAR_0->user && VAR_2) {
                VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_0->user);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_4 = 1;
        }

        if (!VAR_0->group) {

                if (VAR_0->user && (!VAR_3 || FUNC_4(VAR_2, VAR_3)))
                        VAR_0->group = FUNC_2(VAR_0->user);
                else {
                        VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_0->group);
                        if (VAR_5 < 0) {
                                if (VAR_4)
                                        VAR_0->user = FUNC_3(VAR_0->user);
                                return VAR_5;
                        }
                }
        }

        return 0;
}
