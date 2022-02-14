
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shared_key; int temp_sk; int server_public_key; int temp_pk; int nonce_start; int nonce; } ;
typedef TYPE_1__ DNS_Object ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(DNS_Object *VAR_0)
{
    VAR_0->nonce = VAR_0->nonce_start = FUNC_2();
    FUNC_0(VAR_0->temp_pk, VAR_0->temp_sk);
    FUNC_1(VAR_0->server_public_key, VAR_0->temp_sk, VAR_0->shared_key);
}
