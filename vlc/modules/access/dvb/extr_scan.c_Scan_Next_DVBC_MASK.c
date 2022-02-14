
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int symbolrates ;
struct TYPE_10__ {int modulation; int i_symbolrate; int i_frequency; } ;
typedef TYPE_1__ scan_tuner_config_t ;
struct TYPE_11__ {scalar_t__ i_symbolrate; scalar_t__ b_exhaustive; int b_modulation_set; } ;
typedef TYPE_2__ scan_parameter_t ;
struct TYPE_12__ {int modulation; int i_symbolrate_index; int i_index; } ;
typedef TYPE_3__ scan_enumeration_t ;
typedef int frequencies ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,TYPE_3__*,TYPE_1__*,double*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1( const scan_parameter_t *VAR_4, scan_enumeration_t *VAR_5,
                           scan_tuner_config_t *VAR_6, double *VAR_7 )
{
    bool VAR_8=1;
    if( !VAR_4->b_modulation_set )
    {
        VAR_5->modulation = (VAR_5->modulation >> 1 );



        if( VAR_5->modulation < VAR_1)
        {
            VAR_5->modulation = VAR_0;
        } else {
            VAR_8=0;
        }
    }
    VAR_6->modulation = VAR_5->modulation;

    if( VAR_4->i_symbolrate == 0 )
    {

        static const unsigned short VAR_9[] = {
            6900, 6875, 6950




        };

        enum { num_symbols = (sizeof(VAR_9)/sizeof(*VAR_9)) };


        if( VAR_8 )
        {
            VAR_5->i_symbolrate_index++;
            VAR_5->i_symbolrate_index %= num_symbols;
        }
        VAR_6->i_symbolrate = 1000 * (VAR_9[ VAR_5->i_symbolrate_index ] );

        if( VAR_5->i_symbolrate_index )
            VAR_8=0;
    }
    else
    {
        VAR_6->i_symbolrate = VAR_4->i_symbolrate;
    }

    if( VAR_4->b_exhaustive )
        return FUNC_0( VAR_4, VAR_5, VAR_6, VAR_7 );



    static const unsigned int VAR_10[] = { 41000, 39400, 40200,
    38600, 41800, 36200, 44200, 43400, 37000, 35400, 42600, 37800,
    34600, 45800, 45000, 46600, 32200, 51400, 49000, 33800, 31400,
    30600, 47400, 71400, 69000, 68200, 58600, 56200, 54600, 49800,
    48200, 33000, 79400, 72200, 69800, 67400, 66600, 65000, 64200,
    61000, 55400, 53000, 52200, 50600, 29800, 16200, 15400, 11300,
    78600, 77000, 76200, 75400, 74600, 73800, 73000, 70600, 57800,
    57000, 53800, 12100, 81000, 77800, 65800, 63400, 61800, 29000,
    17000, 85000, 84200, 83400, 81800, 80200, 59400, 36900, 28300,
    26600, 25800, 25000, 24200, 23400, 85800, 74800, 73200, 72800,
    72400, 72000, 66000, 65600, 60200, 42500, 41700, 40900, 40100,
    39300, 38500, 37775, 37700, 37200, 36100, 35600, 35300, 34700,
    34500, 33900, 33700, 32900, 32300, 32100, 31500, 31300, 30500,
    29900, 29700, 29100, 28950, 28200, 28000, 27500, 27400, 27200,
    26700, 25900, 25500, 25100, 24300, 24100, 23500, 23200, 22700,
    22600, 21900, 21800, 21100, 20300, 19500, 18700, 17900, 17100,
    16300, 15500, 14700, 14600, 14500, 14300, 13900, 13700, 13100,
    12900, 12500, 12300
    };
    enum { num_frequencies = (sizeof(VAR_10)/sizeof(*VAR_10)) };

    if( VAR_5->i_index >= num_frequencies )
        return VAR_2;

    VAR_6->i_frequency = 10000 * ( VAR_10[ VAR_5->i_index ] );
    *VAR_7 = (double)(VAR_5->i_index * 1000 +
                       VAR_5->i_symbolrate_index * 100 +
                       (256 - (VAR_5->modulation >> 4)) )
            / (num_frequencies * 1000 + 900 + 16);

    if( VAR_8 )
        VAR_5->i_index++;

    return VAR_3;
}
