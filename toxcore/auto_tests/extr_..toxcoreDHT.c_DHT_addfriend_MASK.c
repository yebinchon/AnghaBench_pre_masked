
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
typedef void* int32_t ;
struct TYPE_14__ {int num_friends; TYPE_3__* friends_list; } ;
struct TYPE_11__ {int NATping_id; } ;
struct TYPE_13__ {scalar_t__ lock_count; int to_bootstrap; int public_key; int num_to_bootstrap; TYPE_2__* callbacks; TYPE_1__ nat; } ;
struct TYPE_12__ {void (* ip_callback ) (void*,void*,VAR_0) ;void* number; void* data; } ;
typedef TYPE_3__ DHT_Friend ;
typedef TYPE_4__ DHT ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int const*) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 () ;
 TYPE_3__* FUNC_5 (TYPE_3__*,int) ;

int FUNC_6(DHT *VAR_3, const uint8_t *VAR_4, void (*VAR_5)(void *VAR_6, int32_t VAR_7, VAR_8),
                  void *VAR_9, int32_t VAR_10, uint16_t *VAR_11)
{
    int VAR_12 = FUNC_0(VAR_3, VAR_4);

    uint16_t VAR_13;

    if (VAR_12 != -1) {
        DHT_Friend *VAR_14 = &VAR_3->friends_list[VAR_12];

        if (VAR_14->lock_count == VAR_1)
            return -1;

        VAR_13 = VAR_14->lock_count;
        ++VAR_14->lock_count;
        VAR_14->callbacks[VAR_13].ip_callback = VAR_5;
        VAR_14->callbacks[VAR_13].data = VAR_9;
        VAR_14->callbacks[VAR_13].number = VAR_10;

        if (VAR_11)
            *VAR_11 = VAR_13 + 1;

        return 0;
    }

    DHT_Friend *VAR_15;
    VAR_15 = FUNC_5(VAR_3->friends_list, sizeof(DHT_Friend) * (VAR_3->num_friends + 1));

    if (VAR_15 == ((void*)0))
        return -1;

    VAR_3->friends_list = VAR_15;
    DHT_Friend *VAR_16 = &VAR_3->friends_list[VAR_3->num_friends];
    FUNC_3(VAR_16, 0, sizeof(DHT_Friend));
    FUNC_2(VAR_16->public_key, VAR_4, VAR_2);

    VAR_16->nat.NATping_id = FUNC_4();
    ++VAR_3->num_friends;

    VAR_13 = VAR_16->lock_count;
    ++VAR_16->lock_count;
    VAR_16->callbacks[VAR_13].ip_callback = VAR_5;
    VAR_16->callbacks[VAR_13].data = VAR_9;
    VAR_16->callbacks[VAR_13].number = VAR_10;

    if (VAR_11)
        *VAR_11 = VAR_13 + 1;

    VAR_16->num_to_bootstrap = FUNC_1(VAR_3, VAR_16->public_key, VAR_16->to_bootstrap, 0, 1, 0);

    return 0;
}
