
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_gmtoff; } ;
struct timezone {int tz_minuteswest; scalar_t__ tz_dsttime; } ;
struct timeval {int dummy; } ;
struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct timeval const*,struct timezone*) ;

int FUNC_5(int *VAR_1) {
        const struct timeval *VAR_2 = ((void*)0);
        struct timespec VAR_3;
        struct tm VAR_4;
        int VAR_5;
        struct timezone VAR_6;

        FUNC_0(FUNC_1(VAR_0, &VAR_3) == 0);
        FUNC_0(FUNC_2(&VAR_3.tv_sec, &VAR_4));
        VAR_5 = VAR_4.tm_gmtoff / 60;

        VAR_6.tz_minuteswest = -VAR_5;
        VAR_6.tz_dsttime = 0;







        if (FUNC_4(VAR_2, &VAR_6) < 0)
                return FUNC_3();

        if (VAR_1)
                *VAR_1 = VAR_5;
        return 0;
}
