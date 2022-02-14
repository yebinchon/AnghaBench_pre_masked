
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int event_data; void* data_2; void* data_1; int event; } ;
struct TYPE_5__ {int mutex; int cond; TYPE_2__** pp_last_event; } ;
typedef TYPE_1__ OmxEventQueue ;
typedef TYPE_2__ OmxEvent ;
typedef void* OMX_U32 ;
typedef int OMX_PTR ;
typedef int OMX_EVENTTYPE ;
typedef int OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

OMX_ERRORTYPE FUNC_4(OmxEventQueue *VAR_2, OMX_EVENTTYPE VAR_3,
    OMX_U32 VAR_4, OMX_U32 VAR_5, OMX_PTR VAR_6)
{
    OmxEvent *VAR_7;

    VAR_7 = FUNC_0(sizeof(OmxEvent));
    if(!VAR_7) return VAR_0;

    VAR_7->event = VAR_3;
    VAR_7->data_1 = VAR_4;
    VAR_7->data_2 = VAR_5;
    VAR_7->event_data = VAR_6;
    VAR_7->next = 0;

    FUNC_2(&VAR_2->mutex);
    *VAR_2->pp_last_event = VAR_7;
    VAR_2->pp_last_event = &VAR_7->next;
    FUNC_1(&VAR_2->cond);
    FUNC_3(&VAR_2->mutex);
    return VAR_1;
}
