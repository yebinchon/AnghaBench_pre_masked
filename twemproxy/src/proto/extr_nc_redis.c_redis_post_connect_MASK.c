
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct server_pool {int redis_db; TYPE_1__ name; } ;
struct TYPE_4__ {int data; } ;
struct server {TYPE_2__ name; struct server_pool* owner; } ;
struct msg {int swallow; int * owner; int result; int type; } ;
struct context {int dummy; } ;
struct conn {int redis; scalar_t__ connected; int client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int ,int ) ;
 struct msg* FUNC_3 (struct conn*,int,int) ;
 scalar_t__ FUNC_4 (struct msg*,char*,int,int) ;
 int FUNC_5 (struct msg*) ;
 int FUNC_6 (struct context*,struct conn*) ;
 int FUNC_7 (struct context*,struct conn*,struct msg*) ;

void
FUNC_8(struct context *VAR_4, struct conn *VAR_5, struct server *VAR_6)
{
    rstatus_t VAR_7;
    struct server_pool *VAR_8 = VAR_6->owner;
    struct msg *VAR_9;
    int VAR_10;

    FUNC_0(!VAR_5->client && VAR_5->connected);
    FUNC_0(VAR_5->redis);







    if (VAR_8->redis_db <= 0) {
        return;
    }






    VAR_9 = FUNC_3(VAR_5, 1, VAR_5->redis);
    if (VAR_9 == ((void*)0)) {
        return;
    }

    VAR_10 = (VAR_8->redis_db >= 10) ? (int)FUNC_1(VAR_8->redis_db) + 1 : 1;
    VAR_7 = FUNC_4(VAR_9, "*2\r\n$6\r\nSELECT\r\n$%d\r\n%d\r\n", VAR_10, VAR_8->redis_db);
    if (VAR_7 != VAR_3) {
        FUNC_5(VAR_9);
        return;
    }
    VAR_9->type = VAR_2;
    VAR_9->result = VAR_1;
    VAR_9->swallow = 1;
    VAR_9->owner = ((void*)0);


    FUNC_7(VAR_4, VAR_5, VAR_9);
    FUNC_6(VAR_4, VAR_5);

    FUNC_2(VAR_0, "sent 'SELECT %d' to %s | %s", VAR_8->redis_db,
              VAR_8->name.data, VAR_6->name.data);
}
