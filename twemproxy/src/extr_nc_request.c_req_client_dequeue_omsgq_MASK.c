
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int request; } ;
struct context {int dummy; } ;
struct conn {int omsg_q; int proxy; scalar_t__ client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct msg*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct context *VAR_1, struct conn *VAR_2, struct msg *VAR_3)
{
    FUNC_0(VAR_3->request);
    FUNC_0(VAR_2->client && !VAR_2->proxy);

    FUNC_1(&VAR_2->omsg_q, VAR_3, VAR_0);
}
