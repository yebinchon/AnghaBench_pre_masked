
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int packet ;
struct TYPE_3__ {int sent_nonce; int mutex; int shared_key; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int const*,scalar_t__,int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int *,int) ;

__attribute__((used)) static int FUNC_7(Net_Crypto *VAR_4, int VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    if (VAR_7 == 0 || VAR_7 + (1 + sizeof(uint16_t) + VAR_2) > VAR_0)
        return -1;

    Crypto_Connection *VAR_8 = FUNC_1(VAR_4, VAR_5);

    if (VAR_8 == 0)
        return -1;

    FUNC_4(&VAR_8->mutex);
    uint8_t VAR_9[1 + sizeof(uint16_t) + VAR_7 + VAR_2];
    VAR_9[0] = VAR_1;
    FUNC_3(VAR_9 + 1, VAR_8->sent_nonce + (VAR_3 - sizeof(uint16_t)), sizeof(uint16_t));
    int VAR_10 = FUNC_0(VAR_8->shared_key, VAR_8->sent_nonce, VAR_6, VAR_7, VAR_9 + 1 + sizeof(uint16_t));

    if (VAR_10 + 1 + sizeof(uint16_t) != sizeof(VAR_9)) {
        FUNC_5(&VAR_8->mutex);
        return -1;
    }

    FUNC_2(VAR_8->sent_nonce);
    FUNC_5(&VAR_8->mutex);

    return FUNC_6(VAR_4, VAR_5, VAR_9, sizeof(VAR_9));
}
