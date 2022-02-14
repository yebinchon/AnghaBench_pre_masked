
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,char const**,int **) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void) {
        const char *VAR_0[] = {"/tmp/foo/bar", "/tmp", ((void*)0)};

        char VAR_1[] = "/tmp/test-search_and_fopen.XXXXXX";
        int VAR_2, VAR_3;
        FILE *VAR_4;

        VAR_2 = FUNC_4(VAR_1);
        FUNC_0(VAR_2 >= 0);
        FUNC_2(VAR_2);

        VAR_3 = FUNC_5(FUNC_1(VAR_1), "r", ((void*)0), VAR_0, &VAR_4);
        FUNC_0(VAR_3 >= 0);
        FUNC_3(VAR_4);

        VAR_3 = FUNC_5(VAR_1, "r", ((void*)0), VAR_0, &VAR_4);
        FUNC_0(VAR_3 >= 0);
        FUNC_3(VAR_4);

        VAR_3 = FUNC_5(FUNC_1(VAR_1), "r", "/", VAR_0, &VAR_4);
        FUNC_0(VAR_3 >= 0);
        FUNC_3(VAR_4);

        VAR_3 = FUNC_5("/a/file/which/does/not/exist/i/guess", "r", ((void*)0), VAR_0, &VAR_4);
        FUNC_0(VAR_3 < 0);
        VAR_3 = FUNC_5("afilewhichdoesnotexistiguess", "r", ((void*)0), VAR_0, &VAR_4);
        FUNC_0(VAR_3 < 0);

        VAR_3 = FUNC_6(VAR_1);
        FUNC_0(VAR_3 == 0);

        VAR_3 = FUNC_5(FUNC_1(VAR_1), "r", ((void*)0), VAR_0, &VAR_4);
        FUNC_0(VAR_3 < 0);
}
