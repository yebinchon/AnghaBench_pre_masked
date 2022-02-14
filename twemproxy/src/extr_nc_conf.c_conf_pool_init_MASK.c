
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string {int data; int len; } ;
struct conf_server {int dummy; } ;
struct TYPE_2__ {scalar_t__ valid; int info; scalar_t__ port; int name; int pname; } ;
struct conf_pool {int name; int server; scalar_t__ valid; void* server_failure_limit; void* server_retry_timeout; void* server_connections; void* auto_eject_hosts; void* preconnect; void* redis_db; void* tcpkeepalive; void* redis; void* client_connections; void* backlog; void* timeout; int distribution; int hash_tag; int hash; TYPE_1__ listen; int redis_auth; } ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct conf_pool*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,struct string*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static rstatus_t
FUNC_7(struct conf_pool *VAR_6, struct string *VAR_7)
{
    rstatus_t VAR_8;

    FUNC_6(&VAR_6->name);

    FUNC_6(&VAR_6->listen.pname);
    FUNC_6(&VAR_6->listen.name);
    FUNC_6(&VAR_6->redis_auth);
    VAR_6->listen.port = 0;
    FUNC_3(&VAR_6->listen.info, 0, sizeof(VAR_6->listen.info));
    VAR_6->listen.valid = 0;

    VAR_6->hash = VAR_2;
    FUNC_6(&VAR_6->hash_tag);
    VAR_6->distribution = VAR_1;

    VAR_6->timeout = VAR_3;
    VAR_6->backlog = VAR_3;

    VAR_6->client_connections = VAR_3;

    VAR_6->redis = VAR_3;
    VAR_6->tcpkeepalive = VAR_3;
    VAR_6->redis_db = VAR_3;
    VAR_6->preconnect = VAR_3;
    VAR_6->auto_eject_hosts = VAR_3;
    VAR_6->server_connections = VAR_3;
    VAR_6->server_retry_timeout = VAR_3;
    VAR_6->server_failure_limit = VAR_3;

    FUNC_1(&VAR_6->server);

    VAR_6->valid = 0;

    VAR_8 = FUNC_5(&VAR_6->name, VAR_7);
    if (VAR_8 != VAR_5) {
        return VAR_8;
    }

    VAR_8 = FUNC_0(&VAR_6->server, VAR_0,
                        sizeof(struct conf_server));
    if (VAR_8 != VAR_5) {
        FUNC_4(&VAR_6->name);
        return VAR_8;
    }

    FUNC_2(VAR_4, "init conf pool %p, '%.*s'", VAR_6, VAR_7->len, VAR_7->data);

    return VAR_5;
}
