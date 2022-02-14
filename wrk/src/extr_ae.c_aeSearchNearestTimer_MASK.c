
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ when_sec; scalar_t__ when_ms; struct TYPE_5__* next; } ;
typedef TYPE_1__ aeTimeEvent ;
struct TYPE_6__ {TYPE_1__* timeEventHead; } ;
typedef TYPE_2__ aeEventLoop ;



__attribute__((used)) static aeTimeEvent *FUNC_0(aeEventLoop *VAR_0)
{
    aeTimeEvent *VAR_1 = VAR_0->timeEventHead;
    aeTimeEvent *VAR_2 = ((void*)0);

    while(VAR_1) {
        if (!VAR_2 || VAR_1->when_sec < VAR_2->when_sec ||
                (VAR_1->when_sec == VAR_2->when_sec &&
                 VAR_1->when_ms < VAR_2->when_ms))
            VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;
    }
    return VAR_2;
}
