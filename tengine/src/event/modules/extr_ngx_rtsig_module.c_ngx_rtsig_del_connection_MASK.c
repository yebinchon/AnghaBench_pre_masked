
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_2__* write; TYPE_1__* read; int log; int fd; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_6__ {scalar_t__ active; } ;
struct TYPE_5__ {int disabled; scalar_t__ active; scalar_t__ accept; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_connection_t *VAR_10, ngx_uint_t VAR_11)
{
    FUNC_1(VAR_5, VAR_10->log, 0,
                   "rtsig del connection: fd:%d", VAR_10->fd);

    if ((VAR_11 & VAR_2) && VAR_10->read->accept) {

        FUNC_1(VAR_5, VAR_10->log, 0,
                       "rtsig disable connection: fd:%d", VAR_10->fd);

        VAR_10->read->active = 0;
        VAR_10->read->disabled = 1;
        return VAR_6;
    }

    if (VAR_11 & VAR_1) {
        VAR_10->read->active = 0;
        VAR_10->write->active = 0;
        return VAR_6;
    }

    if (FUNC_0(VAR_10->fd, VAR_0, VAR_8|VAR_7) == -1) {
        FUNC_2(VAR_4, VAR_10->log, VAR_9,
                      "fcntl(O_RDWR|O_NONBLOCK) failed");
        return VAR_3;
    }

    VAR_10->read->active = 0;
    VAR_10->write->active = 0;

    return VAR_6;
}
