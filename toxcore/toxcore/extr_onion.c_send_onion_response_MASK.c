
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int packet ;
typedef int Networking_Core ;
typedef int IP_Port ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int) ;

int FUNC_2(Networking_Core *VAR_3, IP_Port VAR_4, const uint8_t *VAR_5, uint16_t VAR_6, const uint8_t *VAR_7)
{
    if (VAR_6 > VAR_1 || VAR_6 == 0)
        return -1;

    uint8_t VAR_8[1 + VAR_2 + VAR_6];
    VAR_8[0] = VAR_0;
    FUNC_0(VAR_8 + 1, VAR_7, VAR_2);
    FUNC_0(VAR_8 + 1 + VAR_2, VAR_5, VAR_6);

    if ((uint32_t)FUNC_1(VAR_3, VAR_4, VAR_8, sizeof(VAR_8)) != sizeof(VAR_8))
        return -1;

    return 0;
}
