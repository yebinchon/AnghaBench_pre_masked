
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int i_min_alpha; int i_overlap; } ;
typedef TYPE_2__ filter_sys_t ;



__attribute__((used)) static int FUNC_0( filter_t *VAR_0, int VAR_1, int VAR_2 )
{
    int VAR_3;
    int VAR_4;

    filter_sys_t *VAR_5 = VAR_0->p_sys;

    VAR_4 = VAR_5->i_min_alpha;

    if( VAR_1 > VAR_5->i_overlap - 1)
    {
        VAR_1 = VAR_5->i_overlap - 1;
    }

    switch ( VAR_5->i_overlap )
    {
    case 1:
        VAR_3 = 255;
        break;

    case 2:
        VAR_3 = 255 - VAR_1 * ( 255 - VAR_4 );
        break;

    case 3:
        VAR_3 = 255 - VAR_1 * ( 255 - VAR_4 ) / 2;
        break;

    default:
        VAR_3 = 255 - VAR_1 * ( 255 - VAR_4 ) / 3;
        break;
    }

    return ( VAR_2 * VAR_3 ) / 255;
}
