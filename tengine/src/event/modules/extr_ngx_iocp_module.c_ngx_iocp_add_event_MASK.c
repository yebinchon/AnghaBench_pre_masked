
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int ovlp; int log; scalar_t__ data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_9__ {int log; scalar_t__ fd; TYPE_1__* write; TYPE_2__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_7__ {int active; } ;
struct TYPE_6__ {int active; } ;
typedef int HANDLE ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,int ,int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_6, ngx_int_t VAR_7, ngx_uint_t VAR_8)
{
    ngx_connection_t *VAR_9;

    VAR_9 = (ngx_connection_t *) VAR_6->data;

    VAR_9->read->active = 1;
    VAR_9->write->active = 1;

    FUNC_1(VAR_2, VAR_6->log, 0,
                   "iocp add: fd:%d k:%ui ov:%p", VAR_9->fd, VAR_8, &VAR_6->ovlp);

    if (FUNC_0((HANDLE) VAR_9->fd, VAR_4, VAR_8, 0) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_9->log, VAR_5,
                      "CreateIoCompletionPort() failed");
        return VAR_0;
    }

    return VAR_3;
}
