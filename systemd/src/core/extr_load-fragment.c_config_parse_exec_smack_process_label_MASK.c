
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_2__ {int smack_process_label_ignore; int smack_process_label; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*,char const*,char**) ;

int FUNC_6(
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

        ExecContext *VAR_12 = VAR_10;
        const Unit *VAR_13 = VAR_11;
        bool VAR_14;
        char *VAR_15;
        int VAR_16;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        if (FUNC_2(VAR_9)) {
                VAR_12->smack_process_label = FUNC_4(VAR_12->smack_process_label);
                VAR_12->smack_process_label_ignore = 0;
                return 0;
        }

        if (VAR_9[0] == '-') {
                VAR_14 = 1;
                VAR_9++;
        } else
                VAR_14 = 0;

        VAR_16 = FUNC_5(VAR_13, VAR_9, &VAR_15);
        if (VAR_16 < 0) {
                FUNC_3(VAR_2, VAR_1, VAR_3, VAR_4, VAR_16,
                           "Failed to resolve unit specifiers in '%s'%s: %m",
                           VAR_9, VAR_14 ? ", ignoring" : "");
                return VAR_14 ? 0 : -VAR_0;
        }

        FUNC_1(VAR_12->smack_process_label, VAR_15);
        VAR_12->smack_process_label_ignore = VAR_14;

        return 0;
}
