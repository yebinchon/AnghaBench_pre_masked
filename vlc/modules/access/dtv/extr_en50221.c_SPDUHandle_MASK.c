
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_9__ {int i_resource_id; int (* pf_close ) (TYPE_2__*,int) ;int (* pf_handle ) (TYPE_2__*,int,int*,int) ;} ;







 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int*,int) ;
 int FUNC_2 (TYPE_2__*,int,int*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_2__*,int,int*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6( cam_t * VAR_0, uint8_t VAR_1,
                        uint8_t *VAR_2, int VAR_3 )
{
    int VAR_4;

    switch ( VAR_2[0] )
    {
    case 128:
        if ( VAR_3 <= 4 )
            return;
        VAR_4 = ((int)VAR_2[2] << 8) | VAR_2[3];
        VAR_0->p_sessions[VAR_4 - 1].pf_handle( VAR_0, VAR_4,
                                                       VAR_2 + 4, VAR_3 - 4 );
        break;

    case 129:
        if ( VAR_3 != 6 || VAR_2[1] != 0x4 )
            return;
        FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3 );
        break;

    case 130:
        if ( VAR_3 != 9 || VAR_2[1] != 0x7 )
            return;
        FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3 );
        break;

    case 132:
        if ( VAR_3 != 4 || VAR_2[1] != 0x2 )
            return;
        VAR_4 = ((int)VAR_2[2] << 8) | VAR_2[3];
        FUNC_0( VAR_0, VAR_4 );
        break;

    case 131:
        if ( VAR_3 != 5 || VAR_2[1] != 0x3 )
            return;
        VAR_4 = ((int)VAR_2[3] << 8) | VAR_2[4];
        if ( VAR_2[2] )
        {
            FUNC_3( VAR_0->obj,
                     "closing a session which is not allocated (%d)",
                     VAR_4 );
        }
        else
        {
            if ( VAR_0->p_sessions[VAR_4 - 1].pf_close != ((void*)0) )
                VAR_0->p_sessions[VAR_4 - 1].pf_close( VAR_0,
                                                              VAR_4 );
            VAR_0->p_sessions[VAR_4 - 1].i_resource_id = 0;
        }
        break;

    default:
        FUNC_3( VAR_0->obj, "unexpected tag in SPDUHandle (%x)", VAR_2[0] );
        break;
    }
}
