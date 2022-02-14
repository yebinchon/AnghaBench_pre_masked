
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
typedef int off_t ;
typedef int ngx_err_t ;
struct TYPE_14__ {int log; TYPE_1__* write; int fd; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_15__ {scalar_t__ file_pos; TYPE_3__* file; } ;
typedef TYPE_5__ ngx_buf_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {int data; } ;
struct TYPE_13__ {TYPE_2__ name; int fd; scalar_t__ thread_handler; } ;
struct TYPE_11__ {int error; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,size_t) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,size_t) ;
 int FUNC_4 (int ,int ,int ,char*,int,size_t,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_7(ngx_connection_t *VAR_5, ngx_buf_t *VAR_6, size_t VAR_7)
{



    int32_t VAR_8;

    ssize_t VAR_9;
    ngx_err_t VAR_10;
    VAR_8 = (int32_t) VAR_6->file_pos;


eintr:

    FUNC_3(VAR_3, VAR_5->log, 0,
                   "sendfile: @%O %uz", VAR_6->file_pos, VAR_7);

    VAR_9 = FUNC_6(VAR_5->fd, VAR_6->file->fd, &VAR_8, VAR_7);

    if (VAR_9 == -1) {
        VAR_10 = VAR_4;

        switch (VAR_10) {
        case 129:
            FUNC_2(VAR_3, VAR_5->log, VAR_10,
                           "sendfile() is not ready");
            return VAR_0;

        case 128:
            FUNC_2(VAR_3, VAR_5->log, VAR_10,
                           "sendfile() was interrupted");
            goto eintr;

        default:
            VAR_5->write->error = 1;
            FUNC_0(VAR_5, VAR_10, "sendfile() failed");
            return VAR_1;
        }
    }

    if (VAR_9 == 0) {





        FUNC_5(VAR_2, VAR_5->log, 0,
                      "sendfile() reported that \"%s\" was truncated at %O",
                      VAR_6->file->name.data, VAR_6->file_pos);

        return VAR_1;
    }

    FUNC_4(VAR_3, VAR_5->log, 0, "sendfile: %z of %uz @%O",
                   VAR_9, VAR_7, VAR_6->file_pos);

    return VAR_9;
}
