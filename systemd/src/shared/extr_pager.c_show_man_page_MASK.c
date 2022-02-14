
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char const*,char**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,int *) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(const char *VAR_7, bool VAR_8) {
        const char *VAR_9[4] = { "man", ((void*)0), ((void*)0), ((void*)0) };
        char *VAR_10 = ((void*)0);
        pid_t VAR_11;
        size_t VAR_12;
        int VAR_13;

        VAR_12 = FUNC_4(VAR_7);

        if (VAR_7[VAR_12-1] == ')')
                VAR_10 = FUNC_6(VAR_7, '(');

        if (VAR_10) {
                char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);

                VAR_14 = FUNC_5(VAR_7, VAR_10 - VAR_7);
                VAR_15 = FUNC_5(VAR_10 + 1, VAR_7 + VAR_12 - VAR_10 - 2);

                VAR_9[1] = VAR_15;
                VAR_9[2] = VAR_14;
        } else
                VAR_9[1] = VAR_7;

        VAR_13 = FUNC_3("(man)", VAR_4|VAR_1|(VAR_8 ? VAR_3 : 0)|VAR_5|VAR_2, &VAR_11);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0) {

                FUNC_1(VAR_9[0], (char**) VAR_9);
                FUNC_2(VAR_6, "Failed to execute man: %m");
                FUNC_0(VAR_0);
        }

        return FUNC_7(((void*)0), VAR_11, 0);
}
