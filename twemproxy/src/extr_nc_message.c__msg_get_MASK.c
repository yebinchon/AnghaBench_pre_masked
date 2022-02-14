
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {scalar_t__ redis; scalar_t__ swallow; scalar_t__ fdone; scalar_t__ done; scalar_t__ noforward; scalar_t__ noreply; scalar_t__ quit; scalar_t__ request; scalar_t__ ferror; scalar_t__ error; scalar_t__ err; scalar_t__ integer; scalar_t__ rlen; scalar_t__ rnarg; scalar_t__ narg; int * narg_end; int * narg_start; scalar_t__ frag_id; scalar_t__ nfrag_done; scalar_t__ nfrag; int * frag_seq; int * frag_owner; int * end; scalar_t__ vlen; int * keys; int type; int * post_coalesce; int * pre_coalesce; int * reply; int * fragment; int result; int * add_auth; int * parser; int * token; int * pos; scalar_t__ state; scalar_t__ start_ts; scalar_t__ mlen; int mhdr; int tmo_rbe; int * owner; int * peer; scalar_t__ id; } ;
struct keypos {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct msg* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct msg*,int ) ;
 int * FUNC_5 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct msg* FUNC_6 (int) ;
 int FUNC_7 (struct msg*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct msg *
FUNC_9(void)
{
    struct msg *VAR_6;

    if (!FUNC_2(&VAR_2)) {
        FUNC_0(VAR_5 > 0);

        VAR_6 = FUNC_3(&VAR_2);
        VAR_5--;
        FUNC_4(&VAR_2, VAR_6, VAR_3);
        goto done;
    }

    VAR_6 = FUNC_6(sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

done:

    VAR_6->id = ++VAR_4;
    VAR_6->peer = ((void*)0);
    VAR_6->owner = ((void*)0);

    FUNC_8(&VAR_6->tmo_rbe);

    FUNC_1(&VAR_6->mhdr);
    VAR_6->mlen = 0;
    VAR_6->start_ts = 0;

    VAR_6->state = 0;
    VAR_6->pos = ((void*)0);
    VAR_6->token = ((void*)0);

    VAR_6->parser = ((void*)0);
    VAR_6->add_auth = ((void*)0);
    VAR_6->result = VAR_0;

    VAR_6->fragment = ((void*)0);
    VAR_6->reply = ((void*)0);
    VAR_6->pre_coalesce = ((void*)0);
    VAR_6->post_coalesce = ((void*)0);

    VAR_6->type = VAR_1;

    VAR_6->keys = FUNC_5(1, sizeof(struct keypos));
    if (VAR_6->keys == ((void*)0)) {
        FUNC_7(VAR_6);
        return ((void*)0);
    }

    VAR_6->vlen = 0;
    VAR_6->end = ((void*)0);

    VAR_6->frag_owner = ((void*)0);
    VAR_6->frag_seq = ((void*)0);
    VAR_6->nfrag = 0;
    VAR_6->nfrag_done = 0;
    VAR_6->frag_id = 0;

    VAR_6->narg_start = ((void*)0);
    VAR_6->narg_end = ((void*)0);
    VAR_6->narg = 0;
    VAR_6->rnarg = 0;
    VAR_6->rlen = 0;
    VAR_6->integer = 0;

    VAR_6->err = 0;
    VAR_6->error = 0;
    VAR_6->ferror = 0;
    VAR_6->request = 0;
    VAR_6->quit = 0;
    VAR_6->noreply = 0;
    VAR_6->noforward = 0;
    VAR_6->done = 0;
    VAR_6->fdone = 0;
    VAR_6->swallow = 0;
    VAR_6->redis = 0;

    return VAR_6;
}
