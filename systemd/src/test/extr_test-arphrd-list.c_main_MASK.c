
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_3, const char *VAR_4[]) {
        FUNC_4(VAR_2);

        for (int VAR_5 = 0; VAR_5 <= VAR_0 + 1; VAR_5++) {
                const char *VAR_6;

                VAR_6 = FUNC_1(VAR_5);
                if (VAR_6) {
                        FUNC_3("%i: %s", VAR_5, VAR_6);

                        FUNC_2(FUNC_0(VAR_6) == VAR_5);
                }
        }

        FUNC_2(FUNC_1(VAR_0 + 1) == ((void*)0));
        FUNC_2(FUNC_0("huddlduddl") == -VAR_1);
        FUNC_2(FUNC_0("") == -VAR_1);

        return 0;
}
