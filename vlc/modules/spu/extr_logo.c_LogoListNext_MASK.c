
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_7__ {int i_delay; } ;
typedef TYPE_1__ logo_t ;
struct TYPE_8__ {int i_counter; int i_count; int i_delay; scalar_t__ i_next_pic; } ;
typedef TYPE_2__ logo_list_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static logo_t *FUNC_2( logo_list_t *VAR_0, vlc_tick_t VAR_1 )
{
    VAR_0->i_counter = ( VAR_0->i_counter + 1 ) % VAR_0->i_count;

    logo_t *VAR_2 = FUNC_0( VAR_0 );

    VAR_0->i_next_pic = VAR_1 + FUNC_1( VAR_2->i_delay != -1 ?
                          VAR_2->i_delay : VAR_0->i_delay );
    return VAR_2;
}
