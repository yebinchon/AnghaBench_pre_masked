
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int socklen_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {TYPE_2__* log; int fd; TYPE_1__* write; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_7__ {char* action; } ;
struct TYPE_6__ {int kq_errno; scalar_t__ pending_eof; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,void*,int*) ;
 int FUNC_1 (TYPE_3__*,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;

ngx_int_t
FUNC_2(ngx_connection_t *VAR_7)
{
    int VAR_8;
    socklen_t VAR_9;
    {
        VAR_8 = 0;
        VAR_9 = sizeof(int);






        if (FUNC_0(VAR_7->fd, VAR_3, VAR_4, (void *) &VAR_8, &VAR_9)
            == -1)
        {
            VAR_8 = VAR_5;
        }

        if (VAR_8) {
            VAR_7->log->action = "connecting to upstream";
            (void) FUNC_1(VAR_7, VAR_8, "connect() failed");
            return VAR_0;
        }
    }

    return VAR_1;
}
