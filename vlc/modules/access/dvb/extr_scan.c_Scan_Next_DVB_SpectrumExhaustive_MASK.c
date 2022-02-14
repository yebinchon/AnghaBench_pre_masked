
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned int i_frequency; int i_bandwidth; } ;
typedef TYPE_3__ scan_tuner_config_t ;
struct TYPE_10__ {int i_max; int i_min; } ;
struct TYPE_9__ {int i_step; unsigned int i_max; unsigned int i_min; } ;
struct TYPE_12__ {TYPE_2__ bandwidth; TYPE_1__ frequency; } ;
typedef TYPE_4__ scan_parameter_t ;
struct TYPE_13__ {unsigned int i_index; } ;
typedef TYPE_5__ scan_enumeration_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( const scan_parameter_t *VAR_2, scan_enumeration_t *VAR_3,
                                             scan_tuner_config_t *VAR_4, double *VAR_5 )
{
    unsigned VAR_6 = VAR_2->bandwidth.i_max - VAR_2->bandwidth.i_min + 1;
    unsigned VAR_7 = VAR_2->frequency.i_step ? VAR_2->frequency.i_step : 166667;
    unsigned VAR_8 = (VAR_2->frequency.i_max - VAR_2->frequency.i_min) / VAR_2->frequency.i_step;

    if( VAR_3->i_index > VAR_8 * VAR_6 )
        return VAR_0;

    const int VAR_9 = VAR_3->i_index % VAR_6;
    const int VAR_10 = VAR_3->i_index / VAR_6;

    VAR_4->i_frequency = VAR_2->frequency.i_min + VAR_10 * VAR_7;
    VAR_4->i_bandwidth = VAR_2->bandwidth.i_min + VAR_9;

    *VAR_5 = (double)VAR_3->i_index / VAR_8;

    VAR_3->i_index++;

    return VAR_1;
}
