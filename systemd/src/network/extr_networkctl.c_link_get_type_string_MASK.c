
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 char* FUNC_0 (unsigned short) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(unsigned short VAR_0, sd_device *VAR_1) {
        const char *VAR_2, *VAR_3;
        char *VAR_4;

        if (VAR_1 &&
            FUNC_3(VAR_1, &VAR_3) >= 0 &&
            !FUNC_2(VAR_3))
                return FUNC_4(VAR_3);

        VAR_2 = FUNC_0(VAR_0);
        if (!VAR_2)
                return ((void*)0);

        VAR_4 = FUNC_4(VAR_2);
        if (!VAR_4)
                return ((void*)0);

        FUNC_1(VAR_4);
        return VAR_4;
}
