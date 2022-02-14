
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* c; int dht; int net; int announce_ping_array; } ;
struct TYPE_8__ {int tcp_c; } ;
typedef TYPE_2__ Onion_Client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (TYPE_2__*,int) ;

void FUNC_8(Onion_Client *VAR_4)
{
    if (VAR_4 == ((void*)0))
        return;

    FUNC_4(&VAR_4->announce_ping_array);
    FUNC_5(VAR_4, 0);
    FUNC_2(VAR_4->net, VAR_1, ((void*)0), ((void*)0));
    FUNC_2(VAR_4->net, VAR_2, ((void*)0), ((void*)0));
    FUNC_3(VAR_4, VAR_3, ((void*)0), ((void*)0));
    FUNC_0(VAR_4->dht, VAR_0, ((void*)0), ((void*)0));
    FUNC_6(VAR_4->c->tcp_c, ((void*)0), ((void*)0));
    FUNC_7(VAR_4, sizeof(Onion_Client));
    FUNC_1(VAR_4);
}
