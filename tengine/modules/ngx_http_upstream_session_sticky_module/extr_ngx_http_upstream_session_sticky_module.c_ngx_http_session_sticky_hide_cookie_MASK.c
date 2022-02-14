
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_15__ {int uri_part; int no_resolve; TYPE_2__ url; } ;
typedef TYPE_3__ ngx_url_t ;
struct TYPE_16__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_17__ {int * uscf; } ;
typedef TYPE_5__ ngx_http_ss_loc_conf_t ;
struct TYPE_18__ {TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {scalar_t__ elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,...) ;
 int * FUNC_2 (TYPE_6__*,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_4, ngx_command_t *VAR_5,
    void *VAR_6)
{
    ngx_http_ss_loc_conf_t *VAR_7 = VAR_6;

    size_t VAR_8;
    ngx_str_t *VAR_9;
    ngx_url_t VAR_10;

    VAR_9 = (ngx_str_t *) VAR_4->args->elts;
    if (FUNC_4(VAR_9[0].data, "session_sticky_header", 21) == 0) {
        FUNC_0(VAR_4,
                            &VAR_3, ((void*)0));
    }

    if (FUNC_4(VAR_9[1].data, "upstream=", 9) == 0) {
        VAR_8 = 9;
        FUNC_3(&VAR_10, sizeof(ngx_url_t));

        VAR_10.url.len = VAR_9[1].len - VAR_8;
        VAR_10.url.data = VAR_9[1].data + VAR_8;
        VAR_10.uri_part = 1;
        VAR_10.no_resolve = 1;

        VAR_7->uscf = FUNC_2(VAR_4, &VAR_10, 0);
        if (VAR_7->uscf == ((void*)0)) {
            FUNC_1(VAR_2, VAR_4, 0,
                               "invalid upstream name");
            return VAR_0;
        }
        return VAR_1;
    }

    FUNC_1(VAR_2, VAR_4, 0, "invalid argument of \"%V\"",
                       &VAR_9[1]);
    return VAR_0;
}
