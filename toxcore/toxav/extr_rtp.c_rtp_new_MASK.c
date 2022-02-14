
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int payload_type; int (* mcb ) (void*,struct RTPMessage*) ;void* cs; int * bwc; int friend_number; void* m; int ssrc; } ;
typedef TYPE_1__ RTPSession ;
typedef void Messenger ;
typedef int BWController ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

RTPSession *FUNC_6 (int VAR_0, Messenger *VAR_1, uint32_t VAR_2,
                     BWController *VAR_3, void *VAR_4,
                     int (*VAR_5) (void *, struct RTPMessage *))
{
    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
    FUNC_1(VAR_1);

    RTPSession *VAR_6 = FUNC_2(1, sizeof(RTPSession));

    if (!VAR_6) {
        FUNC_0("Alloc failed! Program might misbehave!");
        return ((void*)0);
    }

    VAR_6->ssrc = FUNC_4();
    VAR_6->payload_type = VAR_0;

    VAR_6->m = VAR_1;
    VAR_6->friend_number = VAR_2;



    VAR_6->bwc = VAR_3;
    VAR_6->cs = VAR_4;
    VAR_6->mcb = VAR_5;

    if (-1 == FUNC_5(VAR_6)) {
        FUNC_0("Failed to start rtp receiving mode");
        FUNC_3(VAR_6);
        return ((void*)0);
    }

    return VAR_6;
}
