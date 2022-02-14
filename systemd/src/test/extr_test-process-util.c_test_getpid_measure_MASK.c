
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,double) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void) {
        unsigned long long VAR_2;
        usec_t VAR_3, VAR_4;

        VAR_3 = FUNC_3(VAR_0);
        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                (void) FUNC_0();
        VAR_4 = FUNC_3(VAR_0) - VAR_3;

        FUNC_2(" glibc getpid(): %lf µs each\n", (double) VAR_4 / VAR_1);

        VAR_3 = FUNC_3(VAR_0);
        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                (void) FUNC_1();
        VAR_4 = FUNC_3(VAR_0) - VAR_3;

        FUNC_2("getpid_cached(): %lf µs each\n", (double) VAR_4 / VAR_1);
}
