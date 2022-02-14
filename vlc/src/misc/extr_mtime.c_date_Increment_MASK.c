
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ quot; scalar_t__ rem; } ;
typedef TYPE_1__ lldiv_t ;
struct TYPE_6__ {scalar_t__ date; int i_divider_num; scalar_t__ i_divider_den; int i_remainder; } ;
typedef TYPE_2__ date_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;

vlc_tick_t FUNC_3( date_t *VAR_2, uint32_t VAR_3 )
{
    if(FUNC_2(VAR_2->date == VAR_1))
        return VAR_1;
    FUNC_0( VAR_2->i_divider_num != 0 );
    vlc_tick_t VAR_4 = VAR_3 * VAR_0 * VAR_2->i_divider_den;
    lldiv_t VAR_5 = FUNC_1( VAR_4, VAR_2->i_divider_num );

    VAR_2->date += VAR_5.quot;
    VAR_2->i_remainder += (int)VAR_5.rem;

    if( VAR_2->i_remainder >= VAR_2->i_divider_num )
    {

        FUNC_0( VAR_2->i_remainder < 2*VAR_2->i_divider_num);
        VAR_2->date += 1;
        VAR_2->i_remainder -= VAR_2->i_divider_num;
    }

    return VAR_2->date;
}
