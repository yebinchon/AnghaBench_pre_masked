
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* dht; } ;
typedef TYPE_2__ Tox ;
struct TYPE_5__ {int self_public_key; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(const Tox *VAR_1, uint8_t *VAR_2)
{
    if (VAR_2) {
        const Messenger *VAR_3 = VAR_1;
        FUNC_0(VAR_2 , VAR_3->dht->self_public_key, VAR_0);
    }
}
