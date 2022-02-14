
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ print_direction; scalar_t__ justify; } ;
struct TYPE_5__ {TYPE_1__ style; } ;
typedef TYPE_2__ cea708_window_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0( const cea708_window_t *VAR_4 )
{
    return 1;
    if( VAR_4->style.print_direction == VAR_0 &&
        VAR_4->style.justify == VAR_2 )
        return 1;

    if( VAR_4->style.print_direction == VAR_1 &&
        VAR_4->style.justify == VAR_3 )
        return 1;

    return 0;
}
