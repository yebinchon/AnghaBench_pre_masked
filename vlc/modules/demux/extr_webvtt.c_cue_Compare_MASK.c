
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_start; scalar_t__ i_stop; } ;
typedef TYPE_1__ webvtt_cue_t ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    webvtt_cue_t *VAR_2 = (webvtt_cue_t *)VAR_0;
    webvtt_cue_t *VAR_3 = (webvtt_cue_t *)VAR_1;
    if( VAR_2->i_start == VAR_3->i_start )
    {
        if( VAR_2->i_stop > VAR_3->i_stop )
            return -1;
        else
            return ( VAR_2->i_stop < VAR_3->i_stop ) ? 1 : 0;
    }
    else return VAR_2->i_start < VAR_3->i_start ? -1 : 1;
}
