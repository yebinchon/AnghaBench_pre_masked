
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_12__ {scalar_t__ connections; } ;
typedef TYPE_4__ ngx_event_conf_t ;
struct TYPE_13__ {TYPE_1__* cycle; TYPE_2__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_10__ {TYPE_3__* elts; } ;
struct TYPE_9__ {scalar_t__ connection_n; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_event_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;

    if (VAR_8->connections != VAR_2) {
        return "is duplicate";
    }

    VAR_9 = VAR_5->args->elts;
    VAR_8->connections = FUNC_0(VAR_9[1].data, VAR_9[1].len);
    if (VAR_8->connections == (ngx_uint_t) VAR_3) {
        FUNC_1(VAR_4, VAR_5, 0,
                           "invalid number \"%V\"", &VAR_9[1]);

        return VAR_0;
    }

    VAR_5->cycle->connection_n = VAR_8->connections;

    return VAR_1;
}
