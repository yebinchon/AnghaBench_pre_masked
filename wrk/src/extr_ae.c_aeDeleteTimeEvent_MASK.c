
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long id; struct TYPE_4__* next; } ;
typedef TYPE_1__ aeTimeEvent ;
struct TYPE_5__ {TYPE_1__* timeEventHead; } ;
typedef TYPE_2__ aeEventLoop ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(aeEventLoop *VAR_3, long long VAR_4)
{
    aeTimeEvent *VAR_5 = VAR_3->timeEventHead;
    while(VAR_5) {
        if (VAR_5->id == VAR_4) {
            VAR_5->id = VAR_0;
            return VAR_2;
        }
        VAR_5 = VAR_5->next;
    }
    return VAR_1;
}
