
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char const* const,int const) ;

int FUNC_3(int VAR_1, const char** VAR_2)
{
    const char* const VAR_3 = VAR_2[0];

    if (VAR_1!=3) {
        FUNC_1(VAR_0, "wrong arguments\n");
        FUNC_1(VAR_0, "usage:\n");
        FUNC_1(VAR_0, "%s FILE NB_THREADS\n", VAR_3);
        return 1;
    }

    {
        const char* const VAR_4 = VAR_2[1];
        int const VAR_5 = FUNC_0(VAR_2[2]);
        FUNC_2(VAR_4, VAR_5);
    }

    return 0;
}
