
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int real_public_key; } ;
struct TYPE_6__ {scalar_t__ num_cons; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

int FUNC_2(Friend_Connections *VAR_0, const uint8_t *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_cons; ++VAR_2) {
        Friend_Conn *VAR_3 = FUNC_0(VAR_0, VAR_2);

        if (VAR_3) {
            if (FUNC_1(VAR_3->real_public_key, VAR_1) == 0)
                return VAR_2;
        }
    }

    return -1;
}
