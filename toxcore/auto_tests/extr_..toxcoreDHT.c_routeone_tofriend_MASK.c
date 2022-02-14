
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
typedef int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_8__ {int ip; } ;
struct TYPE_9__ {int ip_port; int ret_timestamp; TYPE_1__ ret_ip_port; } ;
struct TYPE_12__ {TYPE_2__ assoc6; TYPE_2__ assoc4; } ;
struct TYPE_11__ {int net; TYPE_3__* friends_list; } ;
struct TYPE_10__ {TYPE_5__* client_list; } ;
typedef int IP_Port ;
typedef TYPE_2__ IPPTsPng ;
typedef TYPE_3__ DHT_Friend ;
typedef TYPE_4__ DHT ;
typedef TYPE_5__ Client_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(DHT *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    int VAR_6 = FUNC_0(VAR_2, VAR_3);

    if (VAR_6 == -1)
        return 0;

    DHT_Friend *VAR_7 = &VAR_2->friends_list[VAR_6];
    Client_data *VAR_8;

    IP_Port VAR_9[VAR_1 * 2];
    int VAR_10 = 0;
    uint32_t VAR_11;



    uint32_t VAR_12;

    for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
        for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
            VAR_8 = &VAR_7->client_list[VAR_11];
            IPPTsPng *VAR_13 = ((void*)0);

            if (!VAR_12)
                VAR_13 = &VAR_8->assoc4;
            else
                VAR_13 = &VAR_8->assoc6;


            if (FUNC_1(&VAR_13->ret_ip_port.ip) && !FUNC_2(VAR_13->ret_timestamp, VAR_0)) {
                VAR_9[VAR_10] = VAR_13->ip_port;
                ++VAR_10;
            }
        }

    if (VAR_10 < 1)
        return 0;

    int VAR_14 = FUNC_4(VAR_2->net, VAR_9[FUNC_3() % VAR_10], VAR_4, VAR_5);

    if ((unsigned int)VAR_14 == VAR_5)
        return 1;

    return 0;
}
