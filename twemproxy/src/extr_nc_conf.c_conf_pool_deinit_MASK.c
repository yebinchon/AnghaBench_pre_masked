
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ name; TYPE_2__ pname; } ;
struct conf_pool {int server; TYPE_2__ redis_auth; TYPE_1__ listen; TYPE_2__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,struct conf_pool*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(struct conf_pool *VAR_1)
{
    FUNC_5(&VAR_1->name);

    FUNC_5(&VAR_1->listen.pname);
    FUNC_5(&VAR_1->listen.name);

    if (VAR_1->redis_auth.len > 0) {
        FUNC_5(&VAR_1->redis_auth);
    }

    while (FUNC_1(&VAR_1->server) != 0) {
        FUNC_3(FUNC_2(&VAR_1->server));
    }
    FUNC_0(&VAR_1->server);

    FUNC_4(VAR_0, "deinit conf pool %p", VAR_1);
}
