
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const,char* const) ;
 char* FUNC_1 (char const* const) ;
 int FUNC_2 (char* const) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];

    if (VAR_0!=2) {
        FUNC_3("wrong arguments\n");
        FUNC_3("usage:\n");
        FUNC_3("%s FILE\n", VAR_2);
        return 1;
    }

    const char* const VAR_3 = VAR_1[1];

    char* const VAR_4 = FUNC_1(VAR_3);
    FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_4);
    return 0;
}
