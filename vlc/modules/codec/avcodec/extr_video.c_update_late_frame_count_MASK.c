
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int int64_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int b_from_preroll; scalar_t__ i_last_late_delay; scalar_t__ i_late_frames; int i_last_output_frame; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_2, block_t *VAR_3,
                                     vlc_tick_t VAR_4, vlc_tick_t VAR_5,
                                     vlc_tick_t VAR_6, int64_t VAR_7 )
{
    decoder_sys_t *VAR_8 = VAR_2->p_sys;

   vlc_tick_t VAR_9 = VAR_1;
   if( !VAR_3 || !(VAR_3->i_flags & VAR_0) )
       VAR_9 = FUNC_1( VAR_2, VAR_4, VAR_5 );

   vlc_tick_t VAR_10 = VAR_6 != VAR_1
                          ? (VAR_6 - VAR_5) / 2 : FUNC_0(20);

   if( VAR_9 != VAR_1 && VAR_9 + VAR_10 <= VAR_4 )
   {

       if( VAR_8->b_from_preroll )
       {
           if( VAR_8->i_last_late_delay > VAR_4 - VAR_9 )
           {
               VAR_8->i_last_late_delay = VAR_4 - VAR_9;
               return;
           }
           VAR_8->b_from_preroll = 0;
       }

       VAR_8->i_late_frames++;
   }
   else
   {
       VAR_8->i_last_output_frame = VAR_7;
       VAR_8->i_late_frames = 0;
   }
}
