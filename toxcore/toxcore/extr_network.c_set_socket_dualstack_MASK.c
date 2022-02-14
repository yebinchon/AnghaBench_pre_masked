
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int sock_t ;
typedef int ipv6only ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,void*,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,void*,int) ;

int FUNC_2(sock_t VAR_2)
{
    int VAR_3 = 0;
    socklen_t VAR_4 = sizeof(VAR_3);
    int VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, (void *)&VAR_3, &VAR_4);

    if ((VAR_5 == 0) && (VAR_3 == 0))
        return 1;

    VAR_3 = 0;
    return (FUNC_1(VAR_2, VAR_0, VAR_1, (void *)&VAR_3, sizeof(VAR_3)) == 0);
}
