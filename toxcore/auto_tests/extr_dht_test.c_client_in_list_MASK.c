
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int public_key; } ;
typedef TYPE_1__ Client_data ;


 scalar_t__ FUNC_0 (int const*,int ) ;

int FUNC_1(Client_data *VAR_0, uint32_t VAR_1, const uint8_t *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < (int)VAR_1; ++VAR_3)
        if (FUNC_0(VAR_2, VAR_0[VAR_3].public_key))
            return VAR_3;

    return -1;
}
