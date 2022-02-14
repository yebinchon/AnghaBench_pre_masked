
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msg {int request; scalar_t__ frag_id; int type; int error; int err; int mhdr; int mlen; int * end; TYPE_1__* frag_owner; struct msg* peer; } ;
struct mbuf {int * pos; int * last; } ;
struct TYPE_2__ {int nfrag_done; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 struct mbuf* FUNC_1 (int *) ;
 struct mbuf* FUNC_2 (int *,struct mbuf*,int ) ;
 int FUNC_3 (int ,int *,int ,char*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_2 ;

void
FUNC_7(struct msg *VAR_3)
{
    struct msg *VAR_4 = VAR_3->peer;
    struct mbuf *VAR_5;

    FUNC_0(!VAR_3->request);
    FUNC_0(VAR_4->request);

    if (VAR_4->frag_id == 0) {

        return;
    }

    VAR_4->frag_owner->nfrag_done++;
    switch (VAR_3->type) {

    case 128:
    case 129:






        FUNC_0(VAR_3->end != ((void*)0));

        for (;;) {
            VAR_5 = FUNC_2(&VAR_3->mhdr, VAR_5, VAR_2);
            FUNC_0(VAR_5 != ((void*)0));
            if (VAR_3->end >= VAR_5->pos && VAR_3->end < VAR_5->last) {

                VAR_3->mlen -= (uint32_t)(VAR_5->last - VAR_3->end);
                VAR_5->last = VAR_3->end;
                break;
            }


            VAR_3->mlen -= FUNC_4(VAR_5);
            FUNC_6(&VAR_3->mhdr, VAR_5);
            FUNC_5(VAR_5);
        }

        break;

    default:





        VAR_5 = FUNC_1(&VAR_3->mhdr);
        FUNC_3(VAR_1, VAR_5->pos, FUNC_4(VAR_5), "rsp fragment "
                    "with unknown type %d", VAR_3->type);
        VAR_4->error = 1;
        VAR_4->err = VAR_0;
        break;
    }
}
