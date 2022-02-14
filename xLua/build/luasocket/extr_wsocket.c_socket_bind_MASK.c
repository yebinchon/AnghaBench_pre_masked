
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int * p_socket ;
typedef int SA ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(p_socket VAR_1, SA *VAR_2, socklen_t VAR_3) {
    int VAR_4 = VAR_0;
    FUNC_2(VAR_1);
    if (FUNC_1(*VAR_1, VAR_2, VAR_3) < 0) VAR_4 = FUNC_0();
    FUNC_3(VAR_1);
    return VAR_4;
}
