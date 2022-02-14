
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {struct context* ctx; struct server_pool* owner; } ;
struct server {struct context* ctx; struct server* owner; } ;
struct context {int dummy; } ;
struct conn {struct server_pool* owner; scalar_t__ client; scalar_t__ proxy; } ;



struct context *
FUNC_0(struct conn *VAR_0)
{
    struct server_pool *VAR_1;

    if (VAR_0->proxy || VAR_0->client) {
        VAR_1 = VAR_0->owner;
    } else {
        struct server *VAR_2 = VAR_0->owner;
        VAR_1 = VAR_2->owner;
    }

    return VAR_1->ctx;
}
