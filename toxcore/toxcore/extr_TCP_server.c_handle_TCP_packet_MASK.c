
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int response ;
struct TYPE_14__ {size_t* uint32; int * uint64; } ;
struct TYPE_15__ {TYPE_1__ ip6; int family; } ;
struct TYPE_19__ {TYPE_2__ ip; int port; } ;
struct TYPE_18__ {int ping_id; TYPE_3__* connections; int identifier; } ;
struct TYPE_17__ {TYPE_5__* accepted_connection_array; int onion; } ;
struct TYPE_16__ {int status; size_t index; int const other_id; } ;
typedef TYPE_4__ TCP_Server ;
typedef TYPE_5__ TCP_Secure_Connection ;
typedef TYPE_6__ IP_Port ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,size_t,int const*,int const*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,size_t,int const*) ;
 int FUNC_2 (int*,int const*,scalar_t__) ;
 int FUNC_3 (int ,int const*,scalar_t__,TYPE_6__,int const*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(TCP_Server *VAR_6, uint32_t VAR_7, const uint8_t *VAR_8, uint16_t VAR_9)
{
    if (VAR_9 == 0)
        return -1;

    TCP_Secure_Connection *VAR_10 = &VAR_6->accepted_connection_array[VAR_7];

    switch (VAR_8[0]) {
        case 128: {
            if (VAR_9 != 1 + VAR_5)
                return -1;

            return FUNC_1(VAR_6, VAR_7, VAR_8 + 1);
        }

        case 135: {
            if (VAR_9 != 2)
                return -1;

            break;
        }

        case 134: {
            if (VAR_9 != 2)
                return -1;

            return FUNC_4(VAR_6, VAR_10, VAR_8[1] - VAR_1);
        }

        case 130: {
            if (VAR_9 != 1 + sizeof(uint64_t))
                return -1;

            uint8_t VAR_11[1 + sizeof(uint64_t)];
            VAR_11[0] = 129;
            FUNC_2(VAR_11 + 1, VAR_8 + 1, sizeof(uint64_t));
            FUNC_5(VAR_10, VAR_11, sizeof(VAR_11), 1);
            return 0;
        }

        case 129: {
            if (VAR_9 != 1 + sizeof(uint64_t))
                return -1;

            uint64_t VAR_12;
            FUNC_2(&VAR_12, VAR_8 + 1, sizeof(uint64_t));

            if (VAR_12) {
                if (VAR_12 == VAR_10->ping_id) {
                    VAR_10->ping_id = 0;
                }

                return 0;
            } else {
                return -1;
            }
        }

        case 131: {
            if (VAR_9 <= 1 + VAR_5)
                return -1;

            return FUNC_0(VAR_6, VAR_7, VAR_8 + 1, VAR_8 + 1 + VAR_5,
                                       VAR_9 - (1 + VAR_5));
        }

        case 133: {
            if (VAR_6->onion) {
                if (VAR_9 <= 1 + VAR_4 + VAR_2 * 2)
                    return -1;

                IP_Port VAR_13;
                VAR_13.port = 0;
                VAR_13.ip.family = VAR_3;
                VAR_13.ip.ip6.uint32[0] = VAR_7;
                VAR_13.ip.ip6.uint32[1] = 0;
                VAR_13.ip.ip6.uint64[1] = VAR_10->identifier;
                FUNC_3(VAR_6->onion, VAR_8 + 1 + VAR_4, VAR_9 - (1 + VAR_4), VAR_13,
                             VAR_8 + 1);
            }

            return 0;
        }

        case 132: {
            return -1;
        }

        default: {
            if (VAR_8[0] < VAR_1)
                return -1;

            uint8_t VAR_14 = VAR_8[0] - VAR_1;

            if (VAR_14 >= VAR_0)
                return -1;

            if (VAR_10->connections[VAR_14].status == 0)
                return -1;

            if (VAR_10->connections[VAR_14].status != 2)
                return 0;

            uint32_t VAR_15 = VAR_10->connections[VAR_14].index;
            uint8_t VAR_16 = VAR_10->connections[VAR_14].other_id + VAR_1;
            uint8_t VAR_17[VAR_9];
            FUNC_2(VAR_17, VAR_8, VAR_9);
            VAR_17[0] = VAR_16;
            int VAR_18 = FUNC_5(&VAR_6->accepted_connection_array[VAR_15], VAR_17, VAR_9, 0);

            if (VAR_18 == -1)
                return -1;

            return 0;
        }
    }

    return 0;
}
