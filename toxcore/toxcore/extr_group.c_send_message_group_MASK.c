
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint32_t ;
typedef int uint16_t ;
typedef int peer_num ;
typedef int packet ;
typedef int message_num ;
struct TYPE_3__ {scalar_t__ status; int message_number; int peer_number; } ;
typedef TYPE_1__ Group_c ;
typedef int Group_Chats ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int const*,int) ;
 unsigned int FUNC_4 (int const*,int,int*,int,int) ;

__attribute__((used)) static unsigned int FUNC_5(const Group_Chats *VAR_2, int VAR_3, uint8_t VAR_4, const uint8_t *VAR_5,
                                       uint16_t VAR_6)
{
    if (VAR_6 > VAR_1)
        return 0;

    Group_c *VAR_7 = FUNC_0(VAR_2, VAR_3);

    if (!VAR_7)
        return 0;

    if (VAR_7->status != VAR_0)
        return 0;

    uint8_t VAR_8[sizeof(uint16_t) + sizeof(uint32_t) + 1 + VAR_6];
    uint16_t VAR_9 = FUNC_2(VAR_7->peer_number);
    FUNC_3(VAR_8, &VAR_9, sizeof(VAR_9));

    ++VAR_7->message_number;

    if (!VAR_7->message_number)
        ++VAR_7->message_number;

    uint32_t VAR_10 = FUNC_1(VAR_7->message_number);
    FUNC_3(VAR_8 + sizeof(uint16_t), &VAR_10, sizeof(VAR_10));

    VAR_8[sizeof(uint16_t) + sizeof(uint32_t)] = VAR_4;

    if (VAR_6)
        FUNC_3(VAR_8 + sizeof(uint16_t) + sizeof(uint32_t) + 1, VAR_5, VAR_6);

    return FUNC_4(VAR_2, VAR_3, VAR_8, sizeof(VAR_8), -1);
}
