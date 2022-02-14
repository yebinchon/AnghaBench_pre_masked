
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_20__ {size_t num_friends; TYPE_8__* friends_list; TYPE_3__* close_clientlist; } ;
struct TYPE_19__ {TYPE_6__* client_list; } ;
struct TYPE_18__ {int ip_port; int public_key; } ;
struct TYPE_16__ {scalar_t__ timestamp; int ip_port; } ;
struct TYPE_15__ {scalar_t__ timestamp; int ip_port; } ;
struct TYPE_17__ {TYPE_5__ assoc6; int public_key; TYPE_4__ assoc4; } ;
struct TYPE_13__ {scalar_t__ timestamp; int ip_port; } ;
struct TYPE_12__ {scalar_t__ timestamp; int ip_port; } ;
struct TYPE_14__ {TYPE_2__ assoc6; int public_key; TYPE_1__ assoc4; } ;
typedef TYPE_7__ Node_format ;
typedef TYPE_8__ DHT_Friend ;
typedef TYPE_9__ DHT ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_7__*,size_t) ;
 int * FUNC_3 (int *,int ,int ) ;

void FUNC_4(DHT *VAR_7, uint8_t *VAR_8)
{
    FUNC_0(VAR_8, VAR_1);
    VAR_8 += sizeof(uint32_t);

    uint32_t VAR_9, VAR_10, VAR_11;

    uint8_t *VAR_12 = VAR_8;


    VAR_8 = FUNC_3(VAR_8, 0, 0);

    Node_format VAR_13[VAR_5];

    for (VAR_9 = 0, VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
        if (VAR_7->close_clientlist[VAR_10].assoc4.timestamp != 0) {
            FUNC_1(VAR_13[VAR_9].public_key, VAR_7->close_clientlist[VAR_10].public_key, VAR_6);
            VAR_13[VAR_9].ip_port = VAR_7->close_clientlist[VAR_10].assoc4.ip_port;
            ++VAR_9;
        }

        if (VAR_7->close_clientlist[VAR_10].assoc6.timestamp != 0) {
            FUNC_1(VAR_13[VAR_9].public_key, VAR_7->close_clientlist[VAR_10].public_key, VAR_6);
            VAR_13[VAR_9].ip_port = VAR_7->close_clientlist[VAR_10].assoc6.ip_port;
            ++VAR_9;
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_0 && VAR_10 < VAR_7->num_friends; ++VAR_10) {
        DHT_Friend *VAR_14 = &VAR_7->friends_list[VAR_10];

        for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
            if (VAR_14->client_list[VAR_11].assoc4.timestamp != 0) {
                FUNC_1(VAR_13[VAR_9].public_key, VAR_14->client_list[VAR_11].public_key, VAR_6);
                VAR_13[VAR_9].ip_port = VAR_14->client_list[VAR_11].assoc4.ip_port;
                ++VAR_9;
            }

            if (VAR_14->client_list[VAR_11].assoc6.timestamp != 0) {
                FUNC_1(VAR_13[VAR_9].public_key, VAR_14->client_list[VAR_11].public_key, VAR_6);
                VAR_13[VAR_9].ip_port = VAR_14->client_list[VAR_11].assoc6.ip_port;
                ++VAR_9;
            }
        }
    }

    FUNC_3(VAR_12, FUNC_2(VAR_8, sizeof(Node_format) * VAR_9, VAR_13, VAR_9), VAR_2);
}
