
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int es_format_t ;
struct TYPE_10__ {int force; } ;
struct TYPE_11__ {TYPE_3__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {float f_fps; int p_packetizer; scalar_t__ i_dts; int * p_es; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 float FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_9( vlc_object_t * VAR_7 )
{
    demux_t *VAR_8 = (demux_t*)VAR_7;
    demux_sys_t *VAR_9;
    const uint8_t *VAR_10;
    es_format_t VAR_11;

    if( FUNC_8( VAR_8->s, &VAR_10, 4 ) < 4 ) return VAR_4;

    if( VAR_10[0] != 0x00 || VAR_10[1] != 0x00 ||
        VAR_10[2] != 0x01 || VAR_10[3] != 0x0f )
    {
        if( !VAR_8->obj.force )
        {
            FUNC_5( VAR_8, "vc-1 module discarded (no startcode)" );
            return VAR_4;
        }

        FUNC_4( VAR_8, "this doesn't look like a VC-1 ES stream, "
                 "continuing anyway" );
    }

    VAR_9 = FUNC_3( sizeof( demux_sys_t ) );
    if( FUNC_6(VAR_9 == ((void*)0)) )
        return VAR_5;

    VAR_8->pf_demux = VAR_1;
    VAR_8->pf_control= VAR_0;
    VAR_8->p_sys = VAR_9;
    VAR_9->p_es = ((void*)0);
    VAR_9->i_dts = 0;
    VAR_9->f_fps = FUNC_7( VAR_8, "vc1-fps" );
    if( VAR_9->f_fps < 0.001f )
        VAR_9->f_fps = 0.0f;


    FUNC_1( &VAR_11, VAR_2, VAR_3 );
    VAR_9->p_packetizer = FUNC_0( VAR_8, &VAR_11, "VC-1" );
    if( !VAR_9->p_packetizer )
    {
        FUNC_2( VAR_9 );
        return VAR_4;
    }
    return VAR_6;
}
