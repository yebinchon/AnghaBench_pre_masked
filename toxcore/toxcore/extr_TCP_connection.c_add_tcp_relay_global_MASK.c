
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int TCP_Connections ;
typedef int IP_Port ;


 int FUNC_0 (int *,int ,int const*) ;
 int FUNC_1 (int *,int const*) ;

int FUNC_2(TCP_Connections *VAR_0, IP_Port VAR_1, const uint8_t *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0, VAR_2);

    if (VAR_3 != -1)
        return -1;

    if (FUNC_0(VAR_0, VAR_1, VAR_2) == -1)
        return -1;

    return 0;
}
