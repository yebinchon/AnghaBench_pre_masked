
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int public_key; } ;
struct TYPE_6__ {unsigned int connections_length; } ;
typedef TYPE_1__ TCP_Connections ;
typedef TYPE_2__ TCP_Connection_to ;


 TYPE_2__* FUNC_0 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static int FUNC_2(TCP_Connections *VAR_0, const uint8_t *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->connections_length; ++VAR_2) {
        TCP_Connection_to *VAR_3 = FUNC_0(VAR_0, VAR_2);

        if (VAR_3) {
            if (FUNC_1(VAR_3->public_key, VAR_1) == 0) {
                return VAR_2;
            }
        }
    }

    return -1;
}
