
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_start; scalar_t__ i_stop; int b_ephemer; int b_absolute; int i_original_picture_height; int i_original_picture_width; int p_region; } ;
typedef TYPE_1__ subpicture_t ;
struct TYPE_14__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_15__ {int i_original_height; int i_original_width; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_16__ {int i_flags; scalar_t__ i_pts; int i_buffer; scalar_t__ i_length; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 char* FUNC_6 (char const*,int) ;

__attribute__((used)) static subpicture_t *FUNC_7( decoder_t *VAR_2, block_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;
    subpicture_t *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);

    if( VAR_3->i_flags & VAR_0 )
        return ((void*)0);


    if( VAR_3->i_pts == VAR_1 )
    {
        FUNC_5( VAR_2, "subtitle without a date" );
        return ((void*)0);
    }




    if( VAR_3->i_buffer < 1 )
    {
        FUNC_5( VAR_2, "no subtitle data" );
        return ((void*)0);
    }


    VAR_6 = FUNC_6( (const char *)VAR_3->p_buffer,
                            VAR_3->i_buffer );
    if( VAR_6 == ((void*)0) )
        return ((void*)0);


    if (FUNC_0( VAR_6 ) == ((void*)0))
    {
        FUNC_4( VAR_2, "USF subtitles must be in UTF-8 format.\n"
                 "This stream contains USF subtitles which aren't." );
    }


    VAR_5 = FUNC_2( VAR_2, ((void*)0) );
    if( !VAR_5 )
    {
        FUNC_5( VAR_2, "can't get spu buffer" );
        FUNC_3( VAR_6 );
        return ((void*)0);
    }


    VAR_5->p_region = FUNC_1( VAR_2, VAR_6 );

    VAR_5->i_start = VAR_3->i_pts;
    VAR_5->i_stop = VAR_3->i_pts + VAR_3->i_length;
    VAR_5->b_ephemer = (VAR_3->i_length == VAR_1);
    VAR_5->b_absolute = 0;
    VAR_5->i_original_picture_width = VAR_4->i_original_width;
    VAR_5->i_original_picture_height = VAR_4->i_original_height;

    FUNC_3( VAR_6 );

    return VAR_5;
}
