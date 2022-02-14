
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {size_t size; int count; int iovs; } ;
typedef TYPE_2__ ngx_iovec_t ;
struct TYPE_6__ {int data; } ;
struct TYPE_8__ {scalar_t__ sys_offset; int offset; TYPE_1__ name; int log; int fd; } ;
typedef TYPE_3__ ngx_file_t ;
typedef scalar_t__ ngx_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,size_t,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int ,...) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_6(ngx_file_t *VAR_6, ngx_iovec_t *VAR_7, off_t VAR_8)
{
    ssize_t VAR_9;
    ngx_err_t VAR_10;

    FUNC_2(VAR_3, VAR_6->log, 0,
                   "writev: %d, %uz, %O", VAR_6->fd, VAR_7->size, VAR_8);
    if (VAR_6->sys_offset != VAR_8) {
        if (FUNC_0(VAR_6->fd, VAR_8, VAR_4) == -1) {
            FUNC_3(VAR_2, VAR_6->log, VAR_5,
                          "lseek() \"%s\" failed", VAR_6->name.data);
            return VAR_1;
        }

        VAR_6->sys_offset = VAR_8;
    }

eintr:

    VAR_9 = FUNC_5(VAR_6->fd, VAR_7->iovs, VAR_7->count);

    if (VAR_9 == -1) {
        VAR_10 = VAR_5;

        if (VAR_10 == VAR_0) {
            FUNC_1(VAR_3, VAR_6->log, VAR_10,
                           "writev() was interrupted");
            goto eintr;
        }

        FUNC_3(VAR_2, VAR_6->log, VAR_10,
                      "writev() \"%s\" failed", VAR_6->name.data);
        return VAR_1;
    }

    if ((size_t) VAR_9 != VAR_7->size) {
        FUNC_3(VAR_2, VAR_6->log, 0,
                      "writev() \"%s\" has written only %z of %uz",
                      VAR_6->name.data, VAR_9, VAR_7->size);
        return VAR_1;
    }

    VAR_6->sys_offset += VAR_9;



    VAR_6->offset += VAR_9;

    return VAR_9;
}
