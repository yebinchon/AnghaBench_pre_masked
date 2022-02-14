
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_5__ {int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,size_t) ;

__attribute__((used)) static int FUNC_3(const Messenger *VAR_0, int32_t VAR_1, uint32_t VAR_2)
{
    if (FUNC_2(VAR_0, VAR_1))
        return -1;

    return FUNC_0(VAR_0->net_crypto, FUNC_1(VAR_0->fr_c,
                                VAR_0->friendlist[VAR_1].friendcon_id), VAR_2);
}
