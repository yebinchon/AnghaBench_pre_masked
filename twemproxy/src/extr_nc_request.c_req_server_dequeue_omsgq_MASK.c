
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int request; int mlen; } ;
struct context {int dummy; } ;
struct conn {int owner; int omsg_q; int proxy; int client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct msg*,int ) ;
 int FUNC_2 (struct msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct context*,int ,int ) ;
 int FUNC_4 (struct context*,int ,int ,int ) ;

void
FUNC_5(struct context *VAR_3, struct conn *VAR_4, struct msg *VAR_5)
{
    FUNC_0(VAR_5->request);
    FUNC_0(!VAR_4->client && !VAR_4->proxy);

    FUNC_2(VAR_5);

    FUNC_1(&VAR_4->omsg_q, VAR_5, VAR_2);

    FUNC_3(VAR_3, VAR_4->owner, VAR_0);
    FUNC_4(VAR_3, VAR_4->owner, VAR_1, VAR_5->mlen);
}
