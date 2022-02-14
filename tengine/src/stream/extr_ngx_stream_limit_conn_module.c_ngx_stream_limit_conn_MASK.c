
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {int conn; int * shm_zone; } ;
typedef TYPE_2__ ngx_stream_limit_conn_limit_t ;
struct TYPE_13__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_16__ {TYPE_11__ limits; } ;
typedef TYPE_3__ ngx_stream_limit_conn_conf_t ;
struct TYPE_17__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_11__*,int ,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_5__*,int ,char*,...) ;
 int * FUNC_4 (TYPE_5__*,TYPE_4__*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_shm_zone_t *VAR_8;
    ngx_stream_limit_conn_conf_t *VAR_9 = VAR_7;
    ngx_stream_limit_conn_limit_t *VAR_10, *VAR_11;

    ngx_str_t *VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;

    VAR_12 = VAR_5->args->elts;

    VAR_8 = FUNC_4(VAR_5, &VAR_12[1], 0,
                                     &VAR_4);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = VAR_9->limits.elts;

    if (VAR_11 == ((void*)0)) {
        if (FUNC_0(&VAR_9->limits, VAR_5->pool, 1,
                           sizeof(ngx_stream_limit_conn_limit_t))
            != VAR_3)
        {
            return VAR_0;
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_9->limits.nelts; VAR_14++) {
        if (VAR_8 == VAR_11[VAR_14].shm_zone) {
            return "is duplicate";
        }
    }

    VAR_13 = FUNC_2(VAR_12[2].data, VAR_12[2].len);
    if (VAR_13 <= 0) {
        FUNC_3(VAR_2, VAR_5, 0,
                           "invalid number of connections \"%V\"", &VAR_12[2]);
        return VAR_0;
    }

    if (VAR_13 > 65535) {
        FUNC_3(VAR_2, VAR_5, 0,
                           "connection limit must be less 65536");
        return VAR_0;
    }

    VAR_10 = FUNC_1(&VAR_9->limits);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10->conn = VAR_13;
    VAR_10->shm_zone = VAR_8;

    return VAR_1;
}
