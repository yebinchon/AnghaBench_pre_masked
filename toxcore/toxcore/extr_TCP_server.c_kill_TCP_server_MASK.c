
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t num_listening_socks; struct TYPE_5__* accepted_connection_array; struct TYPE_5__* socks_listening; int efd; int accepted_key_list; scalar_t__ onion; } ;
typedef TYPE_1__ TCP_Server ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (scalar_t__,int *,int *) ;

void FUNC_5(TCP_Server *VAR_0)
{
    uint32_t VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_listening_socks; ++VAR_1) {
        FUNC_3(VAR_0->socks_listening[VAR_1]);
    }

    if (VAR_0->onion) {
        FUNC_4(VAR_0->onion, ((void*)0), ((void*)0));
    }

    FUNC_0(&VAR_0->accepted_key_list);





    FUNC_2(VAR_0->socks_listening);
    FUNC_2(VAR_0->accepted_connection_array);
    FUNC_2(VAR_0);
}
