
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {scalar_t__ tz_dsttime; scalar_t__ tz_minuteswest; } ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval const*,struct timezone*) ;

int FUNC_1(void) {
        const struct timeval *VAR_1 = ((void*)0);
        struct timezone VAR_2;

        VAR_2.tz_minuteswest = 0;
        VAR_2.tz_dsttime = 0;






        if (FUNC_0(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        return 0;
}
