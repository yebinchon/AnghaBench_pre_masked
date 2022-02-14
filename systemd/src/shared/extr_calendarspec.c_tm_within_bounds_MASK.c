
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tm*) ;
 scalar_t__ FUNC_1 (struct tm*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct tm *VAR_2, bool VAR_3) {
        struct tm VAR_4;
        FUNC_0(VAR_2);






        if (VAR_2->tm_year + 1900 > VAR_1)
                return -VAR_0;

        VAR_4 = *VAR_2;
        if (FUNC_1(&VAR_4, VAR_3) < 0)
                return FUNC_2();


        bool VAR_5 = VAR_4.tm_year == VAR_2->tm_year &&
                    VAR_4.tm_mon == VAR_2->tm_mon &&
                    VAR_4.tm_mday == VAR_2->tm_mday &&
                    VAR_4.tm_hour == VAR_2->tm_hour &&
                    VAR_4.tm_min == VAR_2->tm_min &&
                    VAR_4.tm_sec == VAR_2->tm_sec;
        if (!VAR_5)
                *VAR_2 = VAR_4;
        return VAR_5;
}
