
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_mon; int tm_mday; } ;


 scalar_t__ FUNC_0 (struct tm*,int) ;

__attribute__((used)) static int FUNC_1(struct tm *VAR_0, bool VAR_1, int VAR_2) {
        struct tm VAR_3 = *VAR_0;

        VAR_3.tm_mon++;
        VAR_3.tm_mday = 1 - VAR_2;

        if (FUNC_0(&VAR_3, VAR_1) < 0 ||
            VAR_3.tm_mon != VAR_0->tm_mon)
                return -1;

        return VAR_3.tm_mday;
}
