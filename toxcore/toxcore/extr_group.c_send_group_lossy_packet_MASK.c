
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_3__ {int lossy_message_number; int peer_number; } ;
typedef TYPE_1__ Group_c ;
typedef int Group_Chats ;


 TYPE_1__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int,int*,int,int) ;

int FUNC_4(const Group_Chats *VAR_0, int VAR_1, const uint8_t *VAR_2, uint16_t VAR_3)
{

    Group_c *VAR_4 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_4)
        return -1;

    uint8_t VAR_5[sizeof(uint16_t) * 2 + VAR_3];
    uint16_t VAR_6 = FUNC_1(VAR_4->peer_number);
    FUNC_2(VAR_5, &VAR_6, sizeof(uint16_t));
    uint16_t VAR_7 = FUNC_1(VAR_4->lossy_message_number);
    FUNC_2(VAR_5 + sizeof(uint16_t), &VAR_7, sizeof(uint16_t));
    FUNC_2(VAR_5 + sizeof(uint16_t) * 2, VAR_2, VAR_3);

    if (FUNC_3(VAR_0, VAR_1, VAR_5, sizeof(VAR_5), -1) == 0) {
        return -1;
    }

    ++VAR_4->lossy_message_number;
    return 0;
}
