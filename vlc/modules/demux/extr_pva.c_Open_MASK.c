
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef char uint8_t ;
struct TYPE_10__ {int b_packetized; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_9__ {int force; } ;
struct TYPE_11__ {int out; TYPE_4__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; int s; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_12__ {int i_vc; int i_ac; int b_pcr_audio; int * p_es; int * p_pes; void* p_video; void* p_audio; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 void* FUNC_2 (int ,TYPE_2__*) ;
 TYPE_4__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char const**,int) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;
    es_format_t VAR_12;
    const uint8_t *VAR_13;

    if( FUNC_5( VAR_10->s, &VAR_13, 8 ) < 8 ) return VAR_6;
    if( VAR_13[0] != 'A' || VAR_13[1] != 'V' || VAR_13[4] != 0x55 )
    {

        if( !VAR_10->obj.force || FUNC_0( VAR_10 ) )
            return VAR_6;
    }

    VAR_11 = FUNC_3( sizeof( demux_sys_t ) );
    if( FUNC_4(VAR_11 == ((void*)0)) )
        return VAR_7;


    VAR_10->pf_demux = VAR_2;
    VAR_10->pf_control = VAR_1;
    VAR_10->p_sys = VAR_11;


    FUNC_1( &VAR_12, VAR_0, VAR_4 );
    VAR_12.b_packetized = 0;
    VAR_11->p_audio = FUNC_2( VAR_10->out, &VAR_12 );

    FUNC_1( &VAR_12, VAR_3, VAR_5 );
    VAR_12.b_packetized = 0;
    VAR_11->p_video = FUNC_2( VAR_10->out, &VAR_12 );

    VAR_11->i_vc = -1;
    VAR_11->i_ac = -1;
    VAR_11->p_pes = ((void*)0);
    VAR_11->p_es = ((void*)0);

    VAR_11->b_pcr_audio = 0;

    return VAR_8;
}
