
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int done; scalar_t__ request; struct msg* peer; } ;
struct context {int dummy; } ;
struct conn {int (* enqueue_outq ) (struct context*,struct conn*,struct msg*) ;int err; int redis; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msg* FUNC_0 (struct conn*,int,int ) ;
 int FUNC_1 (struct context*,struct conn*,struct msg*) ;

__attribute__((used)) static rstatus_t
FUNC_2(struct context *VAR_3, struct conn *VAR_4, struct msg *VAR_5)
{
    struct msg *VAR_6;

    VAR_6 = FUNC_0(VAR_4, 0, VAR_4->redis);
    if (VAR_6 == ((void*)0)) {
        VAR_4->err = VAR_2;
        return VAR_0;
    }

    VAR_5->peer = VAR_6;
    VAR_6->peer = VAR_5;
    VAR_6->request = 0;

    VAR_5->done = 1;
    VAR_4->enqueue_outq(VAR_3, VAR_4, VAR_5);

    return VAR_1;
}
