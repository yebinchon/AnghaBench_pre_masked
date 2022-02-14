
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
struct TYPE_9__ {scalar_t__ port; int ip; } ;
struct TYPE_10__ {TYPE_2__ ip_port; int timestamp; } ;
struct TYPE_12__ {TYPE_3__ assoc4; TYPE_3__ assoc6; int public_key; } ;
struct TYPE_11__ {size_t num_friends; TYPE_1__* friends_list; } ;
struct TYPE_8__ {TYPE_5__* client_list; int public_key; } ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ IPPTsPng ;
typedef TYPE_4__ DHT ;
typedef TYPE_5__ Client_data ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const DHT *VAR_2, const uint8_t *VAR_3, IP_Port *VAR_4)
{
    uint32_t VAR_5, VAR_6;

    FUNC_1(&VAR_4->ip);
    VAR_4->port = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2->num_friends; ++VAR_5) {

        if (FUNC_0(VAR_2->friends_list[VAR_5].public_key, VAR_3)) {
            for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
                Client_data *VAR_7 = &VAR_2->friends_list[VAR_5].client_list[VAR_6];

                if (FUNC_0(VAR_7->public_key, VAR_3)) {
                    IPPTsPng *VAR_8 = ((void*)0);
                    uint32_t VAR_9;

                    for (VAR_9 = 0, VAR_8 = &VAR_7->assoc6; VAR_9 < 2; VAR_9++, VAR_8 = &VAR_7->assoc4)
                        if (!FUNC_2(VAR_8->timestamp, VAR_0)) {
                            *VAR_4 = VAR_8->ip_port;
                            return 1;
                        }
                }
            }

            return 0;
        }
    }

    return -1;
}
