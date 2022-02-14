
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int nospam ;
typedef int int32_t ;
typedef int checksum ;
typedef int check ;
struct TYPE_9__ {TYPE_2__* friendlist; TYPE_1__* net_crypto; } ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ friendrequest_nospam; scalar_t__* info; scalar_t__ info_size; int friendrequest_timeout; } ;
struct TYPE_7__ {int self_public_key; } ;
typedef TYPE_3__ Messenger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int const*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int FUNC_5 (scalar_t__*,int const*,int) ;
 int FUNC_6 (int *) ;

int32_t FUNC_7(Messenger *VAR_12, const uint8_t *VAR_13, const uint8_t *VAR_14, uint16_t VAR_15)
{
    if (VAR_15 > VAR_10)
        return VAR_5;

    uint8_t VAR_16[VAR_11];
    FUNC_2(VAR_16, VAR_13);

    if (!FUNC_6(VAR_16))
        return VAR_1;

    uint16_t VAR_17, VAR_18 = FUNC_0(VAR_13, VAR_8 - sizeof(VAR_18));
    FUNC_5(&VAR_17, VAR_13 + VAR_11 + sizeof(uint32_t), sizeof(VAR_17));

    if (VAR_17 != VAR_18)
        return VAR_1;

    if (VAR_15 < 1)
        return VAR_2;

    if (FUNC_3(VAR_16, VAR_12->net_crypto->self_public_key))
        return VAR_3;

    int32_t VAR_19 = FUNC_1(VAR_12, VAR_16);

    if (VAR_19 != -1) {
        if (VAR_12->friendlist[VAR_19].status >= VAR_9)
            return VAR_0;

        uint32_t VAR_20;
        FUNC_5(&VAR_20, VAR_13 + VAR_11, sizeof(VAR_20));

        if (VAR_12->friendlist[VAR_19].friendrequest_nospam == VAR_20)
            return VAR_0;

        VAR_12->friendlist[VAR_19].friendrequest_nospam = VAR_20;
        return VAR_4;
    }

    int32_t VAR_21 = FUNC_4(VAR_12, VAR_16, VAR_7);

    if (VAR_21 < 0) {
        return VAR_21;
    }

    VAR_12->friendlist[VAR_21].friendrequest_timeout = VAR_6;
    FUNC_5(VAR_12->friendlist[VAR_21].info, VAR_14, VAR_15);
    VAR_12->friendlist[VAR_21].info_size = VAR_15;
    FUNC_5(&(VAR_12->friendlist[VAR_21].friendrequest_nospam), VAR_13 + VAR_11, sizeof(uint32_t));

    return VAR_21;
}
