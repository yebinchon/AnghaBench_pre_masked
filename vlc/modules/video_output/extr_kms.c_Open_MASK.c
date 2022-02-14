
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int (* close ) (TYPE_1__*) ;int control; int display; int * prepare; int pool; TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_15__ {int forced_drm_fourcc; scalar_t__ vlc_fourcc; int height; int width; int drm_fourcc; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_16__ {scalar_t__ i_chroma; int i_visible_height; int i_height; int i_visible_width; int i_width; } ;
typedef TYPE_3__ video_format_t ;
typedef int uint32_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 char* FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 TYPE_2__* FUNC_9 (int ,int,int) ;
 scalar_t__ FUNC_10 (int const*) ;

__attribute__((used)) static int FUNC_11(vout_display_t *VAR_7, const vout_display_cfg_t *VAR_8,
                video_format_t *VAR_9, vlc_video_context *VAR_10)
{
    vout_display_sys_t *VAR_11;
    vlc_fourcc_t VAR_12;
    uint32_t VAR_13;
    video_format_t VAR_14 = {};
    char *VAR_15;

    if (FUNC_10(VAR_8))
        return VAR_4;




    VAR_7->sys = VAR_11 = FUNC_9(FUNC_3(VAR_7), 1, sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_5;

    VAR_15 = FUNC_6(VAR_7, "kms-vlc-chroma");
    if (VAR_15) {
        VAR_12 = FUNC_8(VAR_3, VAR_15);

        if (VAR_12) {
            VAR_11->vlc_fourcc = VAR_12;
            FUNC_5(VAR_7, "Forcing VLC to use chroma '%4s'", VAR_15);
         } else {
            VAR_11->vlc_fourcc = VAR_9->i_chroma;
            FUNC_5(VAR_7, "Chroma %4s invalid, using default", VAR_15);
         }

        FUNC_4(VAR_15);
        VAR_15 = ((void*)0);
    } else {
        VAR_11->vlc_fourcc = VAR_9->i_chroma;
        FUNC_5(VAR_7, "Chroma not defined, using default");
    }

    VAR_15 = FUNC_6(VAR_7, "kms-drm-chroma");
    if (VAR_15) {
        VAR_13 = FUNC_2(VAR_15[0], VAR_15[1], VAR_15[2],
                                      VAR_15[3]);

        if (VAR_13) {
            VAR_11->forced_drm_fourcc = 1;
            VAR_11->drm_fourcc = VAR_13;
            FUNC_5(VAR_7, "Setting DRM chroma to '%4s'", VAR_15);
        }
        else
            FUNC_5(VAR_7, "Chroma %4s invalid, using default", VAR_15);

        FUNC_4(VAR_15);
        VAR_15 = ((void*)0);
    }

    if (FUNC_1(VAR_7) != VAR_6) {
        FUNC_0(VAR_7);
        return VAR_4;
    }

    FUNC_7(&VAR_14, VAR_9);

    VAR_14.i_width = VAR_14.i_visible_width = VAR_11->width;
    VAR_14.i_height = VAR_14.i_visible_height = VAR_11->height;
    VAR_14.i_chroma = VAR_11->vlc_fourcc;
    *VAR_9 = VAR_14;

    VAR_7->pool = VAR_2;
    VAR_7->prepare = ((void*)0);
    VAR_7->display = VAR_1;
    VAR_7->control = VAR_0;
    VAR_7->close = FUNC_0;

    (void) VAR_10;
    return VAR_6;
}
