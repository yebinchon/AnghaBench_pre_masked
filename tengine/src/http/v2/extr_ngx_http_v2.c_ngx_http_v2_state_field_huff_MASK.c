
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_11__ {size_t field_rest; size_t length; char* field_end; int flags; int field_state; } ;
struct TYPE_13__ {TYPE_2__* connection; TYPE_1__ state; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 scalar_t__ FUNC_2 (int *,int *,size_t,char**,int,int ) ;
 int * FUNC_3 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int * FUNC_4 (TYPE_3__*,int *,int *) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_6(ngx_http_v2_connection_t *VAR_5, u_char *VAR_6,
    u_char *VAR_7)
{
    size_t VAR_8;

    VAR_8 = VAR_7 - VAR_6;

    if (VAR_8 > VAR_5->state.field_rest) {
        VAR_8 = VAR_5->state.field_rest;
    }

    if (VAR_8 > VAR_5->state.length) {
        VAR_8 = VAR_5->state.length;
    }

    VAR_5->state.length -= VAR_8;
    VAR_5->state.field_rest -= VAR_8;

    if (FUNC_2(&VAR_5->state.field_state, VAR_6, VAR_8,
                                &VAR_5->state.field_end,
                                VAR_5->state.field_rest == 0,
                                VAR_5->connection->log)
        != VAR_4)
    {
        FUNC_5(VAR_3, VAR_5->connection->log, 0,
                      "client sent invalid encoded header field");

        return FUNC_0(VAR_5, VAR_0);
    }

    VAR_6 += VAR_8;

    if (VAR_5->state.field_rest == 0) {
        *VAR_5->state.field_end = '\0';
        return FUNC_4(VAR_5, VAR_6, VAR_7);
    }

    if (VAR_5->state.length) {
        return FUNC_3(VAR_5, VAR_6, VAR_7,
                                              FUNC_6);
    }

    if (VAR_5->state.flags & VAR_1) {
        FUNC_5(VAR_3, VAR_5->connection->log, 0,
                      "client sent header field with incorrect length");

        return FUNC_0(VAR_5, VAR_2);
    }

    return FUNC_1(VAR_5, VAR_6, VAR_7,
                                           FUNC_6);
}
