
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_18__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ len; char* data; } ;
struct TYPE_15__ {scalar_t__ content_length_n; } ;
struct TYPE_19__ {TYPE_3__* connection; TYPE_2__ uri; TYPE_1__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ min_delete_depth; } ;
typedef TYPE_6__ ngx_http_dav_loc_conf_t ;
typedef int ngx_file_info_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_14 ;
 TYPE_6__* FUNC_3 (TYPE_5__*,int ) ;
 int * FUNC_4 (TYPE_5__*,TYPE_4__*,size_t*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,char*,int ) ;
 int FUNC_8 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_16)
{
    size_t VAR_17;
    ngx_err_t VAR_18;
    ngx_int_t VAR_19, VAR_20;
    ngx_uint_t VAR_21, VAR_22, VAR_23;
    ngx_str_t VAR_24;
    ngx_file_info_t VAR_25;
    ngx_http_dav_loc_conf_t *VAR_26;

    if (VAR_16->headers_in.content_length_n > 0) {
        FUNC_8(VAR_11, VAR_16->connection->log, 0,
                      "DELETE with body is unsupported");
        return VAR_9;
    }

    VAR_26 = FUNC_3(VAR_16, VAR_14);

    if (VAR_26->min_delete_depth) {
        VAR_22 = 0;

        for (VAR_21 = 0; VAR_21 < VAR_16->uri.len; ) {
            if (VAR_16->uri.data[VAR_21++] == '/') {
                if (++VAR_22 >= VAR_26->min_delete_depth && VAR_21 < VAR_16->uri.len) {
                    goto ok;
                }
            }
        }

        FUNC_8(VAR_11, VAR_16->connection->log, 0,
                      "insufficient URI depth:%i to DELETE", VAR_22);
        return VAR_4;
    }

ok:

    if (FUNC_4(VAR_16, &VAR_24, &VAR_17, 0) == ((void*)0)) {
        return VAR_6;
    }

    FUNC_7(VAR_10, VAR_16->connection->log, 0,
                   "http delete filename: \"%s\"", VAR_24.data);

    if (FUNC_6(VAR_24.data, &VAR_25) == VAR_2) {
        VAR_18 = VAR_13;

        VAR_19 = (VAR_18 == VAR_1) ? VAR_4 : VAR_7;

        return FUNC_2(VAR_16->connection->log, VAR_18,
                                  VAR_19, VAR_15, VAR_24.data);
    }

    if (FUNC_5(&VAR_25)) {

        if (VAR_16->uri.data[VAR_16->uri.len - 1] != '/') {
            FUNC_8(VAR_11, VAR_16->connection->log, VAR_0,
                          "DELETE \"%s\" failed", VAR_24.data);
            return VAR_4;
        }

        VAR_20 = FUNC_1(VAR_16, VAR_5);

        if (VAR_20 != VAR_5) {
            FUNC_8(VAR_11, VAR_16->connection->log, 0,
                          "\"Depth\" header must be infinity");
            return VAR_3;
        }

        VAR_24.len -= 2;

        VAR_23 = 1;

    } else {






        VAR_20 = FUNC_1(VAR_16, 0);

        if (VAR_20 != 0 && VAR_20 != VAR_5) {
            FUNC_8(VAR_11, VAR_16->connection->log, 0,
                          "\"Depth\" header must be 0 or infinity");
            return VAR_3;
        }

        VAR_23 = 0;
    }

    VAR_19 = FUNC_0(VAR_16, &VAR_24, VAR_23);

    if (VAR_19 == VAR_12) {
        return VAR_8;
    }

    return VAR_19;
}
