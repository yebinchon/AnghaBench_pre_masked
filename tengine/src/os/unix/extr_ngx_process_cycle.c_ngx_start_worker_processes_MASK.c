
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_10__ {size_t slot; int fd; int pid; int command; } ;
typedef TYPE_2__ ngx_channel_t ;
struct TYPE_11__ {int * channel; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 size_t VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,void*,char*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(ngx_cycle_t *VAR_5, ngx_int_t VAR_6, ngx_int_t VAR_7)
{
    ngx_int_t VAR_8;
    ngx_channel_t VAR_9;

    FUNC_0(VAR_1, VAR_5->log, 0, "start worker processes");

    FUNC_1(&VAR_9, sizeof(ngx_channel_t));

    VAR_9.command = VAR_0;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

        FUNC_3(VAR_5, VAR_4,
                          (void *) (intptr_t) VAR_8, "worker process", VAR_7);

        VAR_9.pid = VAR_3[VAR_2].pid;
        VAR_9.slot = VAR_2;
        VAR_9.fd = VAR_3[VAR_2].channel[0];

        FUNC_2(VAR_5, &VAR_9);
    }
}
