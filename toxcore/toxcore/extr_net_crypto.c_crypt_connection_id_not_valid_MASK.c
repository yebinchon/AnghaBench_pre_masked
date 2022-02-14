
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ crypto_connections_length; TYPE_1__* crypto_connections; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Net_Crypto ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0(const Net_Crypto *VAR_1, int VAR_2)
{
    if ((uint32_t)VAR_2 >= VAR_1->crypto_connections_length)
        return 1;

    if (VAR_1->crypto_connections == ((void*)0))
        return 1;

    if (VAR_1->crypto_connections[VAR_2].status == VAR_0)
        return 1;

    return 0;
}
