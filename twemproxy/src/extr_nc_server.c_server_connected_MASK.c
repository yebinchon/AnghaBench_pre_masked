
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int len; } ;
struct server {TYPE_1__ pname; } ;
struct context {int dummy; } ;
struct conn {int connected; int sd; int (* post_connect ) (struct context*,struct conn*,struct server*) ;scalar_t__ connecting; int proxy; int client; struct server* owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct context*,struct server*,int ) ;
 int FUNC_3 (struct context*,struct conn*,struct server*) ;

void
FUNC_4(struct context *VAR_2, struct conn *VAR_3)
{
    struct server *VAR_4 = VAR_3->owner;

    FUNC_0(!VAR_3->client && !VAR_3->proxy);
    FUNC_0(VAR_3->connecting && !VAR_3->connected);

    FUNC_2(VAR_2, VAR_4, VAR_1);

    VAR_3->connecting = 0;
    VAR_3->connected = 1;

    VAR_3->post_connect(VAR_2, VAR_3, VAR_4);

    FUNC_1(VAR_0, "connected on s %d to server '%.*s'", VAR_3->sd,
              VAR_4->pname.len, VAR_4->pname.data);
}
