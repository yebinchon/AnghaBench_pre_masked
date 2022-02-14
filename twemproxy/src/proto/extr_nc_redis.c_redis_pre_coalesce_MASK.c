
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msg {int request; scalar_t__ frag_id; int type; int error; int err; int mhdr; int mlen; scalar_t__ narg_end; scalar_t__ narg_start; int integer; TYPE_1__* frag_owner; struct msg* peer; } ;
struct mbuf {scalar_t__ pos; } ;
struct TYPE_2__ {int integer; int nfrag_done; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 struct mbuf* FUNC_1 (int *) ;
 struct mbuf* FUNC_2 (int *,struct mbuf*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,char*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 int VAR_6 ;

void
FUNC_6(struct msg *VAR_7)
{
    struct msg *VAR_8 = VAR_7->peer;
    struct mbuf *VAR_9;

    FUNC_0(!VAR_7->request);
    FUNC_0(VAR_8->request);

    if (VAR_8->frag_id == 0) {

        return;
    }
    VAR_8->frag_owner->nfrag_done++;

    switch (VAR_7->type) {
    case 130:

        FUNC_0(VAR_8->type == VAR_3);

        VAR_9 = FUNC_1(&VAR_7->mhdr);






        FUNC_0(VAR_9 == FUNC_2(&VAR_7->mhdr, VAR_9, VAR_6));
        FUNC_0(VAR_7->mlen == FUNC_4(VAR_9));

        VAR_7->mlen -= FUNC_4(VAR_9);
        FUNC_5(VAR_9);


        VAR_8->frag_owner->integer += VAR_7->integer;
        break;

    case 129:

        FUNC_0(VAR_8->type == VAR_4);

        VAR_9 = FUNC_1(&VAR_7->mhdr);






        FUNC_0(VAR_7->narg_start == VAR_9->pos);
        FUNC_0(VAR_7->narg_start < VAR_7->narg_end);

        VAR_7->narg_end += VAR_0;
        VAR_7->mlen -= (uint32_t)(VAR_7->narg_end - VAR_7->narg_start);
        VAR_9->pos = VAR_7->narg_end;

        break;

    case 128:
        if (VAR_8->type == VAR_5) {
            VAR_9 = FUNC_1(&VAR_7->mhdr);
            VAR_7->mlen -= FUNC_4(VAR_9);
            FUNC_5(VAR_9);
        }
        break;

    default:





        VAR_9 = FUNC_1(&VAR_7->mhdr);
        FUNC_3(VAR_2, VAR_9->pos, FUNC_4(VAR_9), "rsp fragment "
                    "with unknown type %d", VAR_7->type);
        VAR_8->error = 1;
        VAR_8->err = VAR_1;
        break;
    }
}
