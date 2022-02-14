
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ type_t ;
struct TYPE_3__ {double f_sigma; int i_dim; scalar_t__* pt_distribution; } ;
typedef TYPE_1__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 float FUNC_1 (int) ;
 scalar_t__* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( filter_sys_t *VAR_1 )
{
    double VAR_2 = VAR_1->f_sigma;
    int VAR_3 = (int)(3.*VAR_2);
    type_t *VAR_4 = FUNC_2( (2*VAR_3+1) * sizeof( type_t ) );

    for( int VAR_5 = -VAR_3; VAR_5 <= VAR_3; VAR_5++ )
    {
        const float VAR_6 = FUNC_1( FUNC_0(-(VAR_5*VAR_5)/(VAR_2*VAR_2) ) / (2.*VAR_0*VAR_2*VAR_2) );



        const float VAR_7 = 1;


        VAR_4[VAR_3+VAR_5] = (type_t)( VAR_6 * VAR_7 );

    }
    VAR_1->i_dim = VAR_3;
    VAR_1->pt_distribution = VAR_4;
}
