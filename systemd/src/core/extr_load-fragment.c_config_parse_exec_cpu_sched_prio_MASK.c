
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_sched_priority; int cpu_sched_set; int cpu_sched_policy; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(const char *VAR_1,
                                     const char *VAR_2,
                                     unsigned VAR_3,
                                     const char *VAR_4,
                                     unsigned VAR_5,
                                     const char *VAR_6,
                                     int VAR_7,
                                     const char *VAR_8,
                                     void *VAR_9,
                                     void *VAR_10) {

        ExecContext *VAR_11 = VAR_9;
        int VAR_12, VAR_13, VAR_14, VAR_15;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_15 = FUNC_2(VAR_8, &VAR_12);
        if (VAR_15 < 0) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_15, "Failed to parse CPU scheduling priority, ignoring: %s", VAR_8);
                return 0;
        }


        VAR_13 = FUNC_4(VAR_11->cpu_sched_policy);
        VAR_14 = FUNC_3(VAR_11->cpu_sched_policy);

        if (VAR_12 < VAR_13 || VAR_12 > VAR_14) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, 0, "CPU scheduling priority is out of range, ignoring: %s", VAR_8);
                return 0;
        }

        VAR_11->cpu_sched_priority = VAR_12;
        VAR_11->cpu_sched_set = 1;

        return 0;
}
