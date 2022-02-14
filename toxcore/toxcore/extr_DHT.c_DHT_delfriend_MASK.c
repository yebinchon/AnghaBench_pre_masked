
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_13__ {int num_friends; TYPE_2__* friends_list; } ;
struct TYPE_12__ {TYPE_1__* callbacks; scalar_t__ lock_count; } ;
struct TYPE_11__ {scalar_t__ number; int * data; int * ip_callback; } ;
typedef TYPE_2__ DHT_Friend ;
typedef TYPE_3__ DHT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(DHT *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0, VAR_1);

    if (VAR_3 == -1) {
        return -1;
    }

    DHT_Friend *VAR_4 = &VAR_0->friends_list[VAR_3];
    --VAR_4->lock_count;

    if (VAR_4->lock_count && VAR_2) {
        --VAR_2;
        VAR_4->callbacks[VAR_2].ip_callback = ((void*)0);
        VAR_4->callbacks[VAR_2].data = ((void*)0);
        VAR_4->callbacks[VAR_2].number = 0;
        return 0;
    }

    DHT_Friend *VAR_5;

    --VAR_0->num_friends;

    if (VAR_0->num_friends != VAR_3) {
        FUNC_2( &VAR_0->friends_list[VAR_3],
                &VAR_0->friends_list[VAR_0->num_friends],
                sizeof(DHT_Friend) );
    }

    if (VAR_0->num_friends == 0) {
        FUNC_0(VAR_0->friends_list);
        VAR_0->friends_list = ((void*)0);
        return 0;
    }

    VAR_5 = FUNC_3(VAR_0->friends_list, sizeof(DHT_Friend) * (VAR_0->num_friends));

    if (VAR_5 == ((void*)0))
        return -1;

    VAR_0->friends_list = VAR_5;
    return 0;
}
