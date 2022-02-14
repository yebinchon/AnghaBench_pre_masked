
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {scalar_t__ worker; int reuseport; } ;
typedef TYPE_2__ ngx_listening_t ;
struct TYPE_7__ {scalar_t__ nelts; TYPE_2__* elts; } ;
struct TYPE_9__ {scalar_t__ connection_n; TYPE_1__ listening; int log; int conf_ctx; } ;
typedef TYPE_3__ ngx_cycle_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;

__attribute__((used)) static char *
FUNC_3(ngx_cycle_t *VAR_5, void *VAR_6)
{





    if (FUNC_1(VAR_5->conf_ctx, VAR_4) == ((void*)0)) {
        FUNC_2(VAR_2, VAR_5->log, 0,
                      "no \"events\" section in configuration");
        return VAR_0;
    }

    if (VAR_5->connection_n < VAR_5->listening.nelts + 1) {






        FUNC_2(VAR_2, VAR_5->log, 0,
                      "%ui worker_connections are not enough "
                      "for %ui listening sockets",
                      VAR_5->connection_n, VAR_5->listening.nelts);

        return VAR_0;
    }
    return VAR_1;
}
