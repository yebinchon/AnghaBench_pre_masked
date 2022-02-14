
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char**,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 char* FUNC_6 (char*) ;

int FUNC_7(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        char **VAR_11 = VAR_9;
        int VAR_12;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        if (FUNC_3(VAR_8)) {
                *VAR_11 = FUNC_6(*VAR_11);
                return 0;
        }

        if (!FUNC_2(VAR_8)) {
                FUNC_5(VAR_1, VAR_0, VAR_2, VAR_3, 0, "Interface name is not valid or too long, ignoring assignment: %s", VAR_8);
                return 0;
        }

        VAR_12 = FUNC_1(VAR_11, VAR_8);
        if (VAR_12 < 0)
                return FUNC_4();

        return 0;
}
