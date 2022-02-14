
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int queue; int free; } ;
typedef TYPE_1__ ngx_http_connection_pool_elt_t ;
struct TYPE_7__ {int log; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_8__ {TYPE_1__* data; int read; int fd; scalar_t__ close; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_5)
{
    ngx_http_connection_pool_elt_t *VAR_6;

    int VAR_7;
    char VAR_8[1];
    ngx_connection_t *VAR_9;

    FUNC_2(VAR_2, VAR_5->log, 0, "keepalive close handler");

    VAR_9 = VAR_5->data;

    if (VAR_9->close) {
        goto close;
    }

    VAR_7 = FUNC_5(VAR_9->fd, VAR_8, 1, VAR_0);

    if (VAR_7 == -1 && VAR_4 == VAR_1) {


        if (FUNC_0(VAR_9->read, 0) != VAR_3) {
            goto close;
        }

        return;
    }

close:

    VAR_6 = VAR_9->data;


    FUNC_2(VAR_2, VAR_5->log, 0,
                   "connection pool close connection");

    FUNC_1(VAR_9);

    FUNC_4(&VAR_6->queue);
    FUNC_3(VAR_6->free, &VAR_6->queue);
}
