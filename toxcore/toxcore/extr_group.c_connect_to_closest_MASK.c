
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
struct TYPE_16__ {int fr_c; } ;
struct TYPE_15__ {scalar_t__ changed; unsigned int numpeers; int identifier; TYPE_3__* closest_peers; TYPE_2__* close; TYPE_1__* group; } ;
struct TYPE_14__ {int temp_pk; int real_pk; int entry; } ;
struct TYPE_13__ {scalar_t__ type; int number; int closest; } ;
struct TYPE_12__ {int temp_pk; int real_pk; } ;
typedef TYPE_4__ Group_c ;
typedef TYPE_5__ Group_Chats ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int,int,int,int) ;
 int FUNC_1 (TYPE_5__*,int,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int*,int*,int ,int ) ;
 TYPE_4__* FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*,int*) ;
 int FUNC_9 (int ,int,int,int ) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(Group_Chats *VAR_7, int VAR_8)
{
    Group_c *VAR_9 = FUNC_4(VAR_7, VAR_8);

    if (!VAR_9)
        return -1;

    if (!VAR_9->changed)
        return 0;

    unsigned int VAR_10;

    if (VAR_9->changed == VAR_3) {
        for (VAR_10 = 0; VAR_10 < VAR_9->numpeers; ++VAR_10) {
            FUNC_1(VAR_7, VAR_8, VAR_9->group[VAR_10].real_pk, VAR_9->group[VAR_10].temp_pk);
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
        if (VAR_9->close[VAR_10].type == VAR_4)
            continue;

        if (!VAR_9->close[VAR_10].closest)
            continue;

        uint8_t VAR_11[VAR_6];
        uint8_t VAR_12[VAR_6];
        FUNC_3(VAR_11, VAR_12, VAR_7->fr_c, VAR_9->close[VAR_10].number);

        if (!FUNC_8(VAR_9, VAR_11)) {
            VAR_9->close[VAR_10].type = VAR_4;
            FUNC_6(VAR_7->fr_c, VAR_9->close[VAR_10].number);
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
        if (!VAR_9->closest_peers[VAR_10].entry)
            continue;

        int VAR_13 = FUNC_5(VAR_7->fr_c, VAR_9->closest_peers[VAR_10].real_pk);

        uint8_t VAR_14 = 1;

        if (VAR_13 == -1) {
            VAR_13 = FUNC_7(VAR_7->fr_c, VAR_9->closest_peers[VAR_10].real_pk);
            VAR_14 = 0;

            if (VAR_13 == -1) {
                continue;
            }

            FUNC_10(VAR_7->fr_c, VAR_13, VAR_9->closest_peers[VAR_10].temp_pk);
        }

        FUNC_0(VAR_7, VAR_13, VAR_8, 1, VAR_14);

        if (FUNC_2(VAR_7->fr_c, VAR_13) == VAR_1) {
            FUNC_9(VAR_7->fr_c, VAR_13, VAR_8, VAR_9->identifier);
        }
    }

    VAR_9->changed = VAR_2;

    return 0;
}
