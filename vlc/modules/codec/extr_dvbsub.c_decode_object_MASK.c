
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {int i_object_defs; TYPE_1__* p_object_defs; struct TYPE_15__* p_next; } ;
typedef TYPE_2__ dvbsub_region_t ;
struct TYPE_16__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_17__ {TYPE_2__* p_regions; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_18__ {int * p_end; int * p_start; } ;
typedef TYPE_5__ bs_t ;
struct TYPE_14__ {int i_id; char* psz_text; scalar_t__ i_y; int i_x; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ,scalar_t__,int *,int) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 char* FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6( decoder_t *VAR_0, bs_t *VAR_1, uint16_t VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    dvbsub_region_t *VAR_4;
    int VAR_5, VAR_6, VAR_7;




    VAR_6 = FUNC_1( VAR_1, 16 );
    FUNC_2( VAR_1, 4 );
    VAR_5 = FUNC_1( VAR_1, 2 );

    if( VAR_5 > 1 )
    {
        FUNC_4( VAR_0, "unknown DVB subtitling coding %d is not handled!", VAR_5 );
        FUNC_2( VAR_1, 8 * (VAR_2 - 2) - 6 );
        return;
    }



    for( VAR_4 = VAR_3->p_regions; VAR_4 != ((void*)0);
         VAR_4 = VAR_4->p_next )
    {
        for( VAR_7 = 0; VAR_7 < VAR_4->i_object_defs; VAR_7++ )
            if( VAR_4->p_object_defs[VAR_7].i_id == VAR_6 ) break;

        if( VAR_7 != VAR_4->i_object_defs ) break;
    }
    if( !VAR_4 )
    {
        FUNC_2( VAR_1, 8 * (VAR_2 - 2) - 6 );
        return;
    }





    FUNC_2( VAR_1, 1 );
    FUNC_2( VAR_1, 1 );

    if( VAR_5 == 0x00 )
    {
        int VAR_8, VAR_9;
        uint8_t *VAR_10, *VAR_11;

        VAR_8 = FUNC_1( VAR_1, 16 );
        VAR_9 = FUNC_1( VAR_1, 16 );
        VAR_10 = VAR_1->p_start + FUNC_0( VAR_1 ) / 8;
        VAR_11 = VAR_10 + VAR_8;

        FUNC_2( VAR_1, 8 * (VAR_2 - 7) );


        if( ( VAR_2 < ( VAR_8 + VAR_9 + 7 ) ) ||
            ( ( VAR_10 + VAR_8 + VAR_9 ) > VAR_1->p_end ) )
        {
            FUNC_4( VAR_0, "corrupted object data" );
            return;
        }

        for( VAR_4 = VAR_3->p_regions; VAR_4 != ((void*)0);
             VAR_4 = VAR_4->p_next )
        {
            for( VAR_7 = 0; VAR_7 < VAR_4->i_object_defs; VAR_7++ )
            {
                if( VAR_4->p_object_defs[VAR_7].i_id != VAR_6 ) continue;

                FUNC_3( VAR_0, VAR_4,
                                     VAR_4->p_object_defs[VAR_7].i_x,
                                     VAR_4->p_object_defs[VAR_7].i_y,
                                     VAR_10, VAR_8 );

                if( VAR_9 )
                {
                    FUNC_3( VAR_0, VAR_4,
                                         VAR_4->p_object_defs[VAR_7].i_x,
                                         VAR_4->p_object_defs[VAR_7].i_y + 1,
                                         VAR_11, VAR_9 );
                }
                else
                {

                    FUNC_3( VAR_0, VAR_4,
                                         VAR_4->p_object_defs[VAR_7].i_x,
                                         VAR_4->p_object_defs[VAR_7].i_y + 1,
                                         VAR_10, VAR_8 );
                }
            }
        }
    }
    else
    {

        int VAR_12 = FUNC_1( VAR_1, 8 );
        uint8_t* VAR_13 = VAR_1->p_start + FUNC_0( VAR_1 ) / 8;


        if( ( VAR_2 < ( VAR_12*2 + 4 ) ) ||
            ( ( VAR_13 + VAR_12*2 ) > VAR_1->p_end ) )
        {
            FUNC_4( VAR_0, "corrupted object data" );
            return;
        }

        for( VAR_4 = VAR_3->p_regions; VAR_4 != ((void*)0);
             VAR_4 = VAR_4->p_next )
        {
            for( VAR_7 = 0; VAR_7 < VAR_4->i_object_defs; VAR_7++ )
            {
                int VAR_14;

                if( VAR_4->p_object_defs[VAR_7].i_id != VAR_6 ) continue;

                VAR_4->p_object_defs[VAR_7].psz_text =
                    FUNC_5( VAR_4->p_object_defs[VAR_7].psz_text,
                             VAR_12 + 1 );


                for( VAR_14 = 0; VAR_14 < VAR_12; VAR_14++ )
                {
                    VAR_4->p_object_defs[VAR_7].psz_text[VAR_14] = (char)(FUNC_1( VAR_1, 16 ) & 0xFF);
                }

                VAR_4->p_object_defs[VAR_7].psz_text[VAR_14] = 0;
            }
        }
    }




}
