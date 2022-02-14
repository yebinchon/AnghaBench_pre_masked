
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_sched_set; int cpu_sched_policy; scalar_t__ cpu_sched_priority; } ;
typedef TYPE_1__ ExecContext ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_2,
                                       const char *VAR_3,
                                       unsigned VAR_4,
                                       const char *VAR_5,
                                       unsigned VAR_6,
                                       const char *VAR_7,
                                       int VAR_8,
                                       const char *VAR_9,
                                       void *VAR_10,
                                       void *VAR_11) {

        ExecContext *VAR_12 = VAR_10;
        int VAR_13;

        FUNC_1(VAR_3);
        FUNC_1(VAR_7);
        FUNC_1(VAR_9);
        FUNC_1(VAR_10);

        if (FUNC_2(VAR_9)) {
                VAR_12->cpu_sched_set = 0;
                VAR_12->cpu_sched_policy = VAR_1;
                VAR_12->cpu_sched_priority = 0;
                return 0;
        }

        VAR_13 = FUNC_6(VAR_9);
        if (VAR_13 < 0) {
                FUNC_3(VAR_2, VAR_0, VAR_3, VAR_4, 0, "Failed to parse CPU scheduling policy, ignoring: %s", VAR_9);
                return 0;
        }

        VAR_12->cpu_sched_policy = VAR_13;

        VAR_12->cpu_sched_priority = FUNC_0(VAR_12->cpu_sched_priority, FUNC_5(VAR_13), FUNC_4(VAR_13));
        VAR_12->cpu_sched_set = 1;

        return 0;
}
