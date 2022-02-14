
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ status; scalar_t__ packets_left; int packets_sent; int packets_left_requested; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,scalar_t__ const*,scalar_t__,scalar_t__) ;

int64_t FUNC_2(Net_Crypto *VAR_3, int VAR_4, const uint8_t *VAR_5, uint16_t VAR_6,
                          uint8_t VAR_7)
{
    if (VAR_6 == 0)
        return -1;

    if (VAR_5[0] < VAR_1)
        return -1;

    if (VAR_5[0] >= VAR_2)
        return -1;

    Crypto_Connection *VAR_8 = FUNC_0(VAR_3, VAR_4);

    if (VAR_8 == 0)
        return -1;

    if (VAR_8->status != VAR_0)
        return -1;

    if (VAR_7 && VAR_8->packets_left == 0)
        return -1;

    int64_t VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (VAR_9 == -1)
        return -1;

    if (VAR_7) {
        --VAR_8->packets_left;
        --VAR_8->packets_left_requested;
        VAR_8->packets_sent++;
    }

    return VAR_9;
}
