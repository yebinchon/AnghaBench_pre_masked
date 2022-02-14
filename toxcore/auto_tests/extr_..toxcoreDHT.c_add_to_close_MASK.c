
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ port; int ip; } ;
struct TYPE_10__ {scalar_t__ family; } ;
struct TYPE_12__ {TYPE_1__ ip; } ;
struct TYPE_13__ {scalar_t__ ret_timestamp; TYPE_2__ ret_ip_port; int timestamp; TYPE_3__ ip_port; } ;
struct TYPE_15__ {int public_key; TYPE_4__ assoc4; TYPE_4__ assoc6; } ;
struct TYPE_14__ {TYPE_6__* close_clientlist; int self_public_key; } ;
typedef TYPE_3__ IP_Port ;
typedef TYPE_4__ IPPTsPng ;
typedef TYPE_5__ DHT ;
typedef TYPE_6__ Client_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(DHT *VAR_4, const uint8_t *VAR_5, IP_Port VAR_6, _Bool VAR_7)
{
    unsigned int VAR_8;

    unsigned int VAR_9 = FUNC_0(VAR_5, VAR_4->self_public_key);

    if (VAR_9 > VAR_2)
        VAR_9 = VAR_2 - 1;

    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
        Client_data *VAR_10 = &VAR_4->close_clientlist[(VAR_9 * VAR_3) + VAR_8];

        if (FUNC_3(VAR_10->assoc4.timestamp, VAR_1) && FUNC_3(VAR_10->assoc6.timestamp, VAR_1)) {
            if (!VAR_7) {
                IPPTsPng *VAR_11 = ((void*)0);
                IPPTsPng *VAR_12 = ((void*)0);

                if (VAR_6.ip.family == VAR_0) {
                    VAR_11 = &VAR_10->assoc4;
                    VAR_12 = &VAR_10->assoc6;
                } else {
                    VAR_11 = &VAR_10->assoc6;
                    VAR_12 = &VAR_10->assoc4;
                }

                FUNC_1(VAR_10->public_key, VAR_5);
                VAR_11->ip_port = VAR_6;
                VAR_11->timestamp = FUNC_5();

                FUNC_2(&VAR_11->ret_ip_port.ip);
                VAR_11->ret_ip_port.port = 0;
                VAR_11->ret_timestamp = 0;


                FUNC_4(VAR_12, 0, sizeof(*VAR_12));
            }

            return 0;
        }
    }

    return -1;
}
