
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_13__ {int i_visible_width; int i_visible_height; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_14__ {int i_original_picture_width; int i_original_picture_height; TYPE_4__* p_region; int i_start; scalar_t__ b_subtitle; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_12__ {scalar_t__ i_chroma; } ;
struct TYPE_15__ {TYPE_1__ fmt; struct TYPE_15__* p_next; } ;
typedef TYPE_4__ subpicture_region_t ;
typedef int spu_t ;


 int FUNC_0 (int *,TYPE_4__*,int const,int const,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(spu_t *VAR_1, subpicture_t *VAR_2,
                              video_format_t *VAR_3, video_format_t *VAR_4,
                              vlc_fourcc_t *VAR_5)
{
    if (VAR_2->i_original_picture_width <= 0 ||
        VAR_2->i_original_picture_height <= 0) {
        if (VAR_2->i_original_picture_width > 0 ||
            VAR_2->i_original_picture_height > 0)
            FUNC_1(VAR_1, "original picture size %dx%d is unsupported",
                     VAR_2->i_original_picture_width,
                     VAR_2->i_original_picture_height);
        else
            FUNC_2(VAR_1, "original picture size is undefined");

        VAR_2->i_original_picture_width = VAR_3->i_visible_width;
        VAR_2->i_original_picture_height = VAR_3->i_visible_height;
    }


    FUNC_3(VAR_2, VAR_3, VAR_4,
                      VAR_2->b_subtitle ? VAR_2->i_start : FUNC_4());

    const int VAR_6 = VAR_2->i_original_picture_width;
    const int VAR_7 = VAR_2->i_original_picture_height;

    subpicture_region_t *VAR_8;
    for (VAR_8 = VAR_2->p_region; VAR_8 != ((void*)0); VAR_8 = VAR_8->p_next)
    {
        if(VAR_8->fmt.i_chroma != VAR_0)
            continue;
        FUNC_0(VAR_1, VAR_8,
                      VAR_6, VAR_7,
                      VAR_5);
    }
}
