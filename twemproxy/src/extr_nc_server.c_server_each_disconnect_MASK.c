
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int ctx; } ;
struct server {scalar_t__ ns_conn_q; int s_conn_q; struct server_pool* owner; } ;
struct conn {int (* close ) (int ,struct conn*) ;} ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct conn* FUNC_2 (int *) ;
 int FUNC_3 (int ,struct conn*) ;

__attribute__((used)) static rstatus_t
FUNC_4(void *VAR_1, void *VAR_2)
{
    struct server *VAR_3;
    struct server_pool *VAR_4;

    VAR_3 = VAR_1;
    VAR_4 = VAR_3->owner;

    while (!FUNC_1(&VAR_3->s_conn_q)) {
        struct conn *VAR_5;

        FUNC_0(VAR_3->ns_conn_q > 0);

        VAR_5 = FUNC_2(&VAR_3->s_conn_q);
        VAR_5->close(VAR_4->ctx, VAR_5);
    }

    return VAR_0;
}
