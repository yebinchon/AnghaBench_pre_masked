
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int video_format_t ;
typedef int uint8_t ;
struct TYPE_19__ {scalar_t__ i_start; scalar_t__ i_stop; int b_ephemer; int b_absolute; TYPE_5__* p_region; } ;
typedef TYPE_1__ subpicture_t ;
typedef int psz_text ;
struct TYPE_20__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_21__ {int i_wanted_page; int i_wanted_magazine; int i_align; int psz_prev_text; int * ppsz_lines; scalar_t__ prev_pts; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_22__ {size_t i_buffer; int* p_buffer; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_4__ block_t ;
struct TYPE_23__ {int i_align; int i_x; int i_y; int p_text; } ;


 int FUNC_0 (TYPE_2__*,int const*,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (int const) ;
 int VAR_3 ;
 int FUNC_9 (char*,int ,size_t) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ,char*) ;
 size_t FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_5__* FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static int FUNC_19( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    subpicture_t *VAR_7 = ((void*)0);
    video_format_t VAR_8;






    bool VAR_9 = 0;
    char VAR_10[512], *VAR_11 = VAR_10;
    int VAR_12;

    if( VAR_5 == ((void*)0) )
        return VAR_1;



    for ( size_t VAR_13 = 1; VAR_13 + 46 <= VAR_5->i_buffer; VAR_13 += 46 )
    {
        const uint8_t *VAR_14 = &VAR_5->p_buffer[VAR_13];



        if ( VAR_14[0] == 0xFF ) continue;
        int VAR_15 = (FUNC_8( VAR_14[4] ) << 4) | FUNC_8( VAR_14[5] );
        int VAR_16, VAR_17;
        if ( VAR_15 < 0 )
        {

            FUNC_5((VAR_4, "mpag hamming error"));
            continue;
        }


        VAR_16 = 0xFF & FUNC_4(VAR_15);
        VAR_17 = (7 & VAR_16) == 0 ? 8 : (7 & VAR_16);
        VAR_16 >>= 3;

        if ( VAR_6->i_wanted_page != -1
              && VAR_17 != VAR_6->i_wanted_magazine )
            continue;

        if ( VAR_16 == 0 )
        {

            VAR_9 |= FUNC_1( VAR_4, VAR_14, VAR_17 );
            if( VAR_9 )
                FUNC_5((VAR_4, "%ld --> %ld", (long int) VAR_5->i_pts,
                                           (long int)(VAR_6->prev_pts+1500000)));
        }
        else if ( VAR_16 < 26 )
        {
            VAR_9 |= FUNC_0( VAR_4, VAR_14, VAR_17, VAR_16,
                                            VAR_5->i_pts );
        }




    }

    if ( !VAR_9 )
        goto error;

    VAR_12 = 0;
    for ( int VAR_18 = 1; VAR_18 < 24; VAR_18++ )
    {
        size_t VAR_19 = FUNC_14( VAR_6->ppsz_lines[VAR_18] );

        if ( VAR_19 > sizeof(VAR_10) - VAR_12 - 1 )
            VAR_19 = sizeof(VAR_10) - VAR_12 - 1;

        if ( VAR_19 > 0 )
        {
            FUNC_9( VAR_11, VAR_6->ppsz_lines[VAR_18], VAR_19 );
            VAR_12 += VAR_19;
            VAR_11 += VAR_19;
            if ( sizeof(VAR_10) - VAR_12 - 1 > 0 )
            {
                *VAR_11++ = '\n';
                VAR_12++;
            }
        }
    }
    *VAR_11 = 0;

    if ( !FUNC_12(VAR_10, VAR_6->psz_prev_text) )
        goto error;

    FUNC_5((VAR_4, "UPDATE TELETEXT PICTURE"));

    FUNC_2( sizeof(VAR_6->psz_prev_text) >= sizeof(VAR_10) );
    FUNC_13( VAR_6->psz_prev_text, VAR_10 );


    VAR_7 = FUNC_6( VAR_4, ((void*)0) );
    if( !VAR_7 )
    {
        FUNC_11( VAR_4, "can't get spu buffer" );
        goto error;
    }


    FUNC_18(&VAR_8, VAR_2);
    VAR_7->p_region = FUNC_16( &VAR_8 );
    if( VAR_7->p_region == ((void*)0) )
    {
        FUNC_10( VAR_4, "cannot allocate SPU region" );
        goto error;
    }


    VAR_7->p_region->i_align = VAR_0 | VAR_6->i_align;
    VAR_7->p_region->i_x = VAR_6->i_align ? 20 : 0;
    VAR_7->p_region->i_y = 10;
    VAR_7->p_region->p_text = FUNC_17(VAR_10);

    VAR_7->i_start = VAR_5->i_pts;
    VAR_7->i_stop = VAR_5->i_pts + VAR_5->i_length;
    VAR_7->b_ephemer = (VAR_5->i_length == 0);
    VAR_7->b_absolute = 0;
    FUNC_5((VAR_4, "%ld --> %ld", (long int) VAR_5->i_pts/100000, (long int)VAR_5->i_length/100000));

    FUNC_3( VAR_5 );
    if( VAR_7 != ((void*)0) )
        FUNC_7( VAR_4, VAR_7 );
    return VAR_1;

error:
    if ( VAR_7 != ((void*)0) )
    {
        FUNC_15( VAR_7 );
        VAR_7 = ((void*)0);
    }

    FUNC_3( VAR_5 );
    return VAR_1;
}
