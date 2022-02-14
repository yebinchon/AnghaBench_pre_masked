
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];

    if (VAR_0!=2) {
        FUNC_1("wrong arguments\n");
        FUNC_1("usage:\n");
        FUNC_1("%s FILE\n", VAR_2);
        return 1;
    }

    FUNC_0(VAR_1[1]);

    FUNC_1("%s correctly decoded (in memory). \n", VAR_1[1]);

    return 0;
}
