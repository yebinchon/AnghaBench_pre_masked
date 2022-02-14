
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTIL_time_t ;
typedef scalar_t__ U64 ;


 int FUNC_0 (char*,unsigned long long) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    UTIL_time_t const VAR_1 = FUNC_2();
    U64 VAR_2 = 0, VAR_3 = 0;
    int VAR_4 = 0;
    do {
        VAR_2 = VAR_3;
        VAR_3 = FUNC_1(VAR_1);
        if(VAR_2 < VAR_3) {
            U64 VAR_5 = VAR_3 - VAR_2;
            if(VAR_0 > VAR_5) {
                VAR_0 = VAR_5;
                VAR_4 = 0;
            } else {
                VAR_4++;
            }
        }
    } while(VAR_4 < 10);
    FUNC_0("Granularity: %llu\n", (unsigned long long)VAR_0);
}
