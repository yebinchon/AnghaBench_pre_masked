
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_10__ {TYPE_1__* connections; int const* public_key; } ;
struct TYPE_9__ {TYPE_3__* accepted_connection_array; } ;
struct TYPE_8__ {int status; int index; size_t other_id; int const* public_key; } ;
typedef TYPE_2__ TCP_Server ;
typedef TYPE_3__ TCP_Secure_Connection ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (int const*,int const*,int ) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int const*) ;

__attribute__((used)) static int FUNC_5(TCP_Server *VAR_3, uint32_t VAR_4, const uint8_t *VAR_5)
{
    uint32_t VAR_6;
    uint32_t VAR_7 = ~0;
    TCP_Secure_Connection *VAR_8 = &VAR_3->accepted_connection_array[VAR_4];


    if (FUNC_2(VAR_8->public_key, VAR_5) == 0) {
        if (FUNC_4(VAR_8, 0, VAR_5) == -1)
            return -1;

        return 0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        if (VAR_8->connections[VAR_6].status != 0) {
            if (FUNC_2(VAR_5, VAR_8->connections[VAR_6].public_key) == 0) {
                if (FUNC_4(VAR_8, VAR_6 + VAR_1, VAR_5) == -1) {
                    return -1;
                } else {
                    return 0;
                }
            }
        } else if (VAR_7 == (uint32_t)~0) {
            VAR_7 = VAR_6;
        }
    }

    if (VAR_7 == (uint32_t)~0) {
        if (FUNC_4(VAR_8, 0, VAR_5) == -1)
            return -1;

        return 0;
    }

    int VAR_9 = FUNC_4(VAR_8, VAR_7 + VAR_1, VAR_5);

    if (VAR_9 == 0)
        return 0;

    if (VAR_9 == -1)
        return -1;

    VAR_8->connections[VAR_7].status = 1;
    FUNC_1(VAR_8->connections[VAR_7].public_key, VAR_5, VAR_2);
    int VAR_10 = FUNC_0(VAR_3, VAR_5);

    if (VAR_10 != -1) {
        uint32_t VAR_11 = ~0;
        TCP_Secure_Connection *VAR_12 = &VAR_3->accepted_connection_array[VAR_10];

        for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
            if (VAR_12->connections[VAR_6].status == 1
                    && FUNC_2(VAR_12->connections[VAR_6].public_key, VAR_8->public_key) == 0) {
                VAR_11 = VAR_6;
                break;
            }
        }

        if (VAR_11 != (uint32_t)~0) {
            VAR_8->connections[VAR_7].status = 2;
            VAR_8->connections[VAR_7].index = VAR_10;
            VAR_8->connections[VAR_7].other_id = VAR_11;
            VAR_12->connections[VAR_11].status = 2;
            VAR_12->connections[VAR_11].index = VAR_4;
            VAR_12->connections[VAR_11].other_id = VAR_7;

            FUNC_3(VAR_8, VAR_7);
            FUNC_3(VAR_12, VAR_11);
        }
    }

    return 0;
}
