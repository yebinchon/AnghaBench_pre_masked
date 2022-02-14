
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct context {int dummy; } ;
struct conn {int recv_ready; struct msg* (* recv_next ) (struct context*,struct conn*,int) ;int recv_active; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct context*,struct conn*,struct msg*) ;
 struct msg* FUNC_2 (struct context*,struct conn*,int) ;

rstatus_t
FUNC_3(struct context *VAR_1, struct conn *VAR_2)
{
    rstatus_t VAR_3;
    struct msg *VAR_4;

    FUNC_0(VAR_2->recv_active);

    VAR_2->recv_ready = 1;
    do {
        VAR_4 = VAR_2->recv_next(VAR_1, VAR_2, 1);
        if (VAR_4 == ((void*)0)) {
            return VAR_0;
        }

        VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    } while (VAR_2->recv_ready);

    return VAR_0;
}
