
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
struct TYPE_18__ {int fr_c; int invite_callback_userdata; int (* invite_callback ) (TYPE_2__*,int ,int const,int const*,int,int ) ;} ;
struct TYPE_17__ {TYPE_1__* close; int identifier; } ;
struct TYPE_16__ {TYPE_4__* group_chat_object; } ;
struct TYPE_15__ {int group_number; int type; } ;
typedef TYPE_2__ Messenger ;
typedef TYPE_3__ Group_c ;
typedef TYPE_4__ Group_Chats ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int,int,int ,int) ;
 int FUNC_1 (TYPE_4__*,int,int*,int*,int) ;
 int VAR_4 ;
 int FUNC_2 (int*,int*,int ,int) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int const*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_4__*,int,int,int*,int*) ;
 int FUNC_8 (int*,int const*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int const*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int const,int const*,int,int ) ;

__attribute__((used)) static void FUNC_13(Messenger *VAR_5, uint32_t VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    Group_Chats *VAR_9 = VAR_5->group_chat_object;

    if (VAR_8 <= 1)
        return;

    const uint8_t *VAR_10 = VAR_7 + 1;
    uint16_t VAR_11 = VAR_8 - 1;

    switch (VAR_7[0]) {
        case 129: {
            if (VAR_8 != VAR_2)
                return;

            int VAR_12 = FUNC_4(VAR_9, VAR_7 + 1 + sizeof(uint16_t));

            if (VAR_12 == -1) {
                if (VAR_9->invite_callback)
                    VAR_9->invite_callback(VAR_5, VAR_6, *(VAR_10 + sizeof(uint16_t)), VAR_10, VAR_11,
                                         VAR_9->invite_callback_userdata);

                return;
            }

            break;
        }

        case 128: {
            if (VAR_8 != VAR_3)
                return;

            uint16_t VAR_13, VAR_14;
            FUNC_8(&VAR_14, VAR_7 + 1 + sizeof(uint16_t), sizeof(uint16_t));
            VAR_14 = FUNC_9(VAR_14);

            Group_c *VAR_15 = FUNC_3(VAR_9, VAR_14);

            if (!VAR_15)
                return;

            if (FUNC_11(VAR_7 + 1 + sizeof(uint16_t) * 2, VAR_15->identifier, VAR_1) != 0)
                return;

            uint16_t VAR_16 = FUNC_10();


            unsigned int VAR_17 = 0;

            while (FUNC_5(VAR_15, VAR_16) != -1) {
                VAR_16 = FUNC_10();
                ++VAR_17;

                if (VAR_17 > 32)
                    return;
            }

            FUNC_8(&VAR_13, VAR_7 + 1, sizeof(uint16_t));
            VAR_13 = FUNC_9(VAR_13);

            int VAR_18 = FUNC_6(VAR_5, VAR_6);
            uint8_t VAR_19[VAR_4], VAR_20[VAR_4];
            FUNC_2(VAR_19, VAR_20, VAR_9->fr_c, VAR_18);

            FUNC_1(VAR_9, VAR_14, VAR_19, VAR_20, VAR_16);
            int VAR_21 = FUNC_0(VAR_9, VAR_18, VAR_14, 0, 1);

            if (VAR_21 != -1) {
                VAR_15->close[VAR_21].group_number = VAR_13;
                VAR_15->close[VAR_21].type = VAR_0;
            }

            FUNC_7(VAR_9, VAR_14, VAR_16, VAR_19, VAR_20);
            break;
        }

        default:
            return;
    }
}
