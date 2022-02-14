
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_frequency; scalar_t__ type; scalar_t__ i_bandwidth; } ;
typedef TYPE_1__ scan_tuner_config_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0( const scan_tuner_config_t *VAR_2 )
{
    if( VAR_2->i_frequency == 0 ||
        VAR_2->i_frequency == VAR_1 / 10 )
        return 0;

    if( VAR_2->type == VAR_0 && VAR_2->i_bandwidth == 0 )
        return 0;

    return 1;
}
