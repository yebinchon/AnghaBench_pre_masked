
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int timeout; } ;
struct server {struct server_pool* owner; } ;
struct conn {struct server* owner; int proxy; int client; } ;


 int FUNC_0 (int) ;

int
FUNC_1(struct conn *VAR_0)
{
    struct server *VAR_1;
    struct server_pool *VAR_2;

    FUNC_0(!VAR_0->client && !VAR_0->proxy);

    VAR_1 = VAR_0->owner;
    VAR_2 = VAR_1->owner;

    return VAR_2->timeout;
}
