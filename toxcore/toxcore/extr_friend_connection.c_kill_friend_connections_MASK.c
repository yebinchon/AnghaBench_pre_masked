
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ num_cons; int dht; } ;
typedef TYPE_1__ Friend_Connections ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

void FUNC_3(Friend_Connections *VAR_0)
{
    if (!VAR_0)
        return;

    uint32_t VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_cons; ++VAR_1) {
        FUNC_2(VAR_0, VAR_1);
    }

    FUNC_0(VAR_0->dht);
    FUNC_1(VAR_0);
}
