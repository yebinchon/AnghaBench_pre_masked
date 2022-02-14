
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int ip; } ;
struct TYPE_8__ {TYPE_5__ ip_port; } ;
struct TYPE_7__ {TYPE_5__ ip_port; } ;
struct TYPE_10__ {TYPE_2__ assoc4; TYPE_1__ assoc6; int public_key; } ;
struct TYPE_9__ {int net; TYPE_4__* close_clientlist; } ;
typedef TYPE_3__ DHT ;
typedef TYPE_4__ Client_data ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__,int const*,int ) ;

int FUNC_3(const DHT *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        if (FUNC_0(VAR_2, VAR_1->close_clientlist[VAR_5].public_key)) {
            const Client_data *VAR_6 = &VAR_1->close_clientlist[VAR_5];

            if (FUNC_1(&VAR_6->assoc6.ip_port.ip))
                return FUNC_2(VAR_1->net, VAR_6->assoc6.ip_port, VAR_3, VAR_4);
            else if (FUNC_1(&VAR_6->assoc4.ip_port.ip))
                return FUNC_2(VAR_1->net, VAR_6->assoc4.ip_port, VAR_3, VAR_4);
            else
                break;
        }
    }

    return -1;
}
