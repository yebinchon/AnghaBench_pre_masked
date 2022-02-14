
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {scalar_t__ sys_offset; int offset; TYPE_1__ name; int log; int fd; } ;
typedef TYPE_2__ ngx_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,size_t,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int *,size_t,scalar_t__) ;
 int FUNC_4 (int ,int *,size_t) ;

ssize_t
FUNC_5(ngx_file_t *VAR_5, u_char *VAR_6, size_t VAR_7, off_t VAR_8)
{
    ssize_t VAR_9;

    FUNC_1(VAR_2, VAR_5->log, 0,
                   "read: %d, %p, %uz, %O", VAR_5->fd, VAR_6, VAR_7, VAR_8);
    if (VAR_5->sys_offset != VAR_8) {
        if (FUNC_0(VAR_5->fd, VAR_8, VAR_3) == -1) {
            FUNC_2(VAR_1, VAR_5->log, VAR_4,
                          "lseek() \"%s\" failed", VAR_5->name.data);
            return VAR_0;
        }

        VAR_5->sys_offset = VAR_8;
    }

    VAR_9 = FUNC_4(VAR_5->fd, VAR_6, VAR_7);

    if (VAR_9 == -1) {
        FUNC_2(VAR_1, VAR_5->log, VAR_4,
                      "read() \"%s\" failed", VAR_5->name.data);
        return VAR_0;
    }

    VAR_5->sys_offset += VAR_9;



    VAR_5->offset += VAR_9;

    return VAR_9;
}
