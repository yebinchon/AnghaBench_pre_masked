
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const**,char**,int *,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_5 (char***,char*) ;
 char** FUNC_6 (char**) ;

int FUNC_7(
                const char *VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                unsigned VAR_8,
                const char *VAR_9,
                int VAR_10,
                const char *VAR_11,
                void *VAR_12,
                void *VAR_13) {

        char ***VAR_14 = VAR_12;
        int VAR_15;

        FUNC_0(VAR_5);
        FUNC_0(VAR_9);
        FUNC_0(VAR_11);
        FUNC_0(VAR_12);

        if (FUNC_2(VAR_11)) {
                *VAR_14 = FUNC_6(*VAR_14);
                return 0;
        }

        for (;;) {
                char *VAR_16 = ((void*)0);

                VAR_15 = FUNC_1(&VAR_11, &VAR_16, ((void*)0), VAR_2|VAR_1);
                if (VAR_15 == 0)
                        break;
                if (VAR_15 == -VAR_0)
                        return FUNC_3();
                if (VAR_15 < 0) {
                        FUNC_4(VAR_4, VAR_3, VAR_5, VAR_6, VAR_15, "Invalid syntax, ignoring: %s", VAR_11);
                        break;
                }

                VAR_15 = FUNC_5(VAR_14, VAR_16);
                if (VAR_15 < 0)
                        return FUNC_3();
        }

        return 0;
}
