
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_3__ {int fd; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__,char*,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_connection_t *VAR_6)
{
    char VAR_7[1];
    ngx_int_t VAR_8;
    ngx_err_t VAR_9;

    VAR_8 = FUNC_1(VAR_6->fd, VAR_7, 1, VAR_0);
    VAR_9 = VAR_5;

    FUNC_0(VAR_3, VAR_6->log, VAR_9,
                   "http check upstream recv(): %i, fd: %d",
                   VAR_8, VAR_6->fd);

    if (VAR_8 == 1 || (VAR_8 == -1 && VAR_9 == VAR_1)) {
        return VAR_4;
    } else {
        return VAR_2;
    }
}
