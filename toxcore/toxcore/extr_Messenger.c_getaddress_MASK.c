
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int nospam ;
typedef int checksum ;
struct TYPE_5__ {int fr; TYPE_1__* net_crypto; } ;
struct TYPE_4__ {int self_public_key; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(const Messenger *VAR_2, uint8_t *VAR_3)
{
    FUNC_2(VAR_3, VAR_2->net_crypto->self_public_key);
    uint32_t VAR_4 = FUNC_1(&(VAR_2->fr));
    FUNC_3(VAR_3 + VAR_1, &VAR_4, sizeof(VAR_4));
    uint16_t VAR_5 = FUNC_0(VAR_3, VAR_0 - sizeof(VAR_5));
    FUNC_3(VAR_3 + VAR_1 + sizeof(VAR_4), &VAR_5, sizeof(VAR_5));
}
