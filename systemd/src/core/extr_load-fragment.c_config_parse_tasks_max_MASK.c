
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_3__ {scalar_t__ default_tasks_max; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int,unsigned int) ;

int FUNC_6(
                const char *VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                int VAR_9,
                const char *VAR_10,
                void *VAR_11,
                void *VAR_12) {

        uint64_t *VAR_13 = VAR_11, VAR_14;
        const Unit *VAR_15 = VAR_12;
        int VAR_16;

        if (FUNC_0(VAR_10)) {
                *VAR_13 = VAR_15 ? VAR_15->manager->default_tasks_max : VAR_2;
                return 0;
        }

        if (FUNC_4(VAR_10, "infinity")) {
                *VAR_13 = VAR_0;
                return 0;
        }

        VAR_16 = FUNC_2(VAR_10);
        if (VAR_16 < 0) {
                VAR_16 = FUNC_3(VAR_10, &VAR_14);
                if (VAR_16 < 0) {
                        FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5, VAR_16, "Invalid maximum tasks value '%s', ignoring: %m", VAR_10);
                        return 0;
                }
        } else
                VAR_14 = FUNC_5(VAR_16, 1000U);

        if (VAR_14 <= 0 || VAR_14 >= VAR_2) {
                FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5, 0, "Maximum tasks value '%s' out of range, ignoring.", VAR_10);
                return 0;
        }

        *VAR_13 = VAR_14;
        return 0;
}
