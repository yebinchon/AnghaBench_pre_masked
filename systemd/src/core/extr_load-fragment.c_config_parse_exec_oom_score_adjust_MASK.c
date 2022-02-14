
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oom_score_adjust_set; int oom_score_adjust; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*,int*) ;

int FUNC_4(
                const char* VAR_2,
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
        int VAR_13, VAR_14;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        if (FUNC_1(VAR_9)) {
                VAR_12->oom_score_adjust_set = 0;
                return 0;
        }

        VAR_14 = FUNC_3(VAR_9, &VAR_13);
        if (VAR_14 < 0) {
                if (VAR_14 == -VAR_0)
                        FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "OOM score adjust value out of range, ignoring: %s", VAR_9);
                else
                        FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "Failed to parse the OOM score adjust value '%s', ignoring: %m", VAR_9);
                return 0;
        }

        VAR_12->oom_score_adjust = VAR_13;
        VAR_12->oom_score_adjust_set = 1;

        return 0;
}
