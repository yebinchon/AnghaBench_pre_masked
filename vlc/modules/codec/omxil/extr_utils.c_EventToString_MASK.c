
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int psz_names ;
typedef size_t OMX_EVENTTYPE ;



const char *FUNC_0(OMX_EVENTTYPE VAR_0)
{
    static const char *VAR_1[] = {
        "OMX_EventCmdComplete", "OMX_EventError", "OMX_EventMark",
        "OMX_EventPortSettingsChanged", "OMX_EventBufferFlag",
        "OMX_EventResourcesAcquired", "OMX_EventComponentResumed",
        "OMX_EventDynamicResourcesAvailable", "OMX_EventPortFormatDetected",
        "OMX_Event unknown"
    };

    if((unsigned int)VAR_0 > sizeof(VAR_1)/sizeof(char*)-1)
        VAR_0 = (OMX_EVENTTYPE)(sizeof(VAR_1)/sizeof(char*)-1);
    return VAR_1[VAR_0];
}
