
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct msg {TYPE_2__* owner; TYPE_1__** frag_seq; int keys; scalar_t__ ferror; scalar_t__ error; struct msg* frag_owner; scalar_t__ request; struct msg* peer; } ;
typedef scalar_t__ rstatus_t ;
struct TYPE_4__ {int err; } ;
struct TYPE_3__ {struct msg* peer; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct msg*,struct msg*) ;
 scalar_t__ FUNC_3 (struct msg*,int *,int) ;

void
FUNC_4(struct msg *VAR_1)
{
    struct msg *VAR_2 = VAR_1->peer;
    struct msg *VAR_3;
    uint32_t VAR_4;
    rstatus_t VAR_5;

    FUNC_0(!VAR_2->request);
    FUNC_0(VAR_1->request && (VAR_1->frag_owner == VAR_1));
    if (VAR_1->error || VAR_1->ferror) {
        VAR_2->owner->err = 1;
        return;
    }

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1->keys); VAR_4++) {
        VAR_3 = VAR_1->frag_seq[VAR_4]->peer;
        if (VAR_3 == ((void*)0)) {
            VAR_2->owner->err = 1;
            return;
        }
        VAR_5 = FUNC_2(VAR_2, VAR_3);
        if (VAR_5 != VAR_0) {
            VAR_2->owner->err = 1;
            return;
        }
    }


    VAR_5 = FUNC_3(VAR_2, (uint8_t *)"END\r\n", 5);
    if (VAR_5 != VAR_0) {
        VAR_2->owner->err = 1;
        return;
    }
}
