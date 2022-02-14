
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct server_pool {int ctx; } ;
struct TYPE_2__ {int data; int len; } ;
struct server {TYPE_1__ pname; struct server_pool* owner; } ;
struct conn {int dummy; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,struct conn*) ;
 struct conn* FUNC_2 (struct server*) ;
 scalar_t__ FUNC_3 (int ,struct server*,struct conn*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_5(void *VAR_3, void *VAR_4)
{
    rstatus_t VAR_5;
    struct server *VAR_6;
    struct server_pool *VAR_7;
    struct conn *VAR_8;

    VAR_6 = VAR_3;
    VAR_7 = VAR_6->owner;

    VAR_8 = FUNC_2(VAR_6);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = FUNC_3(VAR_7->ctx, VAR_6, VAR_8);
    if (VAR_5 != VAR_1) {
        FUNC_0("connect to server '%.*s' failed, ignored: %s",
                 VAR_6->pname.len, VAR_6->pname.data, FUNC_4(VAR_2));
        FUNC_1(VAR_7->ctx, VAR_8);
    }

    return VAR_1;
}
