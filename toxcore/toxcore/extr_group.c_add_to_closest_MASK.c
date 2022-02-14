
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int const* real_pk; scalar_t__ changed; TYPE_1__* closest_peers; } ;
struct TYPE_4__ {int entry; int const* real_pk; int const* temp_pk; } ;
typedef TYPE_2__ Group_c ;
typedef int Group_Chats ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int*,int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;

__attribute__((used)) static int FUNC_4(Group_Chats *VAR_3, int VAR_4, const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    Group_c *VAR_7 = FUNC_1(VAR_3, VAR_4);

    if (!VAR_7)
        return -1;

    if (FUNC_3(VAR_7->real_pk, VAR_5) == 0)
        return -1;

    unsigned int VAR_8;
    unsigned int VAR_9 = VAR_0;

    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        if (VAR_7->closest_peers[VAR_8].entry && FUNC_3(VAR_5, VAR_7->closest_peers[VAR_8].real_pk) == 0) {
            return 0;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        if (VAR_7->closest_peers[VAR_8].entry == 0) {
            VAR_9 = VAR_8;
            break;
        }
    }

    if (VAR_9 == VAR_0) {
        uint64_t VAR_10 = FUNC_0(VAR_7->real_pk, VAR_5);
        uint64_t VAR_11 = 0;

        for (VAR_8 = 0; VAR_8 < (VAR_0 / 2); ++VAR_8) {
            uint64_t VAR_12;
            VAR_12 = FUNC_0(VAR_7->real_pk, VAR_7->closest_peers[VAR_8].real_pk);

            if (VAR_12 > VAR_10 && VAR_12 > VAR_11) {
                VAR_9 = VAR_8;
                VAR_11 = VAR_12;
            }
        }

        VAR_10 = FUNC_0(VAR_5, VAR_7->real_pk);

        for (VAR_8 = (VAR_0 / 2); VAR_8 < VAR_0; ++VAR_8) {
            uint64_t VAR_13 = FUNC_0(VAR_7->closest_peers[VAR_8].real_pk, VAR_7->real_pk);

            if (VAR_13 > VAR_10 && VAR_13 > VAR_11) {
                VAR_9 = VAR_8;
                VAR_11 = VAR_13;
            }
        }
    }

    if (VAR_9 == VAR_0) {
        return -1;
    }

    uint8_t VAR_14[VAR_2];
    uint8_t VAR_15[VAR_2];
    uint8_t VAR_16 = 0;

    if (VAR_7->closest_peers[VAR_9].entry) {
        FUNC_2(VAR_14, VAR_7->closest_peers[VAR_9].real_pk, VAR_2);
        FUNC_2(VAR_15, VAR_7->closest_peers[VAR_9].temp_pk, VAR_2);
        VAR_16 = 1;
    }

    VAR_7->closest_peers[VAR_9].entry = 1;
    FUNC_2(VAR_7->closest_peers[VAR_9].real_pk, VAR_5, VAR_2);
    FUNC_2(VAR_7->closest_peers[VAR_9].temp_pk, VAR_6, VAR_2);

    if (VAR_16) {
        FUNC_4(VAR_3, VAR_4, VAR_14, VAR_15);
    }

    if (!VAR_7->changed)
        VAR_7->changed = VAR_1;

    return 0;
}
