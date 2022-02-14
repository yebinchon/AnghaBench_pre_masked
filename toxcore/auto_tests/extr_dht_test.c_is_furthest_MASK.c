
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int public_key; } ;
typedef TYPE_1__ Client_data ;


 int FUNC_0 (int const*,int const*,int ) ;

uint8_t FUNC_1(const uint8_t *VAR_0, Client_data *VAR_1, uint32_t VAR_2, const uint8_t *VAR_3)
{
    uint32_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
        if (FUNC_0(VAR_0, VAR_3, VAR_1[VAR_4].public_key) == 1)
            return 0;

    return 1;
}
