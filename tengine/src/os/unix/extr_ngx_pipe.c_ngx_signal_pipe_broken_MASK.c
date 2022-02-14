
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_pid_t ;
typedef int ngx_log_t ;
typedef size_t ngx_int_t ;
struct TYPE_4__ {int fd; int command; int pid; } ;
typedef TYPE_1__ ngx_channel_t ;
struct TYPE_5__ {int pid; int * channel; scalar_t__ detached; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int,int *) ;

__attribute__((used)) static void
FUNC_1(ngx_log_t *VAR_3, ngx_pid_t VAR_4)
{
    ngx_int_t VAR_5;
    ngx_channel_t VAR_6;

    VAR_6.fd = -1;
    VAR_6.pid = VAR_4;
    VAR_6.command = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

        if (VAR_2[VAR_5].detached || VAR_2[VAR_5].pid == -1) {
            continue;
        }

        FUNC_0(VAR_2[VAR_5].channel[0],
                          &VAR_6, sizeof(ngx_channel_t), VAR_3);
    }
}
