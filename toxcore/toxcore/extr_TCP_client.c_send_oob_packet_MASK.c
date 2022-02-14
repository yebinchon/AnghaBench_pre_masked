
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int packet ;
typedef int TCP_Client_Connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,scalar_t__) ;
 int FUNC_1 (int *,int *,int,int ) ;

int FUNC_2(TCP_Client_Connection *VAR_3, const uint8_t *VAR_4, const uint8_t *VAR_5, uint16_t VAR_6)
{
    if (VAR_6 == 0 || VAR_6 > VAR_0)
        return -1;

    uint8_t VAR_7[1 + VAR_2 + VAR_6];
    VAR_7[0] = VAR_1;
    FUNC_0(VAR_7 + 1, VAR_4, VAR_2);
    FUNC_0(VAR_7 + 1 + VAR_2, VAR_5, VAR_6);
    return FUNC_1(VAR_3, VAR_7, sizeof(VAR_7), 0);
}
