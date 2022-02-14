
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {int i_wanted_page; int* i_page; int * b_is_subtitle; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_1__*,int const*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static bool FUNC_2( decoder_t *VAR_0, const uint8_t *VAR_1,
                                int VAR_2, int VAR_3, vlc_tick_t VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_0->p_sys;

    if( (VAR_5->i_wanted_page != -1 &&
         VAR_5->i_page[VAR_2] != VAR_5->i_wanted_page)
         || !VAR_5->b_is_subtitle[VAR_2] )
        return 0;

    if( VAR_3 < 24 )
        return FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );
    else if( VAR_3 == 25 )
        return FUNC_1( VAR_0, VAR_1, VAR_2 );
    else
        return 0;
}
