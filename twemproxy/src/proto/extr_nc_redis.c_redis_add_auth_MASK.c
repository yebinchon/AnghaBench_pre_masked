
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int len; } ;
struct server_pool {TYPE_1__ redis_auth; } ;
struct msg {int swallow; } ;
struct context {int dummy; } ;
struct conn {int authenticated; int (* enqueue_inq ) (struct context*,struct conn*,struct msg*) ;int err; int redis; struct server_pool* owner; int proxy; int client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct conn*) ;
 int VAR_2 ;
 struct msg* FUNC_2 (struct conn*,int,int ) ;
 scalar_t__ FUNC_3 (struct msg*,char*,int ,int ) ;
 int FUNC_4 (struct msg*) ;
 int FUNC_5 (struct context*,struct conn*,struct msg*) ;

rstatus_t
FUNC_6(struct context *VAR_3, struct conn *VAR_4, struct conn *VAR_5)
{
    rstatus_t VAR_6;
    struct msg *VAR_7;
    struct server_pool *VAR_8;

    FUNC_0(!VAR_5->client && !VAR_5->proxy);
    FUNC_0(!FUNC_1(VAR_5));

    VAR_8 = VAR_4->owner;

    VAR_7 = FUNC_2(VAR_4, 1, VAR_4->redis);
    if (VAR_7 == ((void*)0)) {
        VAR_4->err = VAR_2;
        return VAR_0;
    }

    VAR_6 = FUNC_3(VAR_7, "*2\r\n$4\r\nAUTH\r\n$%d\r\n%s\r\n",
                                VAR_8->redis_auth.len, VAR_8->redis_auth.data);
    if (VAR_6 != VAR_1) {
        FUNC_4(VAR_7);
        return VAR_6;
    }

    VAR_7->swallow = 1;
    VAR_5->enqueue_inq(VAR_3, VAR_5, VAR_7);
    VAR_5->authenticated = 1;

    return VAR_1;
}
