
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int i_format; int i_rate; } ;
struct TYPE_10__ {TYPE_7__ audio; } ;
struct TYPE_9__ {TYPE_7__ audio; } ;
struct TYPE_11__ {int pf_audio_filter; TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {int lock; } ;
typedef TYPE_4__ filter_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_5 )
{
    filter_t *VAR_6 = (filter_t *)VAR_5;


    filter_sys_t *VAR_7 = VAR_6->p_sys = FUNC_3( sizeof( *VAR_7 ) );
    if( !VAR_7 )
        return VAR_3;

    FUNC_5( &VAR_7->lock );
    if( FUNC_0( VAR_6, VAR_6->fmt_in.audio.i_rate ) != VAR_4 )
    {
        FUNC_4( &VAR_7->lock );
        FUNC_2( VAR_7 );
        return VAR_2;
    }

    VAR_6->fmt_in.audio.i_format = VAR_1;
    FUNC_1(&VAR_6->fmt_in.audio);
    VAR_6->fmt_out.audio = VAR_6->fmt_in.audio;
    VAR_6->pf_audio_filter = VAR_0;

    return VAR_4;
}
