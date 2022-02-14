
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * manager; } ;
typedef TYPE_1__ Unit ;
typedef int Manager ;
typedef int EmergencyAction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*,...) ;
 int FUNC_4 (char const*,scalar_t__,int *) ;

int FUNC_5(
                const char* VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                unsigned VAR_8,
                const char *VAR_9,
                int VAR_10,
                const char *VAR_11,
                void *VAR_12,
                void *VAR_13) {

        Manager *VAR_14 = ((void*)0);
        EmergencyAction *VAR_15 = VAR_12;
        int VAR_16;

        FUNC_2(VAR_5);
        FUNC_2(VAR_9);
        FUNC_2(VAR_11);
        FUNC_2(VAR_12);

        if (VAR_4)
                VAR_14 = ((Unit*) VAR_13)->manager;
        else
                VAR_14 = VAR_12;

        VAR_16 = FUNC_4(VAR_11, FUNC_0(VAR_14), VAR_15);
        if (VAR_16 < 0) {
                if (VAR_16 == -VAR_1 && FUNC_1(VAR_14)) {


                        FUNC_3(VAR_4, VAR_3, VAR_5, VAR_6, VAR_16,
                                   "%s= in user mode specified as \"%s\", using \"exit-force\" instead.",
                                   VAR_9, VAR_11);
                        *VAR_15 = VAR_0;
                        return 0;
                }

                if (VAR_16 == -VAR_1)
                        FUNC_3(VAR_4, VAR_2, VAR_5, VAR_6, VAR_16,
                                   "%s= specified as %s mode action, ignoring: %s",
                                   VAR_9, FUNC_0(VAR_14) ? "user" : "system", VAR_11);
                else
                        FUNC_3(VAR_4, VAR_2, VAR_5, VAR_6, VAR_16,
                                   "Failed to parse %s=, ignoring: %s", VAR_9, VAR_11);
                return 0;
        }

        return 0;
}
