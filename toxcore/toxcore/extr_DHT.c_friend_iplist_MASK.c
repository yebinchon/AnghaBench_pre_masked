
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_13__ {int ip; } ;
struct TYPE_12__ {int timestamp; TYPE_3__ ret_ip_port; int ret_timestamp; } ;
struct TYPE_11__ {int timestamp; TYPE_3__ ret_ip_port; int ret_timestamp; } ;
struct TYPE_16__ {TYPE_2__ assoc4; TYPE_1__ assoc6; int public_key; } ;
struct TYPE_15__ {size_t num_friends; TYPE_4__* friends_list; } ;
struct TYPE_14__ {int public_key; TYPE_6__* client_list; } ;
typedef TYPE_3__ IP_Port ;
typedef TYPE_4__ DHT_Friend ;
typedef TYPE_5__ DHT ;
typedef TYPE_6__ Client_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_4(const DHT *VAR_2, IP_Port *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 >= VAR_2->num_friends)
        return -1;

    DHT_Friend *VAR_5 = &VAR_2->friends_list[VAR_4];
    Client_data *VAR_6;
    IP_Port VAR_7[VAR_1];
    int VAR_8 = 0;
    IP_Port VAR_9[VAR_1];
    int VAR_10 = 0;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
        VAR_6 = &(VAR_5->client_list[VAR_11]);


        if (FUNC_1(&VAR_6->assoc4.ret_ip_port.ip) && !FUNC_2(VAR_6->assoc4.ret_timestamp, VAR_0)) {
            VAR_7[VAR_8] = VAR_6->assoc4.ret_ip_port;
            ++VAR_8;
        }

        if (FUNC_1(&VAR_6->assoc6.ret_ip_port.ip) && !FUNC_2(VAR_6->assoc6.ret_timestamp, VAR_0)) {
            VAR_9[VAR_10] = VAR_6->assoc6.ret_ip_port;
            ++VAR_10;
        }

        if (FUNC_0(VAR_6->public_key, VAR_5->public_key))
            if (!FUNC_2(VAR_6->assoc6.timestamp, VAR_0) || !FUNC_2(VAR_6->assoc4.timestamp, VAR_0))
                return 0;
    }
    if (VAR_10 >= VAR_8) {
        FUNC_3(VAR_3, VAR_9, VAR_10 * sizeof(IP_Port));
        return VAR_10;
    }

    FUNC_3(VAR_3, VAR_7, VAR_8 * sizeof(IP_Port));
    return VAR_8;


}
