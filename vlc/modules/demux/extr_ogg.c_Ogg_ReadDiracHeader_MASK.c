
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pu_dirac_vidfmt_frate ;
typedef int p_dirac_frate_tbl ;
struct TYPE_9__ {char* packet; int bytes; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_7__ {int b_old; int b_interlaced; } ;
struct TYPE_8__ {TYPE_1__ dirac; } ;
struct TYPE_10__ {int b_force_backup; int dts; TYPE_2__ special; } ;
typedef TYPE_4__ logical_stream_t ;
typedef int bs_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6( logical_stream_t *VAR_0,
                                 ogg_packet *VAR_1 )
{
    VAR_0->special.dirac.b_old = (VAR_1->packet[0] == 'K');

    static const struct {
        uint32_t u_n , u_d ;
    } VAR_2[] = {
        {1,1},
        {24000,1001}, {24,1}, {25,1}, {30000,1001}, {30,1},
        {50,1}, {60000,1001}, {60,1}, {15000,1001}, {25,2},
    };
    static const size_t VAR_3 = sizeof(VAR_2)/sizeof(*VAR_2);

    static const uint32_t VAR_4[] = {
        1, 9, 10, 9, 10, 9, 10, 4, 3, 7, 6, 4, 3, 7, 6, 2, 2, 7, 6, 7, 6,
    };
    static const size_t VAR_5 = sizeof(VAR_4)/sizeof(*VAR_4);

    bs_t VAR_6;



    VAR_0->b_force_backup = 0;


    FUNC_1( &VAR_6, VAR_1->packet, VAR_1->bytes );
    FUNC_2( &VAR_6, 13*8);
    FUNC_5( &VAR_6 );
    FUNC_5( &VAR_6 );
    FUNC_5( &VAR_6 );
    FUNC_5( &VAR_6 );

    uint32_t VAR_7 = FUNC_5( &VAR_6 );
    if( VAR_7 >= VAR_5 )
    {

        return 0;
    }

    if( FUNC_4( &VAR_6 ) )
    {
        FUNC_5( &VAR_6 );
        FUNC_5( &VAR_6 );
    }

    if( FUNC_4( &VAR_6 ) )
    {
        FUNC_5( &VAR_6 );
    }

    if( FUNC_4( &VAR_6 ) )
    {
        VAR_0->special.dirac.b_interlaced = FUNC_5( &VAR_6 );
    }
    else
        VAR_0->special.dirac.b_interlaced = 0;

    uint32_t VAR_8 = VAR_2[VAR_4[VAR_7]].u_n;
    uint32_t VAR_9 = VAR_2[VAR_4[VAR_7]].u_d;
    VAR_9 = FUNC_0( VAR_9, 1 );
    if( FUNC_4( &VAR_6 ) )
    {
        uint32_t VAR_10 = FUNC_5( &VAR_6 );
        if( VAR_10 >= VAR_3 )
        {

            return 0;
        }
        VAR_8 = VAR_2[VAR_10].u_n;
        VAR_9 = VAR_2[VAR_10].u_d;
        if( VAR_10 == 0 )
        {
            VAR_8 = FUNC_5( &VAR_6 );
            VAR_9 = FUNC_5( &VAR_6 );
        }
    }

    if( !VAR_8 || !VAR_9 )
        return 0;







    FUNC_3( &VAR_0->dts, 2 * VAR_8, VAR_9 );

    return 1;
}
