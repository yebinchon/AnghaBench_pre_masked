
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_8__ {TYPE_2__* friends_list; } ;
struct TYPE_6__ {scalar_t__ NATping_id; int hole_punching; int recvNATping_timestamp; } ;
struct TYPE_7__ {TYPE_1__ nat; } ;
typedef int IP_Port ;
typedef TYPE_2__ DHT_Friend ;
typedef TYPE_3__ DHT ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__ const*) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,scalar_t__ const*,scalar_t__,scalar_t__ const) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void *VAR_2, IP_Port VAR_3, const uint8_t *VAR_4, const uint8_t *VAR_5,
                          uint16_t VAR_6)
{
    if (VAR_6 != sizeof(uint64_t) + 1)
        return 1;

    DHT *VAR_7 = VAR_2;
    uint64_t VAR_8;
    FUNC_1(&VAR_8, VAR_5 + 1, sizeof(uint64_t));

    int VAR_9 = FUNC_0(VAR_7, VAR_4);

    if (VAR_9 == -1)
        return 1;

    DHT_Friend *VAR_10 = &VAR_7->friends_list[VAR_9];

    if (VAR_5[0] == VAR_0) {

        FUNC_3(VAR_7, VAR_4, VAR_8, VAR_1);
        VAR_10->nat.recvNATping_timestamp = FUNC_4();
        return 0;
    } else if (VAR_5[0] == VAR_1) {
        if (VAR_10->nat.NATping_id == VAR_8) {
            VAR_10->nat.NATping_id = FUNC_2();
            VAR_10->nat.hole_punching = 1;
            return 0;
        }
    }

    return 1;
}
