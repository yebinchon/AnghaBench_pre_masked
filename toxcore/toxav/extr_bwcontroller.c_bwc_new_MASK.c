
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct BWController_s {int dummy; } ;
struct TYPE_9__ {scalar_t__ rb_s; int rb; } ;
struct TYPE_8__ {int lfu; int lsu; } ;
struct TYPE_10__ {void (* mcb ) (TYPE_3__*,int ,float,void*) ;TYPE_2__ rcvpkt; TYPE_1__ cycle; int friend_number; int * m; void* mcb_data; } ;
typedef int Messenger ;
typedef TYPE_3__ BWController ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ,TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

BWController *FUNC_5(Messenger *VAR_3, uint32_t VAR_4,
                      void (*VAR_5) (BWController *, uint32_t, float, void *),
                      void *VAR_6)
{
    BWController *VAR_7 = FUNC_0(sizeof(struct BWController_s), 1);

    VAR_7->mcb = VAR_5;
    VAR_7->mcb_data = VAR_6;
    VAR_7->m = VAR_3;
    VAR_7->friend_number = VAR_4;
    VAR_7->cycle.lsu = VAR_7->cycle.lfu = FUNC_1();
    VAR_7->rcvpkt.rb = FUNC_3(VAR_0);


    int VAR_8 = 0;

    for (; VAR_8 < VAR_0; VAR_8 ++)
        FUNC_4(VAR_7->rcvpkt.rb, VAR_7->rcvpkt.rb_s + VAR_8);

    FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2, VAR_7);

    return VAR_7;
}
