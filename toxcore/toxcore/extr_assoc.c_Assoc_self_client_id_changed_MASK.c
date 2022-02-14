
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int self_client_id; scalar_t__ self_hash; } ;
typedef TYPE_1__ Assoc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int const*) ;

void FUNC_2(Assoc *VAR_0, const uint8_t *VAR_1)
{
    if (VAR_0 && VAR_1) {
        VAR_0->self_hash = 0;
        FUNC_1(VAR_0->self_client_id, VAR_1);
        FUNC_0(VAR_0);
    }
}
