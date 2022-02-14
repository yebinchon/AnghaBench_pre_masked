
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {scalar_t__ pos; scalar_t__ mlen; int mhdr; int request; int owner; } ;
struct mbuf {scalar_t__ last; scalar_t__ pos; } ;
struct context {int dummy; } ;
struct conn {int (* recv_done ) (struct context*,struct conn*,struct msg*,struct msg*) ;int redis; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mbuf* FUNC_0 (int *,struct mbuf*,int ) ;
 int FUNC_1 (int *,struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int *,scalar_t__,int *,int *) ;
 struct msg* FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct context*,struct conn*,struct msg*,struct msg*) ;
 int FUNC_7 (struct context*,struct conn*,struct msg*,struct msg*) ;

__attribute__((used)) static rstatus_t
FUNC_8(struct context *VAR_3, struct conn *VAR_4, struct msg *VAR_5)
{
    struct msg *VAR_6;
    struct mbuf *VAR_7, *VAR_8;

    VAR_7 = FUNC_0(&VAR_5->mhdr, VAR_7, VAR_2);
    if (VAR_5->pos == VAR_7->last) {

        VAR_4->recv_done(VAR_3, VAR_4, VAR_5, ((void*)0));
        return VAR_1;
    }







    VAR_8 = FUNC_4(&VAR_5->mhdr, VAR_5->pos, ((void*)0), ((void*)0));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_5(VAR_5->owner, VAR_5->request, VAR_4->redis);
    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_8);
        return VAR_0;
    }
    FUNC_1(&VAR_6->mhdr, VAR_8);
    VAR_6->pos = VAR_8->pos;


    VAR_6->mlen = FUNC_2(VAR_8);
    VAR_5->mlen -= VAR_6->mlen;

    VAR_4->recv_done(VAR_3, VAR_4, VAR_5, VAR_6);

    return VAR_1;
}
