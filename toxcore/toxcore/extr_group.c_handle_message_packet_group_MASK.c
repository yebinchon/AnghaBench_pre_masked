
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int message_number ;
struct TYPE_18__ {int action_callback_userdata; int m; int (* action_callback ) (int ,int,int,int*,int,int ) ;int message_callback_userdata; int (* message_callback ) (int ,int,int,int*,int,int ) ;} ;
struct TYPE_17__ {TYPE_2__* group; TYPE_1__* close; } ;
struct TYPE_16__ {scalar_t__ last_message_number; int last_recv; } ;
struct TYPE_15__ {int group_number; int number; } ;
typedef TYPE_3__ Group_c ;
typedef TYPE_4__ Group_Chats ;



 int VAR_0 ;


 int VAR_1 ;




 int FUNC_0 (TYPE_4__*,int,int const*,int const*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int,int const*,int,int) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int,int,int const*,int) ;
 int FUNC_10 (TYPE_4__*,int,int,int const*,int) ;
 int FUNC_11 (int ,int,int,int*,int,int ) ;
 int FUNC_12 (int ,int,int,int*,int,int ) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(Group_Chats *VAR_3, int VAR_4, const uint8_t *VAR_5, uint16_t VAR_6,
                                        int VAR_7)
{
    if (VAR_6 < sizeof(uint16_t) + sizeof(uint32_t) + 1)
        return;

    Group_c *VAR_8 = FUNC_2(VAR_3, VAR_4);

    if (!VAR_8)
        return;

    uint16_t VAR_9;
    FUNC_4(&VAR_9, VAR_5, sizeof(uint16_t));
    VAR_9 = FUNC_6(VAR_9);

    int VAR_10 = FUNC_3(VAR_8, VAR_9);

    if (VAR_10 == -1) {


        FUNC_8(VAR_3, VAR_8->close[VAR_7].number, VAR_8->close[VAR_7].group_number);
        return;
    }

    uint32_t VAR_11;
    FUNC_4(&VAR_11, VAR_5 + sizeof(uint16_t), sizeof(VAR_11));
    VAR_11 = FUNC_5(VAR_11);

    if (VAR_8->group[VAR_10].last_message_number == 0) {
        VAR_8->group[VAR_10].last_message_number = VAR_11;
    } else if (VAR_11 - VAR_8->group[VAR_10].last_message_number > 64 ||
               VAR_11 == VAR_8->group[VAR_10].last_message_number) {
        return;
    }

    VAR_8->group[VAR_10].last_message_number = VAR_11;

    uint8_t VAR_12 = VAR_5[sizeof(uint16_t) + sizeof(VAR_11)];
    const uint8_t *VAR_13 = VAR_5 + sizeof(uint16_t) + sizeof(VAR_11) + 1;
    uint16_t VAR_14 = VAR_6 - (sizeof(uint16_t) + sizeof(VAR_11) + 1);

    switch (VAR_12) {
        case 131: {
            if (VAR_14 != 0)
                return;

            VAR_8->group[VAR_10].last_recv = FUNC_13();
        }
        break;

        case 132: {
            if (VAR_14 != VAR_1)
                return;

            uint16_t VAR_15;
            FUNC_4(&VAR_15, VAR_13, sizeof(uint16_t));
            VAR_15 = FUNC_6(VAR_15);
            FUNC_0(VAR_3, VAR_4, VAR_13 + sizeof(uint16_t), VAR_13 + sizeof(uint16_t) + VAR_2,
                    VAR_15);
        }
        break;

        case 134: {
            if (VAR_14 != VAR_0)
                return;

            uint16_t VAR_16;
            FUNC_4(&VAR_16, VAR_13, sizeof(uint16_t));
            VAR_16 = FUNC_6(VAR_16);

            if (VAR_9 == VAR_16) {
                FUNC_1(VAR_3, VAR_4, VAR_10);
            } else {
                return;

            }
        }
        break;

        case 133: {
            if (FUNC_9(VAR_3, VAR_4, VAR_10, VAR_13, VAR_14) == -1)
                return;
        }
        break;

        case 130: {
            if (FUNC_10(VAR_3, VAR_4, VAR_10, VAR_13, VAR_14) == -1)
                return;
        }
        break;

        case 128: {
            if (VAR_14 == 0)
                return;

            uint8_t VAR_17[VAR_14 + 1];
            FUNC_4(VAR_17, VAR_13, VAR_14);
            VAR_17[VAR_14] = 0;


            if (VAR_3->message_callback)
                VAR_3->message_callback(VAR_3->m, VAR_4, VAR_10, VAR_17, VAR_14, VAR_3->message_callback_userdata);

            break;
        }

        case 129: {
            if (VAR_14 == 0)
                return;

            uint8_t VAR_18[VAR_14 + 1];
            FUNC_4(VAR_18, VAR_13, VAR_14);
            VAR_18[VAR_14] = 0;


            if (VAR_3->action_callback)
                VAR_3->action_callback(VAR_3->m, VAR_4, VAR_10, VAR_18, VAR_14, VAR_3->action_callback_userdata);

            break;
        }

        default:
            return;
    }

    FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, -1 );
}
