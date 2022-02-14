
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int active; size_t index; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; TYPE_1__* read; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_7__ {short events; scalar_t__ revents; int fd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_9, ngx_int_t VAR_10, ngx_uint_t VAR_11)
{
    ngx_event_t *VAR_12;
    ngx_connection_t *VAR_13;

    VAR_13 = VAR_9->data;

    VAR_9->active = 1;

    if (VAR_9->index != VAR_0) {
        FUNC_2(VAR_1, VAR_9->log, 0,
                      "poll event fd:%d ev:%i is already set", VAR_13->fd, VAR_10);
        return VAR_3;
    }

    if (VAR_10 == VAR_4) {
        VAR_12 = VAR_13->write;




    } else {
        VAR_12 = VAR_13->read;



    }

    FUNC_1(VAR_2, VAR_9->log, 0,
                   "poll add event: fd:%d ev:%i", VAR_13->fd, VAR_10);

    if (VAR_12 == ((void*)0) || VAR_12->index == VAR_0) {
        VAR_7[VAR_8].fd = VAR_13->fd;
        VAR_7[VAR_8].events = (short) VAR_10;
        VAR_7[VAR_8].revents = 0;

        VAR_9->index = VAR_8;
        VAR_8++;

    } else {
        FUNC_0(VAR_2, VAR_9->log, 0,
                       "poll add index: %i", VAR_12->index);

        VAR_7[VAR_12->index].events |= (short) VAR_10;
        VAR_9->index = VAR_12->index;
    }

    return VAR_3;
}
