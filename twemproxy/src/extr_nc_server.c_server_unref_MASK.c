
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int len; } ;
struct server {scalar_t__ ns_conn_q; TYPE_1__ pname; int s_conn_q; } ;
struct conn {struct server* owner; int proxy; int client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct conn*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,struct conn*,struct server*,int ,int ) ;

void
FUNC_3(struct conn *VAR_2)
{
    struct server *VAR_3;

    FUNC_0(!VAR_2->client && !VAR_2->proxy);
    FUNC_0(VAR_2->owner != ((void*)0));

    VAR_3 = VAR_2->owner;
    VAR_2->owner = ((void*)0);

    FUNC_0(VAR_3->ns_conn_q != 0);
    VAR_3->ns_conn_q--;
    FUNC_1(&VAR_3->s_conn_q, VAR_2, VAR_1);

    FUNC_2(VAR_0, "unref conn %p owner %p from '%.*s'", VAR_2, VAR_3,
              VAR_3->pname.len, VAR_3->pname.data);
}
