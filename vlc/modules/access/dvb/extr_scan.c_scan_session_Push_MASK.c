
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ p_nit; scalar_t__ p_sdt; scalar_t__ p_pat; } ;
struct TYPE_11__ {TYPE_1__ local; scalar_t__ b_use_nit; TYPE_4__* p_nithandle; scalar_t__ p_obj; TYPE_4__* p_sdthandle; TYPE_4__* p_pathandle; } ;
typedef TYPE_2__ scan_session_t ;
typedef int dvbpsi_pat_callback ;
typedef int dvbpsi_demux_new_cb_t ;
struct TYPE_12__ {void* p_sys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_6 ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,int const*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5( scan_session_t *VAR_7, const uint8_t *VAR_8 )
{
    if( VAR_8[0] != 0x47 )
        return 0;


    const int VAR_9 = ( (VAR_8[1]&0x1f)<<8) | VAR_8[2];
    if( VAR_9 == VAR_3 )
    {
        if( !VAR_7->p_pathandle )
        {
            VAR_7->p_pathandle = FUNC_2( &VAR_6, VAR_0 );
            if( !VAR_7->p_pathandle )
                return 0;

            VAR_7->p_pathandle->p_sys = (void *) VAR_7->p_obj;
            if( !FUNC_4( VAR_7->p_pathandle, (dvbpsi_pat_callback)VAR_1, VAR_7 ) )
            {
                FUNC_1( VAR_7->p_pathandle );
                VAR_7->p_pathandle = ((void*)0);
                return 0;
            }
        }
        if( VAR_7->p_pathandle )
            FUNC_3( VAR_7->p_pathandle, VAR_8 );
    }
    else if( VAR_9 == VAR_5 )
    {
        if( !VAR_7->p_sdthandle )
        {
            VAR_7->p_sdthandle = FUNC_2( &VAR_6, VAR_0 );
            if( !VAR_7->p_sdthandle )
                return 0;

            VAR_7->p_sdthandle->p_sys = (void *) VAR_7->p_obj;
            if( !FUNC_0( VAR_7->p_sdthandle, (dvbpsi_demux_new_cb_t)VAR_2, VAR_7 ) )
            {
                FUNC_1( VAR_7->p_sdthandle );
                VAR_7->p_sdthandle = ((void*)0);
                return 0;
            }
        }

        if( VAR_7->p_sdthandle )
            FUNC_3( VAR_7->p_sdthandle, VAR_8 );
    }
    else if( VAR_7->b_use_nit && VAR_9 == VAR_4 )
    {
        if( !VAR_7->p_nithandle )
        {
            VAR_7->p_nithandle = FUNC_2( &VAR_6, VAR_0 );
            if( !VAR_7->p_nithandle )
                return 0;

            VAR_7->p_nithandle->p_sys = (void *) VAR_7->p_obj;
            if( !FUNC_0( VAR_7->p_nithandle, (dvbpsi_demux_new_cb_t)VAR_2, VAR_7 ) )
            {
                FUNC_1( VAR_7->p_nithandle );
                VAR_7->p_nithandle = ((void*)0);
                return 0;
            }
        }
        if( VAR_7->p_nithandle )
            FUNC_3( VAR_7->p_nithandle, VAR_8 );
    }

    return VAR_7->local.p_pat && VAR_7->local.p_sdt &&
            (!VAR_7->b_use_nit || VAR_7->local.p_nit);
}
