
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void** data; int log; int handler; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_12__ {int connection_n; int log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_13__ {int delay; int name; int handler; } ;
typedef TYPE_3__ ngx_cache_manager_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_9(ngx_cycle_t *VAR_7, void *VAR_8)
{
    ngx_cache_manager_ctx_t *VAR_9 = VAR_8;

    void *VAR_10[4];
    ngx_event_t VAR_11;





    VAR_2 = VAR_1;

    FUNC_2(VAR_7);


    VAR_7->connection_n = 512;

    FUNC_8(VAR_7, -1);

    FUNC_4(&VAR_11, sizeof(ngx_event_t));
    VAR_11.handler = VAR_9->handler;
    VAR_11.data = VAR_10;
    VAR_11.log = VAR_7->log;
    VAR_10[3] = (void *) -1;

    VAR_6 = 0;

    FUNC_7(VAR_9->name);

    FUNC_1(&VAR_11, VAR_9->delay);

    for ( ;; ) {

        if (VAR_5 || VAR_3) {
            FUNC_3(VAR_0, VAR_7->log, 0, "exiting");
            FUNC_0(0);
        }

        if (VAR_4) {
            VAR_4 = 0;
            FUNC_3(VAR_0, VAR_7->log, 0, "reopening logs");
            FUNC_6(VAR_7, -1);
        }

        FUNC_5(VAR_7);
    }
}
