
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_8__ {int size; int count; int iovs; } ;
typedef TYPE_2__ ngx_iovec_t ;
typedef int ngx_err_t ;
struct TYPE_9__ {TYPE_1__* write; int log; int fd; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_7__ {int error; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;

ssize_t
FUNC_4(ngx_connection_t *VAR_4, ngx_iovec_t *VAR_5)
{
    ssize_t VAR_6;
    ngx_err_t VAR_7;

eintr:

    VAR_6 = FUNC_3(VAR_4->fd, VAR_5->iovs, VAR_5->count);

    FUNC_2(VAR_2, VAR_4->log, 0,
                   "writev: %z of %uz", VAR_6, VAR_5->size);

    if (VAR_6 == -1) {
        VAR_7 = VAR_3;

        switch (VAR_7) {
        case 129:
            FUNC_1(VAR_2, VAR_4->log, VAR_7,
                           "writev() not ready");
            return VAR_0;

        case 128:
            FUNC_1(VAR_2, VAR_4->log, VAR_7,
                           "writev() was interrupted");
            goto eintr;

        default:
            VAR_4->write->error = 1;
            FUNC_0(VAR_4, VAR_7, "writev() failed");
            return VAR_1;
        }
    }

    return VAR_6;
}
