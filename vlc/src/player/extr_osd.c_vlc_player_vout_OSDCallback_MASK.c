
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_6__ {float i_int; char* psz_string; float f_float; scalar_t__ b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char const*,int ,TYPE_1__,int ) ;
 int FUNC_7 (int **,int,int ,...) ;

int
FUNC_8(vlc_object_t *VAR_3, const char *VAR_4,
                            vlc_value_t VAR_5, vlc_value_t VAR_6, void *VAR_7)
{
    FUNC_0(VAR_5);

    vout_thread_t *VAR_8 = (vout_thread_t *)VAR_3;

    if (FUNC_3(VAR_4, "aspect-ratio") == 0)
        FUNC_6(VAR_8, VAR_4, VAR_2,
                                   VAR_6, FUNC_1("Aspect ratio: %s"));

    else if (FUNC_3(VAR_4, "autoscale") == 0)
        FUNC_7(&VAR_8, 1, VAR_6.b_bool ?
                          FUNC_1("Scaled to screen") : FUNC_1("Original size"));

    else if (FUNC_3(VAR_4, "crop") == 0)
        FUNC_6(VAR_8, VAR_4, VAR_2, VAR_6,
                                   FUNC_1("Crop: %s"));

    else if (FUNC_3(VAR_4, "crop-bottom") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Bottom crop: %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "crop-top") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Top crop: %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "crop-left") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Left crop: %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "crop-right") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Right crop: %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "deinterlace") == 0 ||
             FUNC_3(VAR_4, "deinterlace-mode") == 0)
    {
        bool VAR_9 = FUNC_3(VAR_4, "deinterlace-mode") == 0;
        int VAR_10 = !VAR_9 ?
            VAR_6.i_int : FUNC_4(VAR_8, "deinterlace");
        char *VAR_11 = VAR_9 ?
            VAR_6.psz_string : FUNC_5(VAR_8, "deinterlace-mode");
        FUNC_7(&VAR_8, 1, FUNC_1("Deinterlace %s (%s)"),
                          VAR_10 == 1 ? FUNC_1("On") : FUNC_1("Off"), VAR_11);
        if (!VAR_9)
            FUNC_2(VAR_11);
    }

    else if (FUNC_3(VAR_4, "sub-margin") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Subtitle position %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "secondary-sub-margin") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Secondary subtitle position %d px"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "sub-text-scale") == 0)
        FUNC_7(&VAR_8, 1, FUNC_1("Subtitle text scale %d%%"), VAR_6.i_int);

    else if (FUNC_3(VAR_4, "zoom") == 0)
    {
        if (VAR_6.f_float == 1.f)
            FUNC_7(&VAR_8, 1, FUNC_1("Zooming reset"));
        else
        {
            bool VAR_12 = FUNC_6(VAR_8, VAR_4, VAR_1,
                                                     VAR_6, FUNC_1("Zoom mode: %s"));
            if (!VAR_12)
                FUNC_7(&VAR_8, 1, FUNC_1("Zoom: x%f"), VAR_6.f_float);
        }
    }

    (void) VAR_7;
    return VAR_0;
}
