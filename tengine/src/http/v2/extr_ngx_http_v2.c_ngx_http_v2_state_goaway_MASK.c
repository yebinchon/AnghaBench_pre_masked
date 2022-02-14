
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {int length; } ;
struct TYPE_11__ {TYPE_1__* connection; TYPE_2__ state; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int * FUNC_4 (TYPE_3__*,int *,int *) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,char*,int) ;

__attribute__((used)) static u_char *
FUNC_7(ngx_http_v2_connection_t *VAR_4, u_char *VAR_5,
    u_char *VAR_6)
{




    if (VAR_4->state.length < VAR_0) {
        FUNC_6(VAR_3, VAR_4->connection->log, 0,
                      "client sent GOAWAY frame "
                      "with incorrect length %uz", VAR_4->state.length);

        return FUNC_0(VAR_4, VAR_1);
    }

    if (VAR_6 - VAR_5 < VAR_0) {
        return FUNC_3(VAR_4, VAR_5, VAR_6, FUNC_7);
    }
    return FUNC_4(VAR_4, VAR_5, VAR_6);
}
