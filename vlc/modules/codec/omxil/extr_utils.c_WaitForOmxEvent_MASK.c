
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {int event_data; int data_2; int data_1; int event; struct TYPE_6__* next; } ;
struct TYPE_5__ {int mutex; TYPE_2__* p_events; TYPE_2__** pp_last_event; int cond; } ;
typedef TYPE_1__ OmxEventQueue ;
typedef TYPE_2__ OmxEvent ;
typedef int OMX_U32 ;
typedef int OMX_PTR ;
typedef int OMX_EVENTTYPE ;
typedef int OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;

OMX_ERRORTYPE FUNC_6(OmxEventQueue *VAR_2, OMX_EVENTTYPE *VAR_3,
    OMX_U32 *VAR_4, OMX_U32 *VAR_5, OMX_PTR *VAR_6)
{
    OmxEvent *VAR_7;
    vlc_tick_t VAR_8 = FUNC_5() + FUNC_0(1);

    FUNC_3(&VAR_2->mutex);

    while ((VAR_7 = VAR_2->p_events) == ((void*)0))
        if (FUNC_2(&VAR_2->cond, &VAR_2->mutex, VAR_8))
            break;

    if(VAR_7)
    {
        VAR_2->p_events = VAR_7->next;
        if(!VAR_2->p_events) VAR_2->pp_last_event = &VAR_2->p_events;
    }

    FUNC_4(&VAR_2->mutex);

    if(VAR_7)
    {
        if(VAR_3) *VAR_3 = VAR_7->event;
        if(VAR_4) *VAR_4 = VAR_7->data_1;
        if(VAR_5) *VAR_5 = VAR_7->data_2;
        if(VAR_6) *VAR_6 = VAR_7->event_data;
        FUNC_1(VAR_7);
        return VAR_0;
    }

    return VAR_1;
}
