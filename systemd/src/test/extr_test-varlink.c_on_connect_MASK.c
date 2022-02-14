
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int VarlinkServer ;
typedef int Varlink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(VarlinkServer *VAR_1, Varlink *VAR_2, void *VAR_3) {
        uid_t VAR_4 = VAR_0;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        FUNC_1(FUNC_3(VAR_2, &VAR_4) >= 0);
        FUNC_1(FUNC_2() == VAR_4);

        return 0;
}
