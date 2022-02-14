
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ AddressFamily ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

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

        AddressFamily *VAR_12 = VAR_10, VAR_13;

        FUNC_1(VAR_3);
        FUNC_1(VAR_7);
        FUNC_1(VAR_9);
        FUNC_1(VAR_10);
        VAR_13 = FUNC_0(VAR_9);
        if (VAR_13 < 0) {
                if (FUNC_3(VAR_9, "kernel"))
                        VAR_13 = VAR_0;
                else {
                        FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, 0, "Failed to parse IPForward= option, ignoring: %s", VAR_9);
                        return 0;
                }
        }

        *VAR_12 = VAR_13;

        return 0;
}
