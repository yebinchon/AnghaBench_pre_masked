
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_5__ {scalar_t__ status; int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t) ;
 int FUNC_2 (int *,int const*,scalar_t__) ;
 int FUNC_3 (int ,int ,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(const Messenger *VAR_2, int32_t VAR_3, uint8_t VAR_4, const uint8_t *VAR_5,
                                uint32_t VAR_6, uint8_t VAR_7)
{
    if (FUNC_1(VAR_2, VAR_3))
        return 0;

    if (VAR_6 >= VAR_1 || VAR_2->friendlist[VAR_3].status != VAR_0)
        return 0;

    uint8_t VAR_8[VAR_6 + 1];
    VAR_8[0] = VAR_4;

    if (VAR_6 != 0)
        FUNC_2(VAR_8 + 1, VAR_5, VAR_6);

    return FUNC_3(VAR_2->net_crypto, FUNC_0(VAR_2->fr_c,
                             VAR_2->friendlist[VAR_3].friendcon_id), VAR_8, VAR_6 + 1, VAR_7) != -1;
}
