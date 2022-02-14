
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int self_secret_key; int self_public_key; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int const*,int ) ;

void FUNC_2(Net_Crypto *VAR_1, const uint8_t *VAR_2)
{
    FUNC_1(VAR_1->self_secret_key, VAR_2, VAR_0);
    FUNC_0(VAR_1->self_public_key, VAR_1->self_secret_key);
}
