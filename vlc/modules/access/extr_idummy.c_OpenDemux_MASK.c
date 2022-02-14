
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_object_t ;
struct TYPE_7__ {char* psz_location; void* pf_control; void* pf_demux; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {scalar_t__ length; scalar_t__ end; } ;
typedef TYPE_2__ demux_sys_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int) ;
 double FUNC_5 (char const*) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (double) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_8 )
{
    demux_t *VAR_9 = (demux_t*)VAR_8;
    const char *VAR_10 = VAR_9->psz_location;

    VAR_9->p_sys = ((void*)0);


    if( !FUNC_3( VAR_10, "nop" ) )
    {
nop:
        FUNC_2( VAR_9, "command `nop'" );
        VAR_9->pf_demux = VAR_3;
        VAR_9->pf_control = VAR_1;
        return VAR_7;
    }


    if( !FUNC_3( VAR_10, "quit" ) )
    {
        FUNC_2( VAR_9, "command `quit'" );
        VAR_9->pf_demux = VAR_3;
        VAR_9->pf_control = VAR_1;
        FUNC_0( FUNC_7(VAR_9) );
        return VAR_7;
    }

    if( !FUNC_3( VAR_10, "pause" ) )
    {
        FUNC_2( VAR_9, "command `pause'" );

        VAR_9->pf_demux = VAR_2;
        VAR_9->pf_control = VAR_1;
        return VAR_7;
    }


    if( !FUNC_4( VAR_10, "pause:", 6 ) )
    {
        double VAR_11 = FUNC_5( VAR_10 + 6 );
        vlc_tick_t VAR_12 = FUNC_8( VAR_11 );

        FUNC_2( VAR_9, "command `pause %f'", VAR_11 );
        if( VAR_12 == 0 )
            goto nop;

        demux_sys_t *VAR_13 = FUNC_6( VAR_8, sizeof( *VAR_13 ) );
        if( VAR_13 == ((void*)0) )
            return VAR_6;

        VAR_13->end = FUNC_9() + VAR_12;
        VAR_13->length = VAR_12;

        VAR_9->p_sys = VAR_13;
        VAR_9->pf_demux = VAR_4;
        VAR_9->pf_control = VAR_0;
        return VAR_7;
    }

    FUNC_1( VAR_9, "unknown command `%s'", VAR_10 );
    return VAR_5;
}
