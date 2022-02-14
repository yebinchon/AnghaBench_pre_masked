
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_DDict ;


 int FUNC_0 (int * const) ;
 int * FUNC_1 (char const* const) ;
 int FUNC_2 (char const*,int * const) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];

    if (VAR_0<3) {
        FUNC_3("wrong arguments\n");
        FUNC_3("usage:\n");
        FUNC_3("%s [FILES] dictionary\n", VAR_2);
        return 1;
    }


    const char* const VAR_3 = VAR_1[VAR_0-1];
    ZSTD_DDict* const VAR_4 = FUNC_1(VAR_3);

    int VAR_5;
    for (VAR_5=1; VAR_5<VAR_0-1; VAR_5++) FUNC_2(VAR_1[VAR_5], VAR_4);

    FUNC_0(VAR_4);
    FUNC_3("All %u files correctly decoded (in memory) \n", VAR_0-2);
    return 0;
}
