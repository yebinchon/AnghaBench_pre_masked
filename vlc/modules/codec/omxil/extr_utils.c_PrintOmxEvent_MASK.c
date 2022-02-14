
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef scalar_t__ OMX_U32 ;
typedef int OMX_STATETYPE ;
typedef scalar_t__ OMX_PTR ;
typedef int OMX_EVENTTYPE ;
typedef int OMX_ERRORTYPE ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;



 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,int ,unsigned int,unsigned int,...) ;

void FUNC_5(vlc_object_t *VAR_0, OMX_EVENTTYPE VAR_1, OMX_U32 VAR_2,
    OMX_U32 VAR_3, OMX_PTR VAR_4)
{
    switch (VAR_1)
    {
    case 129:
        switch ((OMX_STATETYPE)VAR_2)
        {
        case 130:
            FUNC_4( VAR_0, "OmxEventHandler (%s, %s, %s)", FUNC_2(VAR_1),
                     FUNC_0(VAR_2), FUNC_3(VAR_3) );
            break;

        default:
            FUNC_4( VAR_0, "OmxEventHandler (%s, %s, %u)", FUNC_2(VAR_1),
                     FUNC_0(VAR_2), (unsigned int)VAR_3 );
            break;
        }
        break;

    case 128:
        FUNC_4( VAR_0, "OmxEventHandler (%s, %s, %u, %s)", FUNC_2(VAR_1),
                 FUNC_1((OMX_ERRORTYPE)VAR_2), (unsigned int)VAR_3,
                 (const char *)VAR_4);
        break;

    default:
        FUNC_4( VAR_0, "OmxEventHandler (%s, %u, %u)", FUNC_2(VAR_1),
                 (unsigned int)VAR_2, (unsigned int)VAR_3 );
        break;
    }
}
