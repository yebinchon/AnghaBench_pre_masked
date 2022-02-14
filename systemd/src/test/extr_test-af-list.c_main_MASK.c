
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char** VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;

int FUNC_6(int VAR_2, const char *VAR_3[]) {

        unsigned VAR_4;

        for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
                if (VAR_1[VAR_4]) {
                        FUNC_4(FUNC_5(FUNC_3(VAR_4), VAR_1[VAR_4]));
                        FUNC_4(FUNC_1(VAR_1[VAR_4]) == (int) VAR_4);
                }
        }

        FUNC_4(FUNC_3(FUNC_2()) == ((void*)0));
        FUNC_4(FUNC_3(-1) == ((void*)0));
        FUNC_4(FUNC_1("huddlduddl") == -VAR_0);
        FUNC_4(FUNC_1("") == -VAR_0);

        return 0;
}
