
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int peer_num ;
struct TYPE_14__ {TYPE_2__* m; } ;
struct TYPE_13__ {scalar_t__ status; int peer_number; } ;
struct TYPE_12__ {int name_length; int name; TYPE_1__* net_crypto; } ;
struct TYPE_11__ {int self_public_key; } ;
typedef TYPE_3__ Group_c ;
typedef TYPE_4__ Group_Chats ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int,int const*,int const*,int) ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int,int ,int ) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int const*,int ) ;
 int FUNC_6 (TYPE_4__*,int,int,int const*,int) ;

__attribute__((used)) static int FUNC_7(Group_Chats *VAR_4, int VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    if (VAR_7 == 0)
        return -1;

    Group_c *VAR_8 = FUNC_1(VAR_4, VAR_5);

    if (!VAR_8)
        return -1;

    const uint8_t *VAR_9 = VAR_6;

    while ((unsigned int)(VAR_7 - (VAR_9 - VAR_6)) >= sizeof(uint16_t) + VAR_3 * 2 + 1) {
        uint16_t VAR_10;
        FUNC_3(&VAR_10, VAR_9, sizeof(VAR_10));
        VAR_10 = FUNC_4(VAR_10);
        VAR_9 += sizeof(uint16_t);
        int VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_9, VAR_9 + VAR_3, VAR_10);

        if (VAR_11 == -1)
            return -1;

        if (VAR_8->status == VAR_1
                && FUNC_5(VAR_9, VAR_4->m->net_crypto->self_public_key) == 0) {
            VAR_8->peer_number = VAR_10;
            VAR_8->status = VAR_0;
            FUNC_2(VAR_4, VAR_5, VAR_4->m->name, VAR_4->m->name_length);
        }

        VAR_9 += VAR_3 * 2;
        uint8_t VAR_12 = *VAR_9;
        VAR_9 += 1;

        if (VAR_12 > (VAR_7 - (VAR_9 - VAR_6)) || VAR_12 > VAR_2)
            return -1;

        FUNC_6(VAR_4, VAR_5, VAR_11, VAR_9, VAR_12);
        VAR_9 += VAR_12;
    }

    return 0;
}
