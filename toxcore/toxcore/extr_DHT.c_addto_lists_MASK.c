
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_24__ {size_t num_friends; scalar_t__ assoc; TYPE_6__* friends_list; int close_clientlist; } ;
struct TYPE_23__ {size_t lock_count; TYPE_3__* callbacks; int public_key; int client_list; } ;
struct TYPE_17__ {int * uint32; } ;
struct TYPE_18__ {int uint32; } ;
struct TYPE_19__ {scalar_t__ family; TYPE_15__ ip6; TYPE_1__ ip4; } ;
struct TYPE_21__ {TYPE_2__ ip; } ;
struct TYPE_22__ {int timestamp; TYPE_4__ ip_port; } ;
struct TYPE_20__ {int number; int data; int (* ip_callback ) (int ,int ,TYPE_4__) ;} ;
typedef TYPE_4__ IP_Port ;
typedef TYPE_5__ IPPTs ;
typedef TYPE_6__ DHT_Friend ;
typedef TYPE_7__ DHT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int const*,TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_15__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_7__*,int const*,TYPE_4__,int ) ;
 int FUNC_3 (int ,int ,int const*,TYPE_4__) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int const*,TYPE_4__,int ) ;
 int FUNC_6 (int ,int ,TYPE_4__) ;
 int FUNC_7 () ;

int FUNC_8(DHT *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6)
{
    uint32_t VAR_7, VAR_8 = 0;


    if ((VAR_5.ip.family == VAR_1) && FUNC_1(VAR_5.ip.ip6)) {
        VAR_5.ip.family = VAR_0;
        VAR_5.ip.ip4.uint32 = VAR_5.ip.ip6.uint32[3];
    }




    if (!FUNC_3(VAR_4->close_clientlist, VAR_2, VAR_6, VAR_5)) {
        if (FUNC_2(VAR_4, VAR_6, VAR_5, 0))
            VAR_8++;
    } else
        VAR_8++;

    DHT_Friend *VAR_9 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4->num_friends; ++VAR_7) {
        if (!FUNC_3(VAR_4->friends_list[VAR_7].client_list,
                                       VAR_3, VAR_6, VAR_5)) {
            if (FUNC_5(VAR_4->friends_list[VAR_7].client_list, VAR_3,
                            VAR_6, VAR_5, VAR_4->friends_list[VAR_7].public_key)) {

                DHT_Friend *VAR_10 = &VAR_4->friends_list[VAR_7];

                if (FUNC_4(VAR_6, VAR_10->public_key) == 0) {
                    VAR_9 = VAR_10;
                }

                VAR_8++;
            }
        } else {
            DHT_Friend *VAR_11 = &VAR_4->friends_list[VAR_7];

            if (FUNC_4(VAR_6, VAR_11->public_key) == 0) {
                VAR_9 = VAR_11;
            }

            VAR_8++;
        }
    }

    if (VAR_9) {
        uint32_t VAR_12;

        for (VAR_12 = 0; VAR_12 < VAR_9->lock_count; ++VAR_12) {
            if (VAR_9->callbacks[VAR_12].ip_callback)
                VAR_9->callbacks[VAR_12].ip_callback(VAR_9->callbacks[VAR_12].data, VAR_9->callbacks[VAR_12].number,
                        VAR_5);
        }
    }
    return VAR_8;
}
