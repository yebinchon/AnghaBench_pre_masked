
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(
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

        FUNC_0(VAR_4);
        FUNC_0(VAR_8);
        FUNC_0(VAR_10);

        if (FUNC_2(VAR_10, "CS4"))
                *((int *)VAR_11) = VAR_0;
        else if (FUNC_2(VAR_10, "CS6"))
                *((int *)VAR_11) = VAR_1;
        else
                FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5, 0,
                           "Failed to parse IPServiceType type '%s', ignoring.", VAR_10);

        return 0;
}
