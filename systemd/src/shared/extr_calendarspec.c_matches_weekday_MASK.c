
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tm*,int) ;

__attribute__((used)) static bool FUNC_1(int VAR_1, const struct tm *VAR_2, bool VAR_3) {
        struct tm VAR_4;
        int VAR_5;

        if (VAR_1 < 0 || VAR_1 >= VAR_0)
                return 1;

        VAR_4 = *VAR_2;
        if (FUNC_0(&VAR_4, VAR_3) < 0)
                return 0;

        VAR_5 = VAR_4.tm_wday == 0 ? 6 : VAR_4.tm_wday - 1;
        return (VAR_1 & (1 << VAR_5));
}
