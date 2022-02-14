
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int scan_tuner_config_t ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int spectrum; TYPE_2__ parameter; } ;
typedef TYPE_1__ scan_t ;




 int FUNC_0 (TYPE_2__*,int *,int *,double*) ;
 int FUNC_1 (TYPE_2__*,int *,int *,double*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2( scan_t *VAR_1, scan_tuner_config_t *VAR_2, double *VAR_3 )
{
    int VAR_4 = VAR_0;
    switch( VAR_1->parameter.type )
    {
        case 128:
            VAR_4 = FUNC_1( &VAR_1->parameter, &VAR_1->spectrum, VAR_2, VAR_3 );
            break;
        case 129:
            VAR_4 = FUNC_0( &VAR_1->parameter, &VAR_1->spectrum, VAR_2, VAR_3 );
            break;
        default:
            break;
    }
    return VAR_4;
}
