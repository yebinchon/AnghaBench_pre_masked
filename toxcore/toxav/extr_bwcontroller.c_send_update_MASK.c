
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct BWCMessage {void* recv; void* lost; } ;
typedef int p_msg ;
struct TYPE_5__ {scalar_t__ lfu; int lost; int recv; scalar_t__ lsu; } ;
struct TYPE_6__ {TYPE_1__ cycle; int friend_number; int m; } ;
typedef TYPE_2__ BWController ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,int,int) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(BWController *VAR_4)
{
    if (FUNC_2() - VAR_4->cycle.lfu > VAR_1) {

        VAR_4->cycle.lost /= 10;
        VAR_4->cycle.recv /= 10;
        VAR_4->cycle.lfu = FUNC_2();
    } else if (FUNC_2() - VAR_4->cycle.lsu > VAR_2) {

        if (VAR_4->cycle.lost) {
            FUNC_0 ("%p Sent update rcv: %u lost: %u",
                          VAR_4, VAR_4->cycle.recv, VAR_4->cycle.lost);

            uint8_t VAR_5[sizeof(struct BWCMessage) + 1];
            struct BWCMessage *VAR_6 = (struct BWCMessage *)(VAR_5 + 1);

            VAR_5[0] = VAR_0;
            VAR_6->lost = FUNC_3(VAR_4->cycle.lost);
            VAR_6->recv = FUNC_3(VAR_4->cycle.recv);

            if (-1 == FUNC_4(VAR_4->m, VAR_4->friend_number, VAR_5, sizeof(VAR_5)))
                FUNC_1("BWC send failed (len: %d)! std error: %s", sizeof(VAR_5), FUNC_5(VAR_3));
        }

        VAR_4->cycle.lsu = FUNC_2();
    }
}
