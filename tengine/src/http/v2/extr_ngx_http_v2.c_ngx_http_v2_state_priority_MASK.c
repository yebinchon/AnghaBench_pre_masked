
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_18__ {int weight; int reuse; int * parent; int * stream; } ;
typedef TYPE_3__ ngx_http_v2_node_t ;
struct TYPE_17__ {int length; int sid; } ;
struct TYPE_19__ {scalar_t__ priority_limit; int closed; int closed_nodes; TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int,int) ;
 int* FUNC_5 (TYPE_4__*,int*,int*) ;
 int* FUNC_6 (TYPE_4__*,int*,int*,int* (*) (TYPE_4__*,int*,int*)) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,int ) ;
 int FUNC_8 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static u_char *
FUNC_12(ngx_http_v2_connection_t *VAR_8, u_char *VAR_9,
    u_char *VAR_10)
{
    ngx_uint_t VAR_11, VAR_12, VAR_13, VAR_14;
    ngx_http_v2_node_t *VAR_15;

    if (VAR_8->state.length != VAR_3) {
        FUNC_9(VAR_7, VAR_8->connection->log, 0,
                      "client sent PRIORITY frame with incorrect length %uz",
                      VAR_8->state.length);

        return FUNC_0(VAR_8, VAR_5);
    }

    if (--VAR_8->priority_limit == 0) {
        FUNC_9(VAR_7, VAR_8->connection->log, 0,
                      "client sent too many PRIORITY frames");

        return FUNC_0(VAR_8, VAR_1);
    }

    if (VAR_10 - VAR_9 < VAR_3) {
        return FUNC_6(VAR_8, VAR_9, VAR_10,
                                      FUNC_12);
    }

    VAR_12 = FUNC_2(VAR_9);

    VAR_11 = VAR_12 & 0x7fffffff;
    VAR_13 = VAR_12 >> 31;
    VAR_14 = VAR_9[4] + 1;

    VAR_9 += VAR_3;

    FUNC_8(VAR_6, VAR_8->connection->log, 0,
                   "http2 PRIORITY frame sid:%ui "
                   "depends on %ui excl:%ui weight:%ui",
                   VAR_8->state.sid, VAR_11, VAR_13, VAR_14);

    if (VAR_8->state.sid == 0) {
        FUNC_9(VAR_7, VAR_8->connection->log, 0,
                      "client sent PRIORITY frame with incorrect identifier");

        return FUNC_0(VAR_8, VAR_4);
    }

    if (VAR_11 == VAR_8->state.sid) {
        FUNC_9(VAR_7, VAR_8->connection->log, 0,
                      "client sent PRIORITY frame for stream %ui "
                      "with incorrect dependency", VAR_8->state.sid);

        VAR_15 = FUNC_1(VAR_8, VAR_8->state.sid, 0);

        if (VAR_15 && VAR_15->stream) {
            if (FUNC_7(VAR_8, VAR_15->stream,
                                             VAR_4)
                == VAR_0)
            {
                return FUNC_0(VAR_8,
                                                    VAR_2);
            }

        } else {
            if (FUNC_3(VAR_8, VAR_8->state.sid,
                                            VAR_4)
                == VAR_0)
            {
                return FUNC_0(VAR_8,
                                                    VAR_2);
            }
        }

        return FUNC_5(VAR_8, VAR_9, VAR_10);
    }

    VAR_15 = FUNC_1(VAR_8, VAR_8->state.sid, 1);

    if (VAR_15 == ((void*)0)) {
        return FUNC_0(VAR_8, VAR_2);
    }

    VAR_15->weight = VAR_14;

    if (VAR_15->stream == ((void*)0)) {
        if (VAR_15->parent == ((void*)0)) {
            VAR_8->closed_nodes++;

        } else {
            FUNC_11(&VAR_15->reuse);
        }

        FUNC_10(&VAR_8->closed, &VAR_15->reuse);
    }

    FUNC_4(VAR_8, VAR_15, VAR_11, VAR_13);

    return FUNC_5(VAR_8, VAR_9, VAR_10);
}
