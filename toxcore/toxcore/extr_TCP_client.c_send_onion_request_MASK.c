
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
typedef int TCP_Client_Connection ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int *,int *,int,int ) ;

int FUNC_2(TCP_Client_Connection *VAR_1, const uint8_t *VAR_2, uint16_t VAR_3)
{
    uint8_t VAR_4[1 + VAR_3];
    VAR_4[0] = VAR_0;
    FUNC_0(VAR_4 + 1, VAR_2, VAR_3);
    return FUNC_1(VAR_1, VAR_4, sizeof(VAR_4), 0);
}
