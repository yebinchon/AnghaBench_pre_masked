
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int * p_socket ;
typedef int SA ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(p_socket VAR_2, SA *VAR_3, socklen_t VAR_4) {
    int VAR_5 = VAR_0;
    FUNC_1(VAR_2);
    if (FUNC_0(*VAR_2, VAR_3, VAR_4) < 0) VAR_5 = VAR_1;
    FUNC_2(VAR_2);
    return VAR_5;
}
