
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ unit; double i_value; } ;
typedef TYPE_1__ ttml_length_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ttml_length_t FUNC_0( unsigned VAR_2,
                                         ttml_length_t VAR_3,
                                         ttml_length_t VAR_4 )
{
    if( VAR_3.unit == VAR_1 )
    {
        VAR_3.i_value *= VAR_4.i_value / 100.0;
        VAR_3.unit = VAR_4.unit;
    }
    else if( VAR_3.unit == VAR_0 )
    {
        VAR_3.i_value *= VAR_4.i_value / VAR_2;
        VAR_3.unit = VAR_4.unit;
    }

    return VAR_3;
}
