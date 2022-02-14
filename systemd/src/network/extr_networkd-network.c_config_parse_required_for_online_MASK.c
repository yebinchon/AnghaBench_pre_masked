
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int required_for_online; scalar_t__ required_operstate_for_online; } ;
typedef TYPE_1__ Network ;
typedef scalar_t__ LinkOperationalState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(
                const char *VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        Network *VAR_12 = VAR_10;
        LinkOperationalState VAR_13;
        bool VAR_14 = 1;
        int VAR_15;

        if (FUNC_0(VAR_9)) {
                VAR_12->required_for_online = 1;
                VAR_12->required_operstate_for_online = VAR_0;
                return 0;
        }

        VAR_13 = FUNC_1(VAR_9);
        if (VAR_13 < 0) {
                VAR_15 = FUNC_3(VAR_9);
                if (VAR_15 < 0) {
                        FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_15,
                                   "Failed to parse %s= setting, ignoring assignment: %s",
                                   VAR_7, VAR_9);
                        return 0;
                }

                VAR_14 = VAR_15;
                VAR_13 = VAR_0;
        }

        VAR_12->required_for_online = VAR_14;
        VAR_12->required_operstate_for_online = VAR_13;

        return 0;
}
