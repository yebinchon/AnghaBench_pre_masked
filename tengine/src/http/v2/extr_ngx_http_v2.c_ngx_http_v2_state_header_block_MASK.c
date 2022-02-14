
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int flags; scalar_t__ length; int index; int parse_name; int parse_value; } ;
struct TYPE_18__ {TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 int* FUNC_2 (TYPE_3__*,int*,int*,int* (*) (TYPE_3__*,int*,int*)) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int**,int*,int) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (TYPE_3__*,int*,int*) ;
 int* FUNC_6 (TYPE_3__*,int*,int*) ;
 int* FUNC_7 (TYPE_3__*,int*,int*,int* (*) (TYPE_3__*,int*,int*)) ;
 int* FUNC_8 (TYPE_3__*,int*,int*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,char*,...) ;

__attribute__((used)) static u_char *
FUNC_11(ngx_http_v2_connection_t *VAR_8, u_char *VAR_9,
    u_char *VAR_10)
{
    u_char VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13, VAR_14, VAR_15;

    if (VAR_10 - VAR_9 < 1) {
        return FUNC_7(VAR_8, VAR_9, VAR_10,
                                              FUNC_11);
    }

    if (!(VAR_8->state.flags & VAR_3)
        && VAR_8->state.length < VAR_4)
    {
        return FUNC_2(VAR_8, VAR_9, VAR_10,
                                               FUNC_11);
    }

    VAR_14 = 0;
    VAR_13 = 0;

    VAR_11 = *VAR_9;

    if (VAR_11 >= (1 << 7)) {

        VAR_13 = 1;
        VAR_15 = FUNC_4(7);

    } else if (VAR_11 >= (1 << 6)) {

        VAR_8->state.index = 1;
        VAR_15 = FUNC_4(6);

    } else if (VAR_11 >= (1 << 5)) {

        VAR_14 = 1;
        VAR_15 = FUNC_4(5);

    } else if (VAR_11 >= (1 << 4)) {

        VAR_15 = FUNC_4(4);

    } else {

        VAR_15 = FUNC_4(4);
    }

    VAR_12 = FUNC_3(VAR_8, &VAR_9, VAR_10, VAR_15);

    if (VAR_12 < 0) {
        if (VAR_12 == VAR_0) {
            return FUNC_7(VAR_8, VAR_9, VAR_10,
                                               FUNC_11);
        }

        if (VAR_12 == VAR_1) {
            FUNC_10(VAR_6, VAR_8->connection->log, 0,
                          "client sent header block with too long %s value",
                          VAR_14 ? "size update" : "header index");

            return FUNC_0(VAR_8, VAR_2);
        }

        FUNC_10(VAR_6, VAR_8->connection->log, 0,
                      "client sent header block with incorrect length");

        return FUNC_0(VAR_8, VAR_5);
    }

    if (VAR_13) {
        if (FUNC_1(VAR_8, VAR_12, 0) != VAR_7) {
            return FUNC_0(VAR_8, VAR_2);
        }

        return FUNC_8(VAR_8, VAR_9, VAR_10);
    }

    if (VAR_14) {
        if (FUNC_9(VAR_8, VAR_12) != VAR_7) {
            return FUNC_0(VAR_8, VAR_2);
        }

        return FUNC_6(VAR_8, VAR_9, VAR_10);
    }

    if (VAR_12 == 0) {
        VAR_8->state.parse_name = 1;

    } else if (FUNC_1(VAR_8, VAR_12, 1) != VAR_7) {
        return FUNC_0(VAR_8, VAR_2);
    }

    VAR_8->state.parse_value = 1;

    return FUNC_5(VAR_8, VAR_9, VAR_10);
}
