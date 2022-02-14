
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {size_t crypto_connections_length; TYPE_1__* crypto_connections; } ;
struct TYPE_4__ {scalar_t__ status; int public_key; } ;
typedef TYPE_2__ Net_Crypto ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;

__attribute__((used)) static int FUNC_1(const Net_Crypto *VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->crypto_connections_length; ++VAR_3) {
        if (VAR_1->crypto_connections[VAR_3].status != VAR_0)
            if (FUNC_0(VAR_2, VAR_1->crypto_connections[VAR_3].public_key) == 0)
                return VAR_3;
    }

    return -1;
}
