
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {size_t index; int log; scalar_t__ active; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int,int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int ,int ,int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_event_t *VAR_10, ngx_int_t VAR_11, ngx_uint_t VAR_12)
{
    ngx_event_t *VAR_13;
    ngx_connection_t *VAR_14;

    VAR_14 = VAR_10->data;

    VAR_10->active = 0;

    if (VAR_10->index == VAR_0) {
        return VAR_2;
    }

    FUNC_1(VAR_1, VAR_10->log, 0,
                   "select del event fd:%d ev:%i", VAR_14->fd, VAR_11);

    if (VAR_11 == VAR_3) {
        FUNC_0(VAR_14->fd, &VAR_6);

    } else if (VAR_11 == VAR_4) {
        FUNC_0(VAR_14->fd, &VAR_7);
    }

    if (VAR_8 == VAR_14->fd) {
        VAR_8 = -1;
    }

    if (VAR_10->index < --VAR_9) {
        VAR_13 = VAR_5[VAR_9];
        VAR_5[VAR_10->index] = VAR_13;
        VAR_13->index = VAR_10->index;
    }

    VAR_10->index = VAR_0;

    return VAR_2;
}
