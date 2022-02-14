
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ hash_t ;
struct TYPE_13__ {scalar_t__ self_hash; int self_client_id; } ;
struct TYPE_12__ {int const ip_port; } ;
typedef int IP_Port ;
typedef TYPE_1__ IPPTs ;
typedef int Client_entry ;
typedef TYPE_2__ Assoc ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int const*,int,TYPE_1__ const*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*,scalar_t__,int **) ;
 int FUNC_2 (TYPE_2__*,int *,int,TYPE_1__ const*,int const*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int const*) ;
 int FUNC_6 (int const*) ;

uint8_t FUNC_7(Assoc *VAR_0, const uint8_t *VAR_1, const IPPTs *VAR_2, const IP_Port *VAR_3, uint8_t VAR_4)
{
    if (!VAR_0 || !VAR_1 || !VAR_2)
        return 0;

    if (!VAR_0->self_hash) {
        FUNC_3(VAR_0);

        if (!VAR_0->self_hash)
            return 0;
    }

    if (!FUNC_6(&VAR_2->ip_port))
        return 0;

    if (VAR_3 && !FUNC_6(VAR_3))
        VAR_3 = ((void*)0);

    hash_t VAR_5 = FUNC_5(VAR_0, VAR_1);

    if (VAR_5 == VAR_0->self_hash)
        if (FUNC_4(VAR_1, VAR_0->self_client_id))
            return 0;
    Client_entry *VAR_6;

    if (!FUNC_1(VAR_0, VAR_1, VAR_5, &VAR_6)) {
        if (FUNC_0(VAR_0, VAR_5, VAR_1, VAR_4, VAR_2, VAR_3))
            return 1;
        else
            return 0;
    } else {
        FUNC_2(VAR_0, VAR_6, VAR_4, VAR_2, VAR_3);
        return 2;
    }
}
