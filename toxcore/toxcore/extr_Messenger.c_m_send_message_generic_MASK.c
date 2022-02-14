
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_6__ {scalar_t__ status; scalar_t__ message_id; int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,size_t,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*,scalar_t__,int ) ;

int FUNC_5(Messenger *VAR_4, int32_t VAR_5, uint8_t VAR_6, const uint8_t *VAR_7, uint32_t VAR_8,
                           uint32_t *VAR_9)
{
    if (VAR_6 > VAR_2)
        return -5;

    if (FUNC_2(VAR_4, VAR_5))
        return -1;

    if (VAR_8 >= VAR_1)
        return -2;

    if (VAR_4->friendlist[VAR_5].status != VAR_0)
        return -3;

    uint8_t VAR_10[VAR_8 + 1];
    VAR_10[0] = VAR_6 + VAR_3;

    if (VAR_8 != 0)
        FUNC_3(VAR_10 + 1, VAR_7, VAR_8);

    int64_t VAR_11 = FUNC_4(VAR_4->net_crypto, FUNC_1(VAR_4->fr_c,
                                           VAR_4->friendlist[VAR_5].friendcon_id), VAR_10, VAR_8 + 1, 0);

    if (VAR_11 == -1)
        return -4;

    uint32_t VAR_12 = ++VAR_4->friendlist[VAR_5].message_id;

    FUNC_0(VAR_4, VAR_5, VAR_11, VAR_12);

    if (VAR_9)
        *VAR_9 = VAR_12;

    return 0;
}
