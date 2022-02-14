
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int handshake_packet ;
struct TYPE_3__ {int public_key; int sessionpublic_key; int sent_nonce; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int const*,int ,int ,int ,int const*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(Net_Crypto *VAR_1, int VAR_2, const uint8_t *VAR_3,
                                 const uint8_t *VAR_4)
{
    Crypto_Connection *VAR_5 = FUNC_1(VAR_1, VAR_2);

    if (VAR_5 == 0)
        return -1;

    uint8_t VAR_6[VAR_0];

    if (FUNC_0(VAR_1, VAR_6, VAR_3, VAR_5->sent_nonce, VAR_5->sessionpublic_key,
                                VAR_5->public_key, VAR_4) != sizeof(VAR_6))
        return -1;

    if (FUNC_2(VAR_1, VAR_2, VAR_6, sizeof(VAR_6)) != 0)
        return -1;

    FUNC_3(VAR_1, VAR_2);
    return 0;
}
