
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int usec_t ;
struct TYPE_2__ {unsigned int cpu_quota_per_sec_usec; } ;
typedef TYPE_1__ CGroupContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(
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

        CGroupContext *VAR_13 = VAR_11;
        int VAR_14;

        FUNC_0(VAR_4);
        FUNC_0(VAR_8);
        FUNC_0(VAR_10);

        if (FUNC_1(VAR_10)) {
                VAR_13->cpu_quota_per_sec_usec = VAR_1;
                return 0;
        }

        VAR_14 = FUNC_3(VAR_10);
        if (VAR_14 <= 0) {
                FUNC_2(VAR_3, VAR_0, VAR_4, VAR_5, VAR_14, "Invalid CPU quota '%s', ignoring.", VAR_10);
                return 0;
        }

        VAR_13->cpu_quota_per_sec_usec = ((usec_t) VAR_14 * VAR_2) / 1000U;
        return 0;
}
