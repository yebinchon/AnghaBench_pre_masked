
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ packets_left; int send_array; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 scalar_t__ FUNC_1 (int *) ;

uint32_t FUNC_2(const Net_Crypto *VAR_1, int VAR_2)
{
    Crypto_Connection *VAR_3 = FUNC_0(VAR_1, VAR_2);

    if (VAR_3 == 0)
        return 0;

    uint32_t VAR_4 = VAR_0 - FUNC_1(&VAR_3->send_array);

    if (VAR_3->packets_left < VAR_4) {
        return VAR_3->packets_left;
    } else {
        return VAR_4;
    }
}
