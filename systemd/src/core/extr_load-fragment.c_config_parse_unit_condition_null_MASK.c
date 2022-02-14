
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Condition ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_7 (char const*) ;

int FUNC_8(
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

        Condition **VAR_14 = VAR_12, *VAR_15;
        bool VAR_16, VAR_17;
        int VAR_18;

        FUNC_1(VAR_5);
        FUNC_1(VAR_9);
        FUNC_1(VAR_11);
        FUNC_1(VAR_12);

        FUNC_6(VAR_4, VAR_2, VAR_5, VAR_6, 0, "%s= is deprecated, please do not use.", VAR_9);

        if (FUNC_4(VAR_11)) {

                *VAR_14 = FUNC_2(*VAR_14);
                return 0;
        }

        VAR_16 = VAR_11[0] == '|';
        if (VAR_16)
                VAR_11++;

        VAR_17 = VAR_11[0] == '!';
        if (VAR_17)
                VAR_11++;

        VAR_18 = FUNC_7(VAR_11);
        if (VAR_18 < 0) {
                FUNC_6(VAR_4, VAR_1, VAR_5, VAR_6, VAR_18, "Failed to parse boolean value in condition, ignoring: %s", VAR_11);
                return 0;
        }

        if (!VAR_18)
                VAR_17 = !VAR_17;

        VAR_15 = FUNC_3(VAR_0, ((void*)0), VAR_16, VAR_17);
        if (!VAR_15)
                return FUNC_5();

        FUNC_0(VAR_3, *VAR_14, VAR_15);
        return 0;
}
