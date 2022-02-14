
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,int *) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,char*) ;

int FUNC_6(int VAR_1, char *VAR_2[]) {
        char *VAR_3;

        FUNC_0(VAR_3 = FUNC_3("@@@foobar@xyz@HALLO@foobar@test@@testtest@TEST@...@@@", VAR_0, ((void*)0)));
        FUNC_2(VAR_3);
        FUNC_0(FUNC_4(VAR_3, "@@@foobar@xyz<<<HALLO>>>foobar@test@@testtest<<<TEST>>>...@@@"));
        FUNC_1(VAR_3);

        FUNC_0(VAR_3 = FUNC_5("XYZFFFFXYZFFFFXYZ", "XYZ", "ABC"));
        FUNC_2(VAR_3);
        FUNC_0(FUNC_4(VAR_3, "ABCFFFFABCFFFFABC"));
        FUNC_1(VAR_3);

        return 0;
}
