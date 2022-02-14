
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int print_direction; } ;
struct TYPE_6__ {TYPE_1__ style; } ;
typedef TYPE_2__ cea708_window_t ;






 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( cea708_window_t *VAR_0 )
{
    static const int VAR_1[] =
    {
        [130] = 129,
        [129] = 130,
        [128] = 131,
        [131] = 128,
    };
    int VAR_2 = VAR_0->style.print_direction;
    VAR_0->style.print_direction = VAR_1[VAR_0->style.print_direction];
    FUNC_0( VAR_0 );
    VAR_0->style.print_direction = VAR_2;
}
