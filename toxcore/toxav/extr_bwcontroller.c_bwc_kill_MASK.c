
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rb; } ;
struct TYPE_6__ {TYPE_1__ rcvpkt; int friend_number; int m; } ;
typedef TYPE_2__ BWController ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(BWController *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_1(VAR_1->m, VAR_1->friend_number, VAR_0, ((void*)0), ((void*)0));

    FUNC_2(VAR_1->rcvpkt.rb);
    FUNC_0(VAR_1);
}
