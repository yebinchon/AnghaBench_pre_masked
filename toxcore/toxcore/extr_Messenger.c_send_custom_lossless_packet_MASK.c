
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_5__ {scalar_t__ status; int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t) ;
 int FUNC_2 (int ,int ,scalar_t__ const*,scalar_t__,int) ;

int FUNC_3(const Messenger *VAR_4, int32_t VAR_5, const uint8_t *VAR_6, uint32_t VAR_7)
{
    if (FUNC_1(VAR_4, VAR_5))
        return -1;

    if (VAR_7 == 0 || VAR_7 > VAR_1)
        return -2;

    if (VAR_6[0] < VAR_3)
        return -3;

    if (VAR_6[0] >= (VAR_3 + VAR_2))
        return -3;

    if (VAR_4->friendlist[VAR_5].status != VAR_0)
        return -4;

    if (FUNC_2(VAR_4->net_crypto, FUNC_0(VAR_4->fr_c,
                          VAR_4->friendlist[VAR_5].friendcon_id), VAR_6, VAR_7, 1) == -1) {
        return -5;
    } else {
        return 0;
    }
}
