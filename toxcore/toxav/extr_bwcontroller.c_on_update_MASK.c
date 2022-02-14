
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct BWCMessage {int recv; int lost; } ;
struct TYPE_5__ {scalar_t__ lru; } ;
struct TYPE_6__ {int mcb_data; int friend_number; int (* mcb ) (TYPE_2__*,int ,float,int ) ;TYPE_1__ cycle; } ;
typedef TYPE_2__ BWController ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,float,int ) ;

int FUNC_4 (BWController *VAR_1, struct BWCMessage *VAR_2)
{
    FUNC_0 ("%p Got update from peer", VAR_1);


    if (FUNC_1() < VAR_1->cycle.lru + VAR_0) {
        FUNC_0("%p Rejecting extra update", VAR_1);
        return -1;
    }

    VAR_1->cycle.lru = FUNC_1();

    VAR_2->recv = FUNC_2(VAR_2->recv);
    VAR_2->lost = FUNC_2(VAR_2->lost);

    FUNC_0 ("recved: %u lost: %u", VAR_2->recv, VAR_2->lost);

    if (VAR_2->lost && VAR_1->mcb)
        VAR_1->mcb(VAR_1, VAR_1->friend_number,
                 ((float) (VAR_2->lost) / (VAR_2->recv + VAR_2->lost)),
                 VAR_1->mcb_data);

    return 0;
}
