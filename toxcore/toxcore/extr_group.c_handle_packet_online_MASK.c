
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {int fr_c; } ;
struct TYPE_13__ {int number_joined; TYPE_1__* close; int identifier; } ;
struct TYPE_12__ {scalar_t__ type; int number; scalar_t__ group_number; int closest; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int,int,int ) ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(Group_Chats *VAR_4, int VAR_5, uint8_t *VAR_6, uint16_t VAR_7)
{
    if (VAR_7 != VAR_3)
        return -1;

    int VAR_8 = FUNC_3(VAR_4, VAR_6 + sizeof(uint16_t));
    uint16_t VAR_9;
    FUNC_5(&VAR_9, VAR_6, sizeof(uint16_t));
    VAR_9 = FUNC_6(VAR_9);

    Group_c *VAR_10 = FUNC_2(VAR_4, VAR_8);

    if (!VAR_10)
        return -1;

    int VAR_11 = FUNC_1(VAR_10, VAR_5);

    if (VAR_11 == -1)
        return -1;

    if (VAR_10->close[VAR_11].type == VAR_2) {
        return -1;
    }

    if (FUNC_0(VAR_10) == 0) {
        FUNC_9(VAR_4, VAR_5, VAR_9);
    }

    VAR_10->close[VAR_11].group_number = VAR_9;
    VAR_10->close[VAR_11].type = VAR_2;
    FUNC_7(VAR_4->fr_c, VAR_5, VAR_8, VAR_10->identifier);

    if (VAR_10->number_joined != -1 && FUNC_0(VAR_10) >= VAR_0) {
        int VAR_12 = FUNC_1(VAR_10, VAR_10->number_joined);

        if (VAR_12 == -1)
            return -1;

        if (!VAR_10->close[VAR_12].closest) {
            VAR_10->close[VAR_12].type = VAR_1;
            FUNC_8(VAR_4, VAR_10->close[VAR_12].number, VAR_10->close[VAR_12].group_number);
            FUNC_4(VAR_4->fr_c, VAR_10->close[VAR_12].number);
            VAR_10->number_joined = -1;
        }
    }

    return 0;
}
