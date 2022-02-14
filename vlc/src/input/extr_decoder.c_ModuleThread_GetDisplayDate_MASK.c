
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct decoder_owner {float output_rate; int p_clock; int lock; scalar_t__ paused; scalar_t__ b_waiting; } ;
typedef int decoder_t ;


 int VAR_0 ;
 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,float) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static vlc_tick_t FUNC_4( decoder_t *VAR_1,
                                       vlc_tick_t VAR_2, vlc_tick_t VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_0( VAR_1 );

    FUNC_2( &VAR_4->lock );
    if( VAR_4->b_waiting || VAR_4->paused )
        VAR_3 = VAR_0;
    float VAR_5 = VAR_4->output_rate;
    FUNC_3( &VAR_4->lock );

    if( !VAR_4->p_clock || VAR_3 == VAR_0 )
        return VAR_3;

    return FUNC_1( VAR_4->p_clock, VAR_2, VAR_3, VAR_5 );
}
