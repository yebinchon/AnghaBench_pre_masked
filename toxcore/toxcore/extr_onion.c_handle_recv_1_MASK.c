
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {scalar_t__ family; } ;
struct TYPE_11__ {TYPE_1__ ip; } ;
struct TYPE_10__ {int (* recv_1_function ) (int ,TYPE_3__,scalar_t__ const*,scalar_t__) ;int net; int callback_object; int secret_symmetric_key; } ;
typedef TYPE_2__ Onion ;
typedef TYPE_3__ IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__*,int,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__,scalar_t__ const*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_3__,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(void *VAR_9, IP_Port VAR_10, const uint8_t *VAR_11, uint16_t VAR_12)
{
    Onion *VAR_13 = VAR_9;

    if (VAR_12 > VAR_4)
        return 1;

    if (VAR_12 <= 1 + VAR_5)
        return 1;

    if (VAR_11[1 + VAR_5] != VAR_2 &&
            VAR_11[1 + VAR_5] != VAR_3) {
        return 1;
    }

    FUNC_0(VAR_13);

    uint8_t VAR_14[VAR_6];
    int VAR_15 = FUNC_1(VAR_13->secret_symmetric_key, VAR_11 + 1, VAR_11 + 1 + VAR_8,
                                     VAR_6 + VAR_7, VAR_14);

    if ((uint32_t)VAR_15 != VAR_6)
        return 1;

    IP_Port VAR_16;

    if (FUNC_2(&VAR_16, VAR_14, VAR_15, 1) == -1)
        return 1;

    uint16_t VAR_17 = VAR_12 - (1 + VAR_5);

    if (VAR_13->recv_1_function && VAR_16.ip.family != VAR_0 && VAR_16.ip.family != VAR_1)
        return VAR_13->recv_1_function(VAR_13->callback_object, VAR_16, VAR_11 + (1 + VAR_5), VAR_17);

    if ((uint32_t)FUNC_3(VAR_13->net, VAR_16, VAR_11 + (1 + VAR_5), VAR_17) != VAR_17)
        return 1;

    return 0;
}
