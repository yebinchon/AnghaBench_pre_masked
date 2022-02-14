
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int no_resolve; void* url; } ;
typedef TYPE_4__ ngx_url_t ;
typedef void* ngx_str_t ;
struct TYPE_15__ {int * upstream; } ;
struct TYPE_18__ {TYPE_2__ upstream; void* method; void* service_version; void* service_name; } ;
typedef TYPE_5__ ngx_http_dubbo_loc_conf_t ;
struct TYPE_16__ {char* data; int len; } ;
struct TYPE_19__ {int auto_redirect; TYPE_3__ name; int handler; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_20__ {TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {void** elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_7__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_7__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_dubbo_loc_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_url_t VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;

    if (VAR_7->upstream.upstream) {
        return "is duplicate";
    }

    VAR_8 = VAR_4->args->elts;

    VAR_7->service_name = VAR_8[1];
    VAR_7->service_version = VAR_8[2];
    VAR_7->method = VAR_8[3];

    FUNC_2(&VAR_9, sizeof(ngx_url_t));

    VAR_9.url = VAR_8[4];
    VAR_9.no_resolve = 1;

    VAR_7->upstream.upstream = FUNC_1(VAR_4, &VAR_9, 0);
    if (VAR_7->upstream.upstream == ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = FUNC_0(VAR_4, VAR_2);

    VAR_10->handler = VAR_3;

    if (VAR_10->name.data[VAR_10->name.len - 1] == '/') {
        VAR_10->auto_redirect = 1;
    }

    return VAR_1;
}
