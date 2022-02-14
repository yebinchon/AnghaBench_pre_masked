
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {scalar_t__ server_connections; int redis; } ;
struct server {scalar_t__ ns_conn_q; int s_conn_q; struct server_pool* owner; } ;
struct conn {int proxy; int client; } ;


 int FUNC_0 (int) ;
 struct conn* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct conn*,int ) ;
 int FUNC_3 (int *,struct conn*,int ) ;
 struct conn* FUNC_4 (struct server*,int,int ) ;
 int VAR_0 ;

struct conn *
FUNC_5(struct server *VAR_1)
{
    struct server_pool *VAR_2;
    struct conn *VAR_3;

    VAR_2 = VAR_1->owner;







    if (VAR_1->ns_conn_q < VAR_2->server_connections) {
        return FUNC_4(VAR_1, 0, VAR_2->redis);
    }
    FUNC_0(VAR_1->ns_conn_q == VAR_2->server_connections);





    VAR_3 = FUNC_1(&VAR_1->s_conn_q);
    FUNC_0(!VAR_3->client && !VAR_3->proxy);

    FUNC_3(&VAR_1->s_conn_q, VAR_3, VAR_0);
    FUNC_2(&VAR_1->s_conn_q, VAR_3, VAR_0);

    return VAR_3;
}
