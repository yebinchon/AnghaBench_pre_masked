
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int plain ;
struct TYPE_3__ {int temp_secret_key; int shared_key; int recv_nonce; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,int const*,int,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(TCP_Client_Connection *VAR_4, const uint8_t *VAR_5)
{
    uint8_t VAR_6[VAR_2 + VAR_1];
    int VAR_7 = FUNC_0(VAR_4->shared_key, VAR_5, VAR_5 + VAR_1,
                                     VAR_0 - VAR_1, VAR_6);

    if (VAR_7 != sizeof(VAR_6))
        return -1;

    FUNC_2(VAR_4->recv_nonce, VAR_6 + VAR_2, VAR_1);
    FUNC_1(VAR_6, VAR_4->temp_secret_key, VAR_4->shared_key);
    FUNC_3(VAR_4->temp_secret_key, VAR_3);
    return 0;
}
