
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {int force; } ;
struct TYPE_7__ {int pf_control; int pf_demux; TYPE_3__* p_sys; TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int b_start_record; scalar_t__ i_pcr_inc; scalar_t__ i_time; scalar_t__ i_pcr; int * p_sub; int fmt_sub; int * p_video; int fmt_video; int * p_audio; int fmt_audio; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_3__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int const*,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_8 )
{
    demux_t *VAR_9 = (demux_t*)VAR_8;
    demux_sys_t *VAR_10;

    const uint8_t *VAR_11;

    if( FUNC_5( VAR_9->s, &VAR_11, 8 ) < 8 )
        return VAR_5;

    if( FUNC_3( VAR_11, "NSVf", 4 ) && FUNC_3( VAR_11, "NSVs", 4 ) )
    {

        if( !VAR_9->obj.force || FUNC_0( VAR_9 ) )
            return VAR_5;
    }

    VAR_10 = FUNC_2( sizeof( demux_sys_t ) );
    if( FUNC_4(VAR_10 == ((void*)0)) )
        return VAR_6;


    VAR_9->p_sys = VAR_10;
    VAR_9->pf_demux = VAR_2;
    VAR_9->pf_control = VAR_1;

    FUNC_1( &VAR_10->fmt_audio, VAR_0, 0 );
    VAR_10->p_audio = ((void*)0);

    FUNC_1( &VAR_10->fmt_video, VAR_4, 0 );
    VAR_10->p_video = ((void*)0);

    FUNC_1( &VAR_10->fmt_sub, VAR_3, 0 );
    VAR_10->p_sub = ((void*)0);

    VAR_10->i_pcr = 0;
    VAR_10->i_time = 0;
    VAR_10->i_pcr_inc = 0;

    VAR_10->b_start_record = 0;

    return VAR_7;
}
