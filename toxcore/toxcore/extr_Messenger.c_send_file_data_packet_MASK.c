
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_5__ {int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int ,int ,int *,int,int) ;

__attribute__((used)) static int64_t FUNC_4(const Messenger *VAR_1, int32_t VAR_2, uint8_t VAR_3, const uint8_t *VAR_4,
                                     uint16_t VAR_5)
{
    if (FUNC_1(VAR_1, VAR_2))
        return -1;

    uint8_t VAR_6[2 + VAR_5];
    VAR_6[0] = VAR_0;
    VAR_6[1] = VAR_3;

    if (VAR_5) {
        FUNC_2(VAR_6 + 2, VAR_4, VAR_5);
    }

    return FUNC_3(VAR_1->net_crypto, FUNC_0(VAR_1->fr_c,
                             VAR_1->friendlist[VAR_2].friendcon_id), VAR_6, sizeof(VAR_6), 1);
}
