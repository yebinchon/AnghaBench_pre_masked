
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;
typedef int OmxEventQueue ;
typedef int OMX_U32 ;
typedef int OMX_PTR ;
typedef scalar_t__ OMX_EVENTTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,int *,int *,int *) ;
 scalar_t__ FUNC_2 () ;

OMX_ERRORTYPE FUNC_3(OmxEventQueue *VAR_2,
    OMX_EVENTTYPE VAR_3, OMX_U32 *VAR_4, OMX_U32 *VAR_5,
    OMX_PTR *VAR_6)
{
    OMX_ERRORTYPE VAR_7;
    OMX_EVENTTYPE VAR_8;
    vlc_tick_t VAR_9 = FUNC_2();

    while(1)
    {
        VAR_7 = FUNC_1(VAR_2, &VAR_8, VAR_4, VAR_5, VAR_6);
        if(VAR_7 != VAR_0) return VAR_7;

        if(VAR_8 == VAR_3) break;
        if(FUNC_2() - VAR_9 > FUNC_0(1)) return VAR_1;
    }

    return VAR_0;
}
