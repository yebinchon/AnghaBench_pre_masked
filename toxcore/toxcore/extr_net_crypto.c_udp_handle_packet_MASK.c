
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int mutex; void* direct_lastrecv_timev6; void* direct_lastrecv_timev4; } ;
struct TYPE_8__ {scalar_t__ family; } ;
struct TYPE_9__ {TYPE_1__ ip; } ;
typedef int Net_Crypto ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (int *,TYPE_2__) ;
 TYPE_3__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__,scalar_t__ const*,int ) ;
 scalar_t__ FUNC_3 (int *,int,scalar_t__ const*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    if (VAR_7 <= VAR_1 || VAR_7 > VAR_2)
        return 1;

    Net_Crypto *VAR_8 = VAR_4;
    int VAR_9 = FUNC_0(VAR_8, VAR_5);

    if (VAR_9 == -1) {
        if (VAR_6[0] != VAR_3)
            return 1;

        if (FUNC_2(VAR_8, VAR_5, VAR_6, VAR_7) != 0)
            return 1;

        return 0;
    }

    if (FUNC_3(VAR_8, VAR_9, VAR_6, VAR_7, 1) != 0)
        return 1;

    Crypto_Connection *VAR_10 = FUNC_1(VAR_8, VAR_9);

    if (VAR_10 == 0)
        return -1;

    FUNC_4(&VAR_10->mutex);

    if (VAR_5.ip.family == VAR_0) {
        VAR_10->direct_lastrecv_timev4 = FUNC_6();
    } else {
        VAR_10->direct_lastrecv_timev6 = FUNC_6();
    }

    FUNC_5(&VAR_10->mutex);
    return 0;
}
