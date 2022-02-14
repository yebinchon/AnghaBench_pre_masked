
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ const* recv_nonce; int shared_key; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__ const*,scalar_t__,scalar_t__*) ;
 TYPE_1__* FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(const Net_Crypto *VAR_4, int VAR_5, uint8_t *VAR_6, const uint8_t *VAR_7,
                              uint16_t VAR_8)
{
    if (VAR_8 <= (1 + sizeof(uint16_t) + VAR_2) || VAR_8 > VAR_1)
        return -1;

    Crypto_Connection *VAR_9 = FUNC_1(VAR_4, VAR_5);

    if (VAR_9 == 0)
        return -1;

    uint8_t VAR_10[VAR_3];
    FUNC_4(VAR_10, VAR_9->recv_nonce, VAR_3);
    uint16_t VAR_11 = FUNC_2(VAR_10);
    uint16_t VAR_12;
    FUNC_4(&VAR_12, VAR_7 + 1, sizeof(uint16_t));
    VAR_12 = FUNC_5(VAR_12);
    uint16_t VAR_13 = VAR_12 - VAR_11;
    FUNC_3(VAR_10, VAR_13);
    int VAR_14 = FUNC_0(VAR_9->shared_key, VAR_10, VAR_7 + 1 + sizeof(uint16_t),
                                     VAR_8 - (1 + sizeof(uint16_t)), VAR_6);

    if ((unsigned int)VAR_14 != VAR_8 - (1 + sizeof(uint16_t) + VAR_2))
        return -1;

    if (VAR_13 > VAR_0 * 2) {
        FUNC_3(VAR_9->recv_nonce, VAR_0);
    }

    return VAR_14;
}
