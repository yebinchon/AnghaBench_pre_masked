
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ date; scalar_t__ i_divider_den; scalar_t__ i_divider_num; unsigned int i_remainder; } ;
typedef TYPE_1__ date_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

vlc_tick_t FUNC_2( date_t *VAR_2, uint32_t VAR_3 )
{
    if(FUNC_1(VAR_2->date == VAR_1))
        return VAR_1;
    vlc_tick_t VAR_4 = (vlc_tick_t)VAR_3 * VAR_0 * VAR_2->i_divider_den;
    VAR_2->date -= VAR_4 / VAR_2->i_divider_num;
    unsigned VAR_5 = VAR_4 % VAR_2->i_divider_num;

    if( VAR_2->i_remainder < VAR_5 )
    {

        FUNC_0( VAR_2->i_remainder < VAR_2->i_divider_num);
        VAR_2->date -= 1;
        VAR_2->i_remainder += VAR_2->i_divider_num;
    }

    VAR_2->i_remainder -= VAR_5;

    return VAR_2->date;
}
