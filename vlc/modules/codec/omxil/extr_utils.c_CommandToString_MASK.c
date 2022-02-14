
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int psz_names ;
typedef size_t OMX_COMMANDTYPE ;



const char *FUNC_0(OMX_COMMANDTYPE VAR_0)
{
    static const char *VAR_1[] = {
        "OMX_CommandStateSet", "OMX_CommandFlush", "OMX_CommandPortDisable",
        "OMX_CommandPortEnable", "OMX_CommandMarkBuffer",
        "OMX_Command unknown"
    };

    if((unsigned int)VAR_0 > sizeof(VAR_1)/sizeof(char*)-1)
        VAR_0 = (OMX_COMMANDTYPE)(sizeof(VAR_1)/sizeof(char*)-1);
    return VAR_1[VAR_0];
}
