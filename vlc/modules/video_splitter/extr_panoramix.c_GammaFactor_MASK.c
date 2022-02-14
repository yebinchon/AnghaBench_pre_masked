
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float f_black_crush; float f_black_level; double f_gamma; float f_white_crush; double f_white_level; } ;
typedef TYPE_1__ panoramix_gamma_t ;


 double FUNC_0 (float,double) ;

__attribute__((used)) static double FUNC_1( const panoramix_gamma_t *VAR_0, float VAR_1 )
{
    if( VAR_1 <= VAR_0->f_black_crush )
    {
        float VAR_2 = VAR_1 * VAR_0->f_black_level / VAR_0->f_black_crush + (1.0 - VAR_0->f_black_level);

        return FUNC_0( VAR_2, 1.0 / VAR_0->f_gamma );
    }
    else if( VAR_1 >= VAR_0->f_white_crush )
    {
        float VAR_3 = (VAR_1 * (1.0 - (VAR_0->f_white_level + 1.0)) + (VAR_0->f_white_level + 1.0) * VAR_0->f_white_crush - 1.0) / (VAR_0->f_white_crush - 1.0);
        return FUNC_0( VAR_3, 1.0 / VAR_0->f_gamma );
    }
    return 1.0;
}
