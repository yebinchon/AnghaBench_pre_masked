
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int self_secret_key; int self_public_key; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(const Net_Crypto *VAR_2, uint8_t *VAR_3)
{
    FUNC_0(VAR_3, VAR_2->self_public_key, VAR_0);
    FUNC_0(VAR_3 + VAR_0, VAR_2->self_secret_key, VAR_1);
}
