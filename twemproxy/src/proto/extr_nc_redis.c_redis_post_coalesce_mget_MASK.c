
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct msg {TYPE_2__* owner; TYPE_1__** frag_seq; int keys; scalar_t__ narg; struct msg* peer; } ;
typedef scalar_t__ rstatus_t ;
struct TYPE_4__ {int err; } ;
struct TYPE_3__ {struct msg* peer; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct msg*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct msg*,struct msg*) ;

__attribute__((used)) static void
FUNC_3(struct msg *VAR_1)
{
    struct msg *VAR_2 = VAR_1->peer;
    struct msg *VAR_3;
    rstatus_t VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_1(VAR_2, "*%d\r\n", VAR_1->narg - 1);
    if (VAR_4 != VAR_0) {




        VAR_2->owner->err = 1;
        return;
    }

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->keys); VAR_5++) {
        VAR_3 = VAR_1->frag_seq[VAR_5]->peer;
        if (VAR_3 == ((void*)0)) {
            VAR_2->owner->err = 1;
            return;
        }
        VAR_4 = FUNC_2(VAR_2, VAR_3);
        if (VAR_4 != VAR_0) {
            VAR_2->owner->err = 1;
            return;
        }
    }
}
