
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int i_width; int i_height; int i_chroma; } ;
typedef TYPE_4__ video_format_t ;
struct TYPE_25__ {int i_planes; TYPE_4__ format; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_26__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_22__ {int i_chroma; } ;
struct TYPE_23__ {int i_planes; TYPE_2__ format; } ;
struct TYPE_27__ {int f_scale; scalar_t__ i_internal_chroma; int i_cv_image_size; TYPE_3__ hacked_pic; TYPE_8__* p_proc_image; int * p_cv_image; TYPE_8__* p_to_be_freed; int p_image; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_28__ {int i_planes; TYPE_1__* p; } ;
struct TYPE_21__ {int i_visible_pitch; int i_pixel_pitch; int i_visible_lines; int i_pitch; scalar_t__ p_pixels; } ;
typedef int CvSize ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,int) ;
 TYPE_8__* FUNC_4 (TYPE_6__*) ;
 TYPE_8__* FUNC_5 (int ,TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 int FUNC_8 (TYPE_6__*,char*) ;
 int FUNC_9 (TYPE_8__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_10( filter_t* VAR_6, picture_t* VAR_7 )
{
    int VAR_8 = VAR_7->i_planes;

    CvSize VAR_9 = FUNC_3(VAR_7->format.i_width, VAR_7->format.i_height);
    video_format_t VAR_10;
    filter_sys_t* VAR_11 = VAR_6->p_sys;

    FUNC_6( &VAR_10, 0, sizeof(video_format_t) );


    if ((VAR_11->f_scale != 1) || (VAR_11->i_internal_chroma != VAR_0))
    {
        VAR_10 = VAR_7->format;


        VAR_10.i_width = VAR_7->format.i_width * VAR_11->f_scale;
        VAR_10.i_height = VAR_7->format.i_height * VAR_11->f_scale;

        if (VAR_11->i_internal_chroma == VAR_3)
        {



            VAR_10.i_chroma = VAR_5;
        }
        else if (VAR_11->i_internal_chroma == VAR_1)
        {


            VAR_10.i_chroma = VAR_4;
        }


        VAR_11->p_proc_image = FUNC_5( VAR_11->p_image, VAR_7,
                                     &(VAR_7->format), &VAR_10 );

        if (!VAR_11->p_proc_image)
        {
            FUNC_8(VAR_6, "can't convert (unsupported formats?), aborting...");
            return;
        }


    }
    else
    {



        VAR_11->p_proc_image = FUNC_4( VAR_6 );
        FUNC_9( VAR_11->p_proc_image, VAR_7 );
    }
    VAR_11->p_to_be_freed = VAR_11->p_proc_image;




    VAR_8 = VAR_11->p_proc_image->i_planes;
    VAR_11->i_cv_image_size = VAR_8;
    for( int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++ )
    {
        VAR_9 = FUNC_3(FUNC_0(VAR_11->p_proc_image->p[VAR_12].i_visible_pitch /
            VAR_11->p_proc_image->p[VAR_12].i_pixel_pitch),
            FUNC_0(VAR_11->p_proc_image->p[VAR_12].i_visible_lines));

        VAR_11->p_cv_image[VAR_12] = FUNC_1(VAR_9, VAR_2,
            VAR_11->p_proc_image->p[VAR_12].i_pixel_pitch);

        FUNC_2( VAR_11->p_cv_image[VAR_12],
            (char*)(VAR_11->p_proc_image->p[VAR_12].p_pixels), VAR_11->p_proc_image->p[VAR_12].i_pitch );
    }



    VAR_11->hacked_pic.i_planes = VAR_8;
    VAR_11->hacked_pic.format.i_chroma = VAR_10.i_chroma;


    FUNC_7( VAR_6, "VlcPictureToIplImageRgb() completed" );

}
