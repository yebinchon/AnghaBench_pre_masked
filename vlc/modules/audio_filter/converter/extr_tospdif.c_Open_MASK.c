
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {scalar_t__ i_format; } ;
struct TYPE_9__ {TYPE_3__ audio; } ;
struct TYPE_6__ {scalar_t__ i_format; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct TYPE_10__ {int pf_flush; int pf_audio_filter; int * p_sys; TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;
typedef int filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_13 )
{
    filter_t *VAR_14 = (filter_t *)VAR_13;
    filter_sys_t *VAR_15;

    if( ( VAR_14->fmt_in.audio.i_format != VAR_3 &&
          VAR_14->fmt_in.audio.i_format != VAR_4 &&
          VAR_14->fmt_in.audio.i_format != VAR_2 &&
          VAR_14->fmt_in.audio.i_format != VAR_5 &&
          VAR_14->fmt_in.audio.i_format != VAR_6 &&
          VAR_14->fmt_in.audio.i_format != VAR_9 ) ||
        ( VAR_14->fmt_out.audio.i_format != VAR_8 &&
          VAR_14->fmt_out.audio.i_format != VAR_7 ) )
        return VAR_10;

    VAR_15 = VAR_14->p_sys = FUNC_0( 1, sizeof(filter_sys_t) );
    if( FUNC_1( VAR_15 == ((void*)0) ) )
        return VAR_11;

    VAR_14->pf_audio_filter = VAR_0;
    VAR_14->pf_flush = VAR_1;

    return VAR_12;
}
