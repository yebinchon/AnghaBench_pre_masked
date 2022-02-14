
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_type; } ;
typedef TYPE_1__ module_config_t ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_4)
{
    module_config_t *VAR_5 = FUNC_1(VAR_4);


    if( !VAR_5 )
    {
        return 0;
    }

    switch( FUNC_0(VAR_5->i_type) )
    {
        case 130:
            return VAR_1;
        case 129:
            return VAR_2;
        case 131:
            return VAR_0;
        case 128:
            return VAR_3;
        default:
            return 0;
    }
}
