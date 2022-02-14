
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sa_family_t ;
struct TYPE_16__ {int self_public_key; TYPE_1__* close_clientlist; } ;
struct TYPE_13__ {scalar_t__ send_nodes_ok; int send_nodes_timestamp; int * send_nodes_pingedid; } ;
struct TYPE_15__ {TYPE_2__ hardening; int ip_port; int timestamp; } ;
struct TYPE_14__ {int * public_key; int ip_port; } ;
struct TYPE_12__ {TYPE_4__ assoc6; TYPE_4__ assoc4; int * public_key; } ;
typedef TYPE_3__ Node_format ;
typedef TYPE_4__ IPPTsPng ;
typedef TYPE_5__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 TYPE_3__ FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_6 () ;

void FUNC_7(DHT *VAR_7)
{
    uint32_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_5 * 2; ++VAR_8) {
        IPPTsPng *VAR_9;
        sa_family_t VAR_10;
        uint8_t *VAR_11 = VAR_7->close_clientlist[VAR_8 / 2].public_key;

        if (VAR_8 % 2 == 0) {
            VAR_9 = &VAR_7->close_clientlist[VAR_8 / 2].assoc4;
            VAR_10 = VAR_0;
        } else {
            VAR_9 = &VAR_7->close_clientlist[VAR_8 / 2].assoc6;
            VAR_10 = VAR_1;
        }

        if (FUNC_2(VAR_9->timestamp, VAR_2))
            continue;

        if (VAR_9->hardening.send_nodes_ok == 0) {
            if (FUNC_2(VAR_9->hardening.send_nodes_timestamp, VAR_3)) {
                Node_format VAR_12 = FUNC_4(VAR_7, VAR_10);

                if (!FUNC_1(&VAR_12.ip_port))
                    continue;

                if (FUNC_0(VAR_11, VAR_12.public_key))
                    continue;

                Node_format VAR_13;
                VAR_13.ip_port = VAR_9->ip_port;
                FUNC_3(VAR_13.public_key, VAR_11, VAR_6);


                if (FUNC_5(VAR_7, &VAR_12, &VAR_13, VAR_7->self_public_key) > 0) {
                    FUNC_3(VAR_9->hardening.send_nodes_pingedid, VAR_12.public_key, VAR_6);
                    VAR_9->hardening.send_nodes_timestamp = FUNC_6();
                }
            }
        } else {
            if (FUNC_2(VAR_9->hardening.send_nodes_timestamp, VAR_4)) {
                VAR_9->hardening.send_nodes_ok = 0;
            }
        }


    }
}
