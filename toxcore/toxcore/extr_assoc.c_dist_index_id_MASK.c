
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int * public_key; } ;
struct TYPE_5__ {TYPE_1__ client; } ;
typedef TYPE_2__ Client_entry ;
typedef int Assoc ;


 TYPE_2__* FUNC_0 (int *,int ) ;

__attribute__((used)) static uint8_t *FUNC_1(Assoc *VAR_0, uint64_t VAR_1)
{
    Client_entry *VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2)
        return VAR_2->client.public_key;

    return ((void*)0);
}
