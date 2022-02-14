
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int es_format_t ;
struct TYPE_9__ {scalar_t__ force; } ;
struct TYPE_10__ {int out; TYPE_3__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {int b_start; int * p_es; int p_packetizer; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_10( vlc_object_t * VAR_6 )
{
    demux_t *VAR_7 = (demux_t*)VAR_6;
    demux_sys_t *VAR_8;
    bool VAR_9 = 0;

    const uint8_t *VAR_10;

    es_format_t VAR_11;

    if( FUNC_9( VAR_7->s, &VAR_10, 8 ) < 8 )
    {
        FUNC_7( VAR_7, "cannot peek" );
        return VAR_4;
    }

    if( VAR_7->obj.force )
        VAR_9 = 1;

    if( VAR_10[0] != 0x00 || VAR_10[1] != 0x00 || VAR_10[2] != 0x01 )
    {
        if( !VAR_9 ) return VAR_4;

        FUNC_8( VAR_7, "this doesn't look like an MPEG ES stream, continuing" );
    }

    if( FUNC_0( VAR_10 ) != VAR_5 )
    {
        if( !VAR_9 ) return VAR_4;
        FUNC_8( VAR_7, "this seems to be a system stream (PS plug-in ?), but continuing" );
    }
    VAR_7->pf_demux = VAR_1;
    VAR_7->pf_control= VAR_0;
    VAR_7->p_sys = VAR_8 = FUNC_6( sizeof( demux_sys_t ) );
    VAR_8->b_start = 1;
    VAR_8->p_es = ((void*)0);


    FUNC_3( &VAR_11, VAR_2, VAR_3 );
    VAR_8->p_packetizer = FUNC_2( VAR_7, &VAR_11, "mpeg video" );
    if( !VAR_8->p_packetizer )
    {
        FUNC_5( VAR_8 );
        return VAR_4;
    }


    VAR_8->p_es = FUNC_4( VAR_7->out, &VAR_11 );
    if( VAR_8->p_es == ((void*)0) )
    {
        FUNC_1( VAR_6 );
        return VAR_4;
    }

    return VAR_5;
}
