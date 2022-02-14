
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float i_value; scalar_t__ unit; } ;
typedef TYPE_1__ ttml_length_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0( ttml_length_t VAR_1, int VAR_2, float *VAR_3, int *VAR_4 )
{
    *VAR_3 = VAR_1.i_value;
    if( VAR_1.unit == VAR_0 )
    {
        *VAR_3 /= 100.0;
        *VAR_4 |= VAR_2;
    }
    else *VAR_4 &= ~VAR_2;
}
