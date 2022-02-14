
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start_mode; } ;
typedef TYPE_1__ Settings ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,...) ;
 int FUNC_2 (char const*) ;

int FUNC_3(
                const char *VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                unsigned VAR_8,
                const char *VAR_9,
                int VAR_10,
                const char *VAR_11,
                void *VAR_12,
                void *VAR_13) {

        Settings *VAR_14 = VAR_12;
        int VAR_15;

        FUNC_0(VAR_5);
        FUNC_0(VAR_9);
        FUNC_0(VAR_11);

        VAR_15 = FUNC_2(VAR_11);
        if (VAR_15 < 0) {
                FUNC_1(VAR_4, VAR_0, VAR_5, VAR_6, VAR_15, "Failed to parse Boot= parameter %s, ignoring: %m", VAR_11);
                return 0;
        }

        if (VAR_15 > 0) {
                if (VAR_14->start_mode == VAR_3)
                        goto conflict;

                VAR_14->start_mode = VAR_1;
        } else {
                if (VAR_14->start_mode == VAR_1)
                        goto conflict;

                if (VAR_14->start_mode < 0)
                        VAR_14->start_mode = VAR_2;
        }

        return 0;

conflict:
        FUNC_1(VAR_4, VAR_0, VAR_5, VAR_6, VAR_15, "Conflicting Boot= or ProcessTwo= setting found. Ignoring.");
        return 0;
}
