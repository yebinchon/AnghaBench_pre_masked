
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_17__ {int * data; scalar_t__ len; } ;
struct TYPE_15__ {int backup; int down; int fail_timeout; void* max_fails; void* max_conns; void* weight; int naddrs; int addrs; TYPE_5__ url; TYPE_5__ name; scalar_t__ no_port; scalar_t__ err; } ;
typedef TYPE_2__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_16__ {int flags; int servers; } ;
typedef TYPE_3__ ngx_stream_upstream_srv_conf_t ;
typedef TYPE_2__ ngx_stream_upstream_server_t ;
typedef TYPE_5__ ngx_str_t ;
typedef void* ngx_int_t ;
struct TYPE_18__ {int pool; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {size_t nelts; TYPE_5__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_0 (int ) ;
 void* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,TYPE_5__*,...) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    ngx_stream_upstream_srv_conf_t *VAR_14 = VAR_13;

    time_t VAR_15;
    ngx_str_t *VAR_16, VAR_17;
    ngx_url_t VAR_18;
    ngx_int_t VAR_19, VAR_20, VAR_21;
    ngx_uint_t VAR_22;
    ngx_stream_upstream_server_t *VAR_23;

    VAR_23 = FUNC_0(VAR_14->servers);
    if (VAR_23 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_23, sizeof(ngx_stream_upstream_server_t));

    VAR_16 = VAR_11->args->elts;

    VAR_19 = 1;
    VAR_20 = 0;
    VAR_21 = 1;
    VAR_15 = 10;

    for (VAR_22 = 2; VAR_22 < VAR_11->args->nelts; VAR_22++) {

        if (FUNC_7(VAR_16[VAR_22].data, "weight=", 7) == 0) {

            if (!(VAR_14->flags & VAR_10)) {
                goto not_supported;
            }

            VAR_19 = FUNC_1(&VAR_16[VAR_22].data[7], VAR_16[VAR_22].len - 7);

            if (VAR_19 == VAR_2 || VAR_19 == 0) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_7(VAR_16[VAR_22].data, "max_conns=", 10) == 0) {

            if (!(VAR_14->flags & VAR_8)) {
                goto not_supported;
            }

            VAR_20 = FUNC_1(&VAR_16[VAR_22].data[10], VAR_16[VAR_22].len - 10);

            if (VAR_20 == VAR_2) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_7(VAR_16[VAR_22].data, "max_fails=", 10) == 0) {

            if (!(VAR_14->flags & VAR_9)) {
                goto not_supported;
            }

            VAR_21 = FUNC_1(&VAR_16[VAR_22].data[10], VAR_16[VAR_22].len - 10);

            if (VAR_21 == VAR_2) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_7(VAR_16[VAR_22].data, "fail_timeout=", 13) == 0) {

            if (!(VAR_14->flags & VAR_7)) {
                goto not_supported;
            }

            VAR_17.len = VAR_16[VAR_22].len - 13;
            VAR_17.data = &VAR_16[VAR_22].data[13];

            VAR_15 = FUNC_4(&VAR_17, 1);

            if (VAR_15 == (time_t) VAR_2) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_6(VAR_16[VAR_22].data, "backup") == 0) {

            if (!(VAR_14->flags & VAR_5)) {
                goto not_supported;
            }

            VAR_23->backup = 1;

            continue;
        }

        if (FUNC_6(VAR_16[VAR_22].data, "down") == 0) {

            if (!(VAR_14->flags & VAR_6)) {
                goto not_supported;
            }

            VAR_23->down = 1;

            continue;
        }

        goto invalid;
    }

    FUNC_3(&VAR_18, sizeof(ngx_url_t));

    VAR_18.url = VAR_16[1];

    if (FUNC_5(VAR_11->pool, &VAR_18) != VAR_4) {
        if (VAR_18.err) {
            FUNC_2(VAR_3, VAR_11, 0,
                               "%s in upstream \"%V\"", VAR_18.err, &VAR_18.url);
        }

        return VAR_0;
    }

    if (VAR_18.no_port) {
        FUNC_2(VAR_3, VAR_11, 0,
                           "no port in upstream \"%V\"", &VAR_18.url);
        return VAR_0;
    }

    VAR_23->name = VAR_18.url;
    VAR_23->addrs = VAR_18.addrs;
    VAR_23->naddrs = VAR_18.naddrs;
    VAR_23->weight = VAR_19;
    VAR_23->max_conns = VAR_20;
    VAR_23->max_fails = VAR_21;
    VAR_23->fail_timeout = VAR_15;

    return VAR_1;

invalid:

    FUNC_2(VAR_3, VAR_11, 0,
                       "invalid parameter \"%V\"", &VAR_16[VAR_22]);

    return VAR_0;

not_supported:

    FUNC_2(VAR_3, VAR_11, 0,
                       "balancing method does not support parameter \"%V\"",
                       &VAR_16[VAR_22]);

    return VAR_0;
}
