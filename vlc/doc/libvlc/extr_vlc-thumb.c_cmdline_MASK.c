
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char const*,int) ;

__attribute__((used)) static void FUNC_9(int VAR_0, const char **VAR_1, const char **VAR_2,
                    char **VAR_3, char **VAR_4, int *VAR_5)
{
    int VAR_6 = 1;
    size_t VAR_7;

    if (VAR_0 != 3 && VAR_0 != 5)
        FUNC_8(VAR_1[0], VAR_0 != 2 || FUNC_4(VAR_1[1], "-h"));

    *VAR_5 = 0;

    if (VAR_0 == 5) {
        if (FUNC_4(VAR_1[1], "-s"))
            FUNC_8(VAR_1[0], 1);

        VAR_6 += 2;
        *VAR_5 = FUNC_1(VAR_1[2]);
    }

    *VAR_2 = VAR_1[VAR_6++];
    *VAR_3 = FUNC_6(VAR_1[VAR_6++]);
    if (!*VAR_3)
        FUNC_0();

    VAR_7 = FUNC_7(*VAR_3);
    if (VAR_7 >= 4 && !FUNC_4(*VAR_3 + VAR_7 - 4, ".png")) {
        *VAR_4 = *VAR_3;
        return;
    }





    *VAR_4 = FUNC_2(VAR_7 + sizeof ".png");
    if (!*VAR_4)
        FUNC_0();
    FUNC_5(*VAR_4, *VAR_3);
    FUNC_3(*VAR_4, ".png");
}
