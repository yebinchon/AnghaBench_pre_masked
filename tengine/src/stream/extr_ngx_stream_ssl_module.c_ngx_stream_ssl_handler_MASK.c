
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int verify; int ssl; } ;
typedef TYPE_2__ ngx_stream_ssl_conf_t ;
struct TYPE_12__ {TYPE_4__* connection; int ssl; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {TYPE_1__* ssl; TYPE_9__* log; } ;
typedef TYPE_4__ ngx_connection_t ;
typedef int X509 ;
struct TYPE_14__ {char* action; } ;
struct TYPE_10__ {int connection; int session_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 long VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (long) ;
 int FUNC_5 (int ,TYPE_9__*,int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (long) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_4__*) ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_stream_session_t *VAR_5)
{
    long VAR_6;
    X509 *VAR_7;
    ngx_int_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_stream_ssl_conf_t *VAR_10;

    if (!VAR_5->ssl) {
        return VAR_2;
    }

    VAR_9 = VAR_5->connection;

    VAR_10 = FUNC_8(VAR_5, VAR_4);

    if (VAR_9->ssl == ((void*)0)) {
        VAR_9->log->action = "SSL handshaking";

        VAR_8 = FUNC_9(&VAR_10->ssl, VAR_9);

        if (VAR_8 != VAR_2) {
            return VAR_8;
        }
    }

    if (VAR_10->verify) {
        VAR_6 = FUNC_2(VAR_9->ssl->connection);

        if (VAR_6 != VAR_3
            && (VAR_10->verify != 3 || !FUNC_7(VAR_6)))
        {
            FUNC_5(VAR_1, VAR_9->log, 0,
                          "client SSL certificate verify error: (%l:%s)",
                          VAR_6, FUNC_4(VAR_6));

            FUNC_6(VAR_9->ssl->session_ctx,
                                       (FUNC_0(VAR_9->ssl->connection)));
            return VAR_0;
        }

        if (VAR_10->verify == 1) {
            VAR_7 = FUNC_1(VAR_9->ssl->connection);

            if (VAR_7 == ((void*)0)) {
                FUNC_5(VAR_1, VAR_9->log, 0,
                              "client sent no required SSL certificate");

                FUNC_6(VAR_9->ssl->session_ctx,
                                       (FUNC_0(VAR_9->ssl->connection)));
                return VAR_0;
            }

            FUNC_3(VAR_7);
        }
    }

    return VAR_2;
}
