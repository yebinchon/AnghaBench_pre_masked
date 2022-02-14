
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {size_t index; int active; scalar_t__ write; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (int ,int ,int ,char*,int,int ) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_12, ngx_int_t VAR_13, ngx_uint_t VAR_14)
{
    ngx_connection_t *VAR_15;

    VAR_15 = VAR_12->data;

    FUNC_1(VAR_3, VAR_12->log, 0,
                   "select add event fd:%d ev:%i", VAR_15->fd, VAR_13);

    if (VAR_12->index != VAR_1) {
        FUNC_2(VAR_2, VAR_12->log, 0,
                      "select event fd:%d ev:%i is already set", VAR_15->fd, VAR_13);
        return VAR_4;
    }

    if ((VAR_13 == VAR_5 && VAR_12->write)
        || (VAR_13 == VAR_6 && !VAR_12->write))
    {
        FUNC_2(VAR_2, VAR_12->log, 0,
                      "invalid select %s event fd:%d ev:%i",
                      VAR_12->write ? "write" : "read", VAR_15->fd, VAR_13);
        return VAR_0;
    }

    if (VAR_13 == VAR_5) {
        FUNC_0(VAR_15->fd, &VAR_8);

    } else if (VAR_13 == VAR_6) {
        FUNC_0(VAR_15->fd, &VAR_9);
    }

    if (VAR_10 != -1 && VAR_10 < VAR_15->fd) {
        VAR_10 = VAR_15->fd;
    }

    VAR_12->active = 1;

    VAR_7[VAR_11] = VAR_12;
    VAR_12->index = VAR_11;
    VAR_11++;

    return VAR_4;
}
