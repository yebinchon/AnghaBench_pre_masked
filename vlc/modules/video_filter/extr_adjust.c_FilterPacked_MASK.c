
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_20__ {int i_chroma; } ;
struct TYPE_22__ {TYPE_1__ format; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
typedef int int32_t ;
struct TYPE_23__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_24__ {scalar_t__ (* pf_process_sat_hue_clip ) (TYPE_3__*,TYPE_3__*,int,int,int,int,int) ;scalar_t__ (* pf_process_sat_hue ) (TYPE_3__*,TYPE_3__*,int,int,int,int,int) ;int b_brightness_threshold; int f_gamma; int f_saturation; int f_hue; int f_brightness; int f_contrast; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_21__ {int i_pitch; int i_visible_pitch; size_t* p_pixels; int i_visible_lines; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int*,int*,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (double) ;
 TYPE_3__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 double FUNC_8 (int,double) ;
 int FUNC_9 (double) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_3__*,int,int,int,int,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_3__*,int,int,int,int,int) ;
 double FUNC_12 (int *) ;

__attribute__((used)) static picture_t *FUNC_13( filter_t *VAR_2, picture_t *VAR_3 )
{
    int VAR_4[256];
    int VAR_5[256];

    picture_t *VAR_6;
    uint8_t *VAR_7, *VAR_8, *VAR_9;
    uint8_t *VAR_10;
    int VAR_11, VAR_12, VAR_13;

    int VAR_14, VAR_15;

    double VAR_16;
    double VAR_17;
    int32_t VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

    filter_sys_t *VAR_25 = VAR_2->p_sys;

    if( !VAR_3 ) return ((void*)0);

    VAR_14 = VAR_3->p->i_pitch;
    VAR_15 = VAR_3->p->i_visible_pitch;

    if( FUNC_1( VAR_3->format.i_chroma, &VAR_11,
                             &VAR_12, &VAR_13 ) != VAR_1 )
    {
        FUNC_6( VAR_2, "Unsupported input chroma (%4.4s)",
                  (char*)&(VAR_3->format.i_chroma) );

        FUNC_7( VAR_3 );
        return ((void*)0);
    }

    VAR_6 = FUNC_5( VAR_2 );
    if( !VAR_6 )
    {
        FUNC_6( VAR_2, "can't get output picture" );

        FUNC_7( VAR_3 );
        return ((void*)0);
    }


    VAR_18 = (int)( FUNC_12( &VAR_25->f_contrast ) * 255 );
    VAR_19 = (int)( (FUNC_12( &VAR_25->f_brightness ) - 1.0)*255 );
    VAR_16 = FUNC_12( &VAR_25->f_hue ) * (float)(VAR_0 / 180.);
    VAR_20 = (int)( FUNC_12( &VAR_25->f_saturation ) * 256 );
    VAR_17 = 1.0 / FUNC_12( &VAR_25->f_gamma );




    if( !FUNC_2( &VAR_25->b_brightness_threshold ) )
    {



        VAR_19 += 128 - VAR_18 / 2;


        for( int VAR_26 = 0 ; VAR_26 < 256 ; VAR_26++ )
        {
          VAR_5[ VAR_26 ] = FUNC_3( FUNC_8(VAR_26 / 255.0, VAR_17) * 255.0);
        }


        for( int VAR_27 = 0 ; VAR_27 < 256 ; VAR_27++ )
        {
            VAR_4[ VAR_27 ] = VAR_5[FUNC_3( VAR_19 + VAR_18 * VAR_27 / 256)];
        }
    }
    else
    {




        for( int VAR_28 = 0 ; VAR_28 < 256 ; VAR_28++ )
        {
            VAR_4[ VAR_28 ] = (VAR_28 < VAR_19) ? 0 : 255;
        }




        VAR_20 = 0;
    }





    VAR_7 = VAR_3->p->p_pixels + VAR_11;
    VAR_8 = VAR_7 + VAR_3->p->i_visible_lines * VAR_3->p->i_pitch - 8 * 4;

    VAR_10 = VAR_6->p->p_pixels + VAR_11;

    for( ; VAR_7 < VAR_8 ; )
    {
        VAR_9 = VAR_7 + VAR_15 - 8 * 4;

        for( ; VAR_7 < VAR_9 ; )
        {

            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
        }

        VAR_9 += 8 * 4;

        for( ; VAR_7 < VAR_9 ; )
        {
            *VAR_10 = VAR_4[ *VAR_7 ]; VAR_7 += 2; VAR_10 += 2;
        }

        VAR_7 += VAR_14 - VAR_3->p->i_visible_pitch;
        VAR_10 += VAR_14 - VAR_6->p->i_visible_pitch;
    }





    VAR_21 = FUNC_9(VAR_16) * 256;
    VAR_22 = FUNC_4(VAR_16) * 256;

    VAR_23 = ( FUNC_4(VAR_16) + FUNC_9(VAR_16) ) * 32768;
    VAR_24 = ( FUNC_4(VAR_16) - FUNC_9(VAR_16) ) * 32768;

    if ( VAR_20 > 256 )
    {
        if ( VAR_25->pf_process_sat_hue_clip( VAR_3, VAR_6, VAR_21, VAR_22, VAR_20,
                                             VAR_23, VAR_24 ) != VAR_1 )
        {


            FUNC_6( VAR_2, "Unsupported input chroma (%4.4s)",
                      (char*)&(VAR_3->format.i_chroma) );
            FUNC_7( VAR_3 );
            return ((void*)0);
        }
    }
    else
    {
        if ( VAR_25->pf_process_sat_hue( VAR_3, VAR_6, VAR_21, VAR_22, VAR_20,
                                        VAR_23, VAR_24 ) != VAR_1 )
        {


            FUNC_6( VAR_2, "Unsupported input chroma (%4.4s)",
                      (char*)&(VAR_3->format.i_chroma) );
            FUNC_7( VAR_3 );
            return ((void*)0);
        }
    }

    return FUNC_0( VAR_6, VAR_3 );
}
