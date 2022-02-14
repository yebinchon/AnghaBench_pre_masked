
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int dummy; } ;
struct conn {int recv_active; int recv_ready; int client; scalar_t__ proxy; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct context*,struct conn*) ;

rstatus_t
FUNC_2(struct context *VAR_1, struct conn *VAR_2)
{
    rstatus_t VAR_3;

    FUNC_0(VAR_2->proxy && !VAR_2->client);
    FUNC_0(VAR_2->recv_active);

    VAR_2->recv_ready = 1;
    do {
        VAR_3 = FUNC_1(VAR_1, VAR_2);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    } while (VAR_2->recv_ready);

    return VAR_0;
}
