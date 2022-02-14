
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int len; } ;
struct server {TYPE_1__ pname; int s_conn_q; int ns_conn_q; } ;
struct conn {int * owner; int proxy; int client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct conn*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,struct conn*,struct server*,int ,int ) ;
 int FUNC_3 (struct server*,struct conn*) ;

void
FUNC_4(struct conn *VAR_2, void *VAR_3)
{
    struct server *VAR_4 = VAR_3;

    FUNC_0(!VAR_2->client && !VAR_2->proxy);
    FUNC_0(VAR_2->owner == ((void*)0));

    FUNC_3(VAR_4, VAR_2);

    VAR_4->ns_conn_q++;
    FUNC_1(&VAR_4->s_conn_q, VAR_2, VAR_1);

    VAR_2->owner = VAR_3;

    FUNC_2(VAR_0, "ref conn %p owner %p into '%.*s", VAR_2, VAR_4,
              VAR_4->pname.len, VAR_4->pname.data);
}
