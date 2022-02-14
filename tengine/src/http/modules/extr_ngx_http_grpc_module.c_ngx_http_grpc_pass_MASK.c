
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_20__ {int data; scalar_t__ len; } ;
struct TYPE_24__ {scalar_t__ len; } ;
struct TYPE_22__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_26__ {int no_resolve; scalar_t__ family; TYPE_11__ host; TYPE_4__ port_text; scalar_t__ no_port; TYPE_2__ url; } ;
typedef TYPE_6__ ngx_url_t ;
struct TYPE_27__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_23__ {int * upstream; } ;
struct TYPE_28__ {int ssl; TYPE_11__ host; TYPE_3__ upstream; } ;
typedef TYPE_8__ ngx_http_grpc_loc_conf_t ;
struct TYPE_25__ {int len; char* data; } ;
struct TYPE_29__ {int auto_redirect; TYPE_5__ name; int handler; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_19__ {TYPE_1__* args; } ;
typedef TYPE_10__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_21__ {TYPE_7__* elts; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_10__*,int ,char*) ;
 TYPE_9__* FUNC_1 (TYPE_10__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (TYPE_10__*,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_11__*,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_grpc_loc_conf_t *VAR_9 = VAR_8;

    size_t VAR_10;
    ngx_str_t *VAR_11, *VAR_12;
    ngx_url_t VAR_13;
    ngx_http_core_loc_conf_t *VAR_14;

    if (VAR_9->upstream.upstream) {
        return "is duplicate";
    }

    VAR_11 = VAR_6->args->elts;
    VAR_12 = &VAR_11[1];

    if (FUNC_5(VAR_12->data, (u_char *) "grpc://", 7) == 0) {
        VAR_10 = 7;

    } else if (FUNC_5(VAR_12->data, (u_char *) "grpcs://", 8) == 0) {






        FUNC_0(VAR_3, VAR_6, 0,
                           "grpcs protocol requires SSL support");
        return VAR_1;


    } else {
        VAR_10 = 0;
    }

    FUNC_3(&VAR_13, sizeof(ngx_url_t));

    VAR_13.url.len = VAR_12->len - VAR_10;
    VAR_13.url.data = VAR_12->data + VAR_10;
    VAR_13.no_resolve = 1;

    VAR_9->upstream.upstream = FUNC_2(VAR_6, &VAR_13, 0);
    if (VAR_9->upstream.upstream == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_13.family != VAR_0) {

        if (VAR_13.no_port) {
            VAR_9->host = VAR_13.host;

        } else {
            VAR_9->host.len = VAR_13.host.len + 1 + VAR_13.port_text.len;
            VAR_9->host.data = VAR_13.host.data;
        }

    } else {
        FUNC_4(&VAR_9->host, "localhost");
    }

    VAR_14 = FUNC_1(VAR_6, VAR_4);

    VAR_14->handler = VAR_5;

    if (VAR_14->name.len && VAR_14->name.data[VAR_14->name.len - 1] == '/') {
        VAR_14->auto_redirect = 1;
    }

    return VAR_2;
}
