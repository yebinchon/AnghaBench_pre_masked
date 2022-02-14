
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_8__ {size_t* uint32; scalar_t__* uint64; } ;
struct TYPE_9__ {TYPE_1__ ip6; } ;
struct TYPE_12__ {TYPE_2__ ip; } ;
struct TYPE_11__ {scalar_t__ identifier; } ;
struct TYPE_10__ {size_t size_accepted_connections; TYPE_4__* accepted_connection_array; } ;
typedef TYPE_3__ TCP_Server ;
typedef TYPE_4__ TCP_Secure_Connection ;
typedef TYPE_5__ IP_Port ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (TYPE_4__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, IP_Port VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    TCP_Server *VAR_5 = VAR_1;
    uint32_t VAR_6 = VAR_2.ip.ip6.uint32[0];

    if (VAR_6 >= VAR_5->size_accepted_connections)
        return 1;

    TCP_Secure_Connection *VAR_7 = &VAR_5->accepted_connection_array[VAR_6];

    if (VAR_7->identifier != VAR_2.ip.ip6.uint64[1])
        return 1;

    uint8_t VAR_8[1 + VAR_4];
    FUNC_0(VAR_8 + 1, VAR_3, VAR_4);
    VAR_8[0] = VAR_0;

    if (FUNC_1(VAR_7, VAR_8, sizeof(VAR_8), 0) != 1)
        return 1;

    return 0;
}
