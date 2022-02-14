
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {int valid; } ;
struct conf_pool {int valid; scalar_t__ distribution; scalar_t__ hash; scalar_t__ timeout; scalar_t__ backlog; scalar_t__ redis; scalar_t__ tcpkeepalive; scalar_t__ redis_db; scalar_t__ preconnect; scalar_t__ auto_eject_hosts; scalar_t__ server_connections; scalar_t__ server_retry_timeout; scalar_t__ server_failure_limit; TYPE_2__ redis_auth; int client_connections; TYPE_1__ listen; int name; } ;
struct conf {int dummy; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (struct conf*,struct conf_pool*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static rstatus_t
FUNC_4(struct conf *VAR_18, struct conf_pool *VAR_19)
{
    rstatus_t VAR_20;

    FUNC_0(!VAR_19->valid);
    FUNC_0(!FUNC_3(&VAR_19->name));

    if (!VAR_19->listen.valid) {
        FUNC_2("conf: directive \"listen:\" is missing");
        return VAR_16;
    }



    if (VAR_19->distribution == VAR_13) {
        VAR_19->distribution = VAR_2;
    }

    if (VAR_19->hash == VAR_14) {
        VAR_19->hash = VAR_3;
    }

    if (VAR_19->timeout == VAR_15) {
        VAR_19->timeout = VAR_12;
    }

    if (VAR_19->backlog == VAR_15) {
        VAR_19->backlog = VAR_4;
    }

    VAR_19->client_connections = VAR_1;

    if (VAR_19->redis == VAR_15) {
        VAR_19->redis = VAR_6;
    }

    if (VAR_19->tcpkeepalive == VAR_15) {
        VAR_19->tcpkeepalive = VAR_11;
    }

    if (VAR_19->redis_db == VAR_15) {
        VAR_19->redis_db = VAR_7;
    }

    if (VAR_19->preconnect == VAR_15) {
        VAR_19->preconnect = VAR_5;
    }

    if (VAR_19->auto_eject_hosts == VAR_15) {
        VAR_19->auto_eject_hosts = VAR_0;
    }

    if (VAR_19->server_connections == VAR_15) {
        VAR_19->server_connections = VAR_8;
    } else if (VAR_19->server_connections == 0) {
        FUNC_2("conf: directive \"server_connections:\" cannot be 0");
        return VAR_16;
    }

    if (VAR_19->server_retry_timeout == VAR_15) {
        VAR_19->server_retry_timeout = VAR_10;
    }

    if (VAR_19->server_failure_limit == VAR_15) {
        VAR_19->server_failure_limit = VAR_9;
    }

    if (!VAR_19->redis && VAR_19->redis_auth.len > 0) {
        FUNC_2("conf: directive \"redis_auth:\" is only valid for a redis pool");
        return VAR_16;
    }

    VAR_20 = FUNC_1(VAR_18, VAR_19);
    if (VAR_20 != VAR_17) {
        return VAR_20;
    }

    VAR_19->valid = 1;

    return VAR_17;
}
