
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (char**,char*,char const) ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char*,char const) ;

__attribute__((used)) static void FUNC_4(sd_device *VAR_0, char **VAR_1) {
        const char *VAR_2;


        if (*VAR_1)
                return;

        if (FUNC_1(VAR_0, &VAR_2) < 0)
                return;

        if (FUNC_2(VAR_2, "nst") && FUNC_3("lma", VAR_2[3]))
                FUNC_0(VAR_1, "nst%c", VAR_2[3]);
        else if (FUNC_2(VAR_2, "st") && FUNC_3("lma", VAR_2[2]))
                FUNC_0(VAR_1, "st%c", VAR_2[2]);
}
