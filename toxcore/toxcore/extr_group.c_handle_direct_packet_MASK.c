
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_12__ {int fr_c; } ;
struct TYPE_11__ {TYPE_1__* close; } ;
struct TYPE_10__ {int group_number; int number; int type; int closest; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 int VAR_0 ;




 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int const*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int,int,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(Group_Chats *VAR_1, int VAR_2, const uint8_t *VAR_3, uint16_t VAR_4,
                                 int VAR_5)
{
    if (VAR_4 == 0)
        return;

    switch (VAR_3[0]) {
        case 131: {
            Group_c *VAR_6 = FUNC_0(VAR_1, VAR_2);

            if (!VAR_6)
                return;

            if (!VAR_6->close[VAR_5].closest) {
                VAR_6->close[VAR_5].type = VAR_0;
                FUNC_2(VAR_1->fr_c, VAR_6->close[VAR_5].number);
            }
        }

        break;

        case 130: {
            Group_c *VAR_7 = FUNC_0(VAR_1, VAR_2);

            if (!VAR_7)
                return;

            FUNC_3(VAR_1, VAR_2, VAR_7->close[VAR_5].number, VAR_7->close[VAR_5].group_number);
        }

        break;

        case 129: {
            FUNC_1(VAR_1, VAR_2, VAR_3 + 1, VAR_4 - 1);
        }

        break;

        case 128: {
            FUNC_4(VAR_1, VAR_2, -1, VAR_3 + 1, VAR_4 - 1);
        }

        break;
    }
}
