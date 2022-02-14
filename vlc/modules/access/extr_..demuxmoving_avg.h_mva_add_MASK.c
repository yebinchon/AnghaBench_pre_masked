
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct moving_average_s {size_t i_packet; TYPE_1__* packets; } ;
struct TYPE_2__ {void* diff; void* duration; void* dts; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct moving_average_s *VAR_1,
                     vlc_tick_t VAR_2, vlc_tick_t VAR_3)
{
    VAR_1->packets[VAR_1->i_packet % VAR_0].dts = VAR_2;
    VAR_1->packets[VAR_1->i_packet % VAR_0].duration = VAR_3;
    VAR_1->packets[VAR_1->i_packet % VAR_0].diff = VAR_3;
    VAR_1->i_packet++;
}
