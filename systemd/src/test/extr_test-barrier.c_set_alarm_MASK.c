
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct itimerval {int it_value; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct itimerval*,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(usec_t VAR_1) {
        struct itimerval VAR_2 = { };

        FUNC_2(&VAR_2.it_value, VAR_1);
        FUNC_0(FUNC_1(VAR_0, &VAR_2, ((void*)0)) >= 0);
}
