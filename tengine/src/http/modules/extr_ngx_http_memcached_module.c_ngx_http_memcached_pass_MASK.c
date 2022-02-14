
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int no_resolve; int url; } ;
typedef TYPE_4__ ngx_url_t ;
typedef int ngx_str_t ;
struct TYPE_16__ {int * upstream; } ;
struct TYPE_19__ {scalar_t__ index; TYPE_2__ upstream; } ;
typedef TYPE_5__ ngx_http_memcached_loc_conf_t ;
struct TYPE_17__ {int len; char* data; } ;
struct TYPE_20__ {int auto_redirect; TYPE_3__ name; int handler; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_21__ {TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_15__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_7__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_7__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (TYPE_7__*,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_memcached_loc_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10;
    ngx_url_t VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;

    if (VAR_9->upstream.upstream) {
        return "is duplicate";
    }

    VAR_10 = VAR_6->args->elts;

    FUNC_3(&VAR_11, sizeof(ngx_url_t));

    VAR_11.url = VAR_10[1];
    VAR_11.no_resolve = 1;

    VAR_9->upstream.upstream = FUNC_2(VAR_6, &VAR_11, 0);
    if (VAR_9->upstream.upstream == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_0(VAR_6, VAR_3);

    VAR_12->handler = VAR_4;

    if (VAR_12->name.len && VAR_12->name.data[VAR_12->name.len - 1] == '/') {
        VAR_12->auto_redirect = 1;
    }

    VAR_9->index = FUNC_1(VAR_6, &VAR_5);

    if (VAR_9->index == VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
