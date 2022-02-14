
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int psz_names ;
typedef size_t OMX_STATETYPE ;



const char *FUNC_0(OMX_STATETYPE VAR_0)
{
    static const char *VAR_1[] = {
        "OMX_StateInvalid", "OMX_StateLoaded", "OMX_StateIdle",
        "OMX_StateExecuting", "OMX_StatePause", "OMX_StateWaitForResources",
        "OMX_State unknown"
    };

    if((unsigned int)VAR_0 > sizeof(VAR_1)/sizeof(char*)-1)
        VAR_0 = (OMX_STATETYPE)(sizeof(VAR_1)/sizeof(char*)-1);
    return VAR_1[VAR_0];
}
