
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTIL_time_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

UTIL_time_t FUNC_3(void)
{


    UTIL_time_t VAR_2 = VAR_1;
    if (FUNC_2(&VAR_2, VAR_0) != VAR_0) {
        FUNC_1("timefn::timespec_get");
        FUNC_0();
    }
    return VAR_2;
}
