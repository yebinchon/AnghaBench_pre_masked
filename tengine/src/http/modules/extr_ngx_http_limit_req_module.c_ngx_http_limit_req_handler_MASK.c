
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_32__ ;
typedef struct TYPE_39__ TYPE_30__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef int uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_46__ {int len; int data; } ;
typedef TYPE_8__ ngx_str_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_47__ {TYPE_7__* connection; int write_event_handler; int read_event_handler; int args; TYPE_2__* main; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_36__ {scalar_t__ len; char* data; } ;
struct TYPE_33__ {TYPE_6__* shm_zone; TYPE_14__ forbid_action; } ;
typedef TYPE_10__ ngx_http_limit_req_limit_t ;
struct TYPE_39__ {int value; } ;
struct TYPE_34__ {TYPE_4__* node; TYPE_3__* shpool; TYPE_30__ key; } ;
typedef TYPE_11__ ngx_http_limit_req_ctx_t ;
struct TYPE_37__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_35__ {scalar_t__ status_code; scalar_t__ dry_run; int delay_log_level; int limit_log_level; TYPE_1__ limits; int enable; } ;
typedef TYPE_12__ ngx_http_limit_req_conf_t ;
struct TYPE_45__ {TYPE_32__* write; int read; int log; } ;
struct TYPE_43__ {int name; } ;
struct TYPE_44__ {TYPE_5__ shm; TYPE_11__* data; } ;
struct TYPE_42__ {int count; } ;
struct TYPE_41__ {int mutex; } ;
struct TYPE_40__ {int delayed; } ;
struct TYPE_38__ {int limit_req_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_32__*,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_30__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_9__*,scalar_t__) ;
 TYPE_12__* FUNC_5 (TYPE_9__*,int ) ;
 int FUNC_6 (TYPE_9__*,TYPE_14__*,int *) ;
 int FUNC_7 (TYPE_10__*,size_t,size_t*,TYPE_10__**) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (TYPE_9__*,TYPE_12__*) ;
 scalar_t__ FUNC_9 (TYPE_10__*,int ,TYPE_8__*,size_t*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_9__*,TYPE_11__*) ;
 int FUNC_11 (TYPE_9__*,TYPE_14__*) ;
 int VAR_11 ;
 int FUNC_12 (int ,int ,int ,char*,size_t,scalar_t__,size_t,size_t) ;
 int FUNC_13 (int ,int ,int ,char*,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_16(ngx_http_request_t *VAR_12)
{
    uint32_t VAR_13;
    ngx_str_t VAR_14;
    ngx_int_t VAR_15;
    ngx_uint_t VAR_16, VAR_17;
    ngx_msec_t VAR_18;
    ngx_http_limit_req_ctx_t *VAR_19;
    ngx_http_limit_req_conf_t *VAR_20;
    ngx_http_limit_req_limit_t *VAR_21, *VAR_22;

    if (VAR_12->main->limit_req_set) {
        return VAR_2;
    }

    VAR_20 = FUNC_5(VAR_12, VAR_10);
    VAR_22 = VAR_20->limits.elts;
    VAR_17 = 0;

    VAR_15 = VAR_2;





    for (VAR_16 = 0; VAR_16 < VAR_20->limits.nelts; VAR_16++) {

        VAR_21 = &VAR_22[VAR_16];

        VAR_19 = VAR_21->shm_zone->data;







        if (FUNC_3(VAR_12, &VAR_19->key, &VAR_14) != VAR_8) {
            return VAR_5;
        }

        if (VAR_14.len == 0) {
            continue;
        }

        if (VAR_14.len > 65535) {
            FUNC_13(VAR_7, VAR_12->connection->log, 0,
                          "the value of the \"%V\" key "
                          "is more than 65535 bytes: \"%V\"",
                          &VAR_19->key.value, &VAR_14);
            continue;
        }

        VAR_13 = FUNC_1(VAR_14.data, VAR_14.len);

        FUNC_14(&VAR_19->shpool->mutex);

        VAR_15 = FUNC_9(VAR_21, VAR_13, &VAR_14, &VAR_17,
                                       (VAR_16 == VAR_20->limits.nelts - 1));

        FUNC_15(&VAR_19->shpool->mutex);

        FUNC_12(VAR_6, VAR_12->connection->log, 0,
                       "limit_req[%ui]: %i %ui.%03ui",
                       VAR_16, VAR_15, VAR_17 / 1000, VAR_17 % 1000);

        if (VAR_15 != VAR_0) {
            break;
        }
    }

    if (VAR_15 == VAR_2) {
        return VAR_2;
    }

    VAR_12->main->limit_req_set = 1;

    if (VAR_15 == VAR_1 || VAR_15 == VAR_4) {

        if (VAR_15 == VAR_1) {
            FUNC_13(VAR_20->limit_log_level, VAR_12->connection->log, 0,
                        "limiting requests%s, excess: %ui.%03ui by zone \"%V\"",
                        VAR_20->dry_run ? ", dry run" : "",
                        VAR_17 / 1000, VAR_17 % 1000,
                        &VAR_21->shm_zone->shm.name);
        }

        while (VAR_16--) {
            VAR_19 = VAR_22[VAR_16].shm_zone->data;

            if (VAR_19->node == ((void*)0)) {
                continue;
            }

            FUNC_14(&VAR_19->shpool->mutex);

            VAR_19->node->count--;

            FUNC_15(&VAR_19->shpool->mutex);

            VAR_19->node = ((void*)0);
        }

        if (VAR_20->dry_run) {
            return VAR_2;
        }
        return VAR_20->status_code;

    }



    if (VAR_15 == VAR_0) {
        VAR_17 = 0;
    }

    VAR_18 = FUNC_7(VAR_22, VAR_16, &VAR_17, &VAR_21);

    if (!VAR_18) {
        return VAR_2;
    }

    FUNC_13(VAR_20->delay_log_level, VAR_12->connection->log, 0,
                  "delaying request%s, excess: %ui.%03ui, by zone \"%V\"",
                  VAR_20->dry_run ? ", dry run" : "",
                  VAR_17 / 1000, VAR_17 % 1000, &VAR_21->shm_zone->shm.name);

    if (VAR_20->dry_run) {
        return VAR_2;
    }

    if (FUNC_2(VAR_12->connection->read, 0) != VAR_8) {
        return VAR_5;
    }

    VAR_12->read_event_handler = VAR_11;
    VAR_12->write_event_handler = VAR_9;

    VAR_12->connection->write->delayed = 1;
    FUNC_0(VAR_12->connection->write, VAR_18);

    return VAR_0;
}
