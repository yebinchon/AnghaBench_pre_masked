
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ShowStatus ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_2, ShowStatus *VAR_3) {
        ShowStatus VAR_4;

        FUNC_0(VAR_3);

        VAR_4 = FUNC_1(VAR_2);
        if (VAR_4 < 0 || VAR_4 == VAR_1)
                return -VAR_0;

        *VAR_3 = VAR_4;
        return 0;
}
