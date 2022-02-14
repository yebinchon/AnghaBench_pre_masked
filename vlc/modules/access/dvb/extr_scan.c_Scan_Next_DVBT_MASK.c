
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {unsigned int i_frequency; int i_bandwidth; } ;
typedef TYPE_3__ scan_tuner_config_t ;
struct TYPE_13__ {int i_min; int i_max; } ;
struct TYPE_12__ {int i_step; } ;
struct TYPE_15__ {TYPE_2__ bandwidth; TYPE_1__ frequency; scalar_t__ b_exhaustive; } ;
typedef TYPE_4__ scan_parameter_t ;
struct TYPE_16__ {unsigned int i_index; } ;
typedef TYPE_5__ scan_enumeration_t ;


 int FUNC_0 (TYPE_4__ const*,TYPE_5__*,TYPE_3__*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const,int const) ;

__attribute__((used)) static int FUNC_2( const scan_parameter_t *VAR_2, scan_enumeration_t *VAR_3,
                           scan_tuner_config_t *VAR_4, double *VAR_5 )
{
    if( VAR_2->b_exhaustive )
        return FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5 );

    unsigned VAR_6 = VAR_2->frequency.i_step ? VAR_2->frequency.i_step : 166667;

    unsigned VAR_7 = VAR_2->bandwidth.i_min ? VAR_2->bandwidth.i_min : 6;
    unsigned VAR_8 = VAR_2->bandwidth.i_max ? VAR_2->bandwidth.i_max : 8;
    unsigned VAR_9 = VAR_8 - VAR_7 + 1;

    static const int VAR_10 = 2;
    static const struct
    {
        const char *psz_name;
        int i_min;
        int i_max;
    }
    VAR_11[2] =
    {
        { "VHF", 174, 230 },
        { "UHF", 470, 862 },
    };
    const int VAR_12 = 5;
    const int VAR_13 = 1000000;




    for( ;; VAR_3->i_index++ )
    {

        const int VAR_14 = VAR_3->i_index % VAR_9;
        const int VAR_15 = (VAR_3->i_index / VAR_9) % VAR_12;
        const int VAR_16 = (VAR_3->i_index / VAR_9) / VAR_12;

        const int VAR_17 = VAR_7 + VAR_14;
        int VAR_18;

        for( VAR_18 = 0; VAR_18 < VAR_10; VAR_18++ )
        {
            if( VAR_16 >= VAR_11[VAR_18].i_min && VAR_16 <= VAR_11[VAR_18].i_max )
                break;
        }
        if( VAR_18 >=VAR_10 )
        {
            if( VAR_16 > VAR_11[VAR_10-1].i_max )
            {
                VAR_3->i_index++;
                return VAR_0;
            }
            continue;
        }

        const unsigned VAR_19 = VAR_11[VAR_18].i_min*VAR_13 + VAR_17*VAR_13/2;
        const unsigned VAR_20 = VAR_16*VAR_13;

        if( VAR_20 >= VAR_19 && ( VAR_20 - VAR_19 ) % ( VAR_17*VAR_13 ) == 0 )
        {
            const unsigned VAR_21 = VAR_20 + ( VAR_15 - VAR_12/2 ) * VAR_6;

            VAR_4->i_frequency = VAR_21;
            VAR_4->i_bandwidth = VAR_17;

            int VAR_22 = 0, VAR_23 = 0;
            for( VAR_18 = 0; VAR_18 < VAR_10; VAR_18++ )
            {
                const int VAR_24 = VAR_11[VAR_18].i_max-VAR_11[VAR_18].i_min;

                if( VAR_16 >= VAR_11[VAR_18].i_min )
                    VAR_22 += FUNC_1( VAR_16 - VAR_11[VAR_18].i_min, VAR_24 );
                VAR_23 += VAR_24;
            }

            *VAR_5 = (double)( VAR_22 + (double)VAR_15 / VAR_12 ) / VAR_23;
            VAR_3->i_index++;
            return VAR_1;
        }
    }
}
