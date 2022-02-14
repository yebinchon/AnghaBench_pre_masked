
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int plain ;
struct TYPE_9__ {int num_friends; int last_packet_recv; TYPE_2__* friends_list; TYPE_1__* c; } ;
struct TYPE_8__ {scalar_t__ status; int temp_secret_key; } ;
struct TYPE_7__ {int self_secret_key; } ;
typedef TYPE_3__ Onion_Client ;
typedef int Node_format ;
typedef int IP_Port ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int const*,int *,int *,int*) ;
 int FUNC_1 (TYPE_3__*,int,int *,int ,int ,int *,int) ;
 int FUNC_2 (TYPE_3__*,int,int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int const*,int const*,scalar_t__,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int,int ,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_7, IP_Port VAR_8, const uint8_t *VAR_9, uint16_t VAR_10)
{
    Onion_Client *VAR_11 = VAR_7;

    if (VAR_10 < VAR_2 || VAR_10 > VAR_1)
        return 1;

    uint16_t VAR_12 = VAR_10 - VAR_2;

    uint8_t VAR_13[VAR_6];
    IP_Port VAR_14;
    uint32_t VAR_15;
    uint32_t VAR_16 = FUNC_0(VAR_11, VAR_9 + 1, VAR_13, &VAR_14, &VAR_15);

    if (VAR_16 > VAR_11->num_friends)
        return 1;

    uint8_t VAR_17[1 + VAR_4 + VAR_12];
    int VAR_18 = -1;

    if (VAR_16 == 0) {
        VAR_18 = FUNC_3(VAR_13, VAR_11->c->self_secret_key, VAR_9 + 1 + VAR_3,
                           VAR_9 + 1 + VAR_3 + VAR_5,
                           VAR_10 - (1 + VAR_3 + VAR_5), VAR_17);
    } else {
        if (VAR_11->friends_list[VAR_16 - 1].status == 0)
            return 1;

        VAR_18 = FUNC_3(VAR_13, VAR_11->friends_list[VAR_16 - 1].temp_secret_key,
                           VAR_9 + 1 + VAR_3,
                           VAR_9 + 1 + VAR_3 + VAR_5,
                           VAR_10 - (1 + VAR_3 + VAR_5), VAR_17);
    }

    if ((uint32_t)VAR_18 != sizeof(VAR_17))
        return 1;

    if (FUNC_1(VAR_11, VAR_16, VAR_13, VAR_14, VAR_17[0], VAR_17 + 1, VAR_15) == -1)
        return 1;

    if (VAR_12 != 0) {
        Node_format VAR_19[VAR_0];
        int VAR_20 = FUNC_5(VAR_19, VAR_0, 0, VAR_17 + 1 + VAR_4, VAR_12, 0);

        if (VAR_20 <= 0)
            return 1;

        if (FUNC_2(VAR_11, VAR_16, VAR_19, VAR_20, VAR_8) == -1)
            return 1;
    }


    VAR_11->last_packet_recv = FUNC_4();
    return 0;
}
