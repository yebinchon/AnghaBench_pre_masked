
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int video_format_t ;
typedef int picture_t ;
struct TYPE_25__ {scalar_t__ i_data; int psz_name; int * p_data; int psz_mime; } ;
typedef TYPE_2__ input_attachment_t ;
typedef int image_handler_t ;
struct TYPE_26__ {int * p_pic; int psz_filename; } ;
typedef TYPE_3__ image_attach_t ;
struct TYPE_24__ {scalar_t__ i_chroma; } ;
struct TYPE_27__ {TYPE_1__ video; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_28__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_29__ {int pp_images; int i_images; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_30__ {int p_buffer; } ;
typedef TYPE_7__ block_t ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_2__***,int*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__**) ;
 int * FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,TYPE_7__*,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_10 (int) ;
 int FUNC_11 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,char*,int) ;
 int FUNC_15 (TYPE_5__*,char*) ;
 int FUNC_16 (TYPE_5__*,char*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_20( decoder_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_6->p_sys;
    input_attachment_t **VAR_8;
    int VAR_9;

    if( VAR_3 != FUNC_2( VAR_6, &VAR_8, &VAR_9 ))
        return VAR_2;

    for( int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
    {
        input_attachment_t *VAR_11 = VAR_8[VAR_10];

        vlc_fourcc_t VAR_12 = FUNC_8( VAR_11->psz_mime );

        if( ( VAR_12 != 0 ) &&
            ( VAR_11->i_data > 0 ) &&
            ( VAR_11->p_data != ((void*)0) ) )
        {
            picture_t *VAR_13 = ((void*)0);
            image_handler_t *VAR_14;

            VAR_14 = FUNC_6( VAR_6 );
            if( VAR_14 != ((void*)0) )
            {
                block_t *VAR_15;

                VAR_15 = FUNC_1( VAR_11->i_data );

                if( VAR_15 != ((void*)0) )
                {
                    es_format_t VAR_16;
                    video_format_t VAR_17;

                    FUNC_11( VAR_15->p_buffer, VAR_11->p_data, VAR_11->i_data );

                    FUNC_4( &VAR_16, VAR_0, VAR_12 );
                    VAR_16.video.i_chroma = VAR_12;
                    FUNC_18( &VAR_17, VAR_1 );


                    if( FUNC_12( "sdl_image" ) )
                    {



                        FUNC_14( VAR_6, "codec", VAR_5 | VAR_4 );
                        FUNC_16( VAR_6, "codec", "sdl_image" );
                    }

                    VAR_13 = FUNC_9( VAR_14, VAR_15, &VAR_16, &VAR_17 );
                    FUNC_15( VAR_6, "codec" );
                    FUNC_3( &VAR_16 );
                    FUNC_17( &VAR_17 );
                }

                FUNC_7( VAR_14 );
            }
            if( VAR_13 )
            {
                image_attach_t *VAR_18 = FUNC_10( sizeof(image_attach_t) );

                if( VAR_18 )
                {
                    VAR_18->psz_filename = FUNC_13( VAR_11->psz_name );
                    VAR_18->p_pic = VAR_13;

                    FUNC_0( VAR_7->i_images, VAR_7->pp_images, VAR_18 );
                }
            }
        }
        FUNC_19( VAR_8[ VAR_10 ] );
    }
    FUNC_5( VAR_8 );

    return VAR_3;
}
