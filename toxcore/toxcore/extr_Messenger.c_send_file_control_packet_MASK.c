
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
typedef int int32_t ;
typedef int Messenger ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int const*,int ,int ,int *,int,int ) ;

int FUNC_2(const Messenger *VAR_2, int32_t VAR_3, uint8_t VAR_4, uint8_t VAR_5,
                             uint8_t VAR_6, uint8_t *VAR_7, uint16_t VAR_8)
{
    if ((unsigned int)(1 + 3 + VAR_8) > VAR_0)
        return -1;

    uint8_t VAR_9[3 + VAR_8];

    VAR_9[0] = VAR_4;
    VAR_9[1] = VAR_5;
    VAR_9[2] = VAR_6;

    if (VAR_8) {
        FUNC_0(VAR_9 + 3, VAR_7, VAR_8);
    }

    return FUNC_1(VAR_2, VAR_3, VAR_1, VAR_9, sizeof(VAR_9), 0);
}
