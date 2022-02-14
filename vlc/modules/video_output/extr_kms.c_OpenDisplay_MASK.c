
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_14__ {int drm_fd; scalar_t__ crtc; int drm_fourcc; int vlc_fourcc; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int uint64_t ;
struct TYPE_15__ {int count_connectors; int * connectors; } ;
typedef TYPE_3__ drmModeRes ;
typedef int drmModeConnector ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (int,int ) ;
 TYPE_3__* FUNC_7 (int) ;
 int FUNC_8 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_11 (TYPE_1__*,char*,...) ;
 char* FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static int FUNC_15(vout_display_t *VAR_8)
{
    vout_display_sys_t *VAR_9 = VAR_8->sys;
    char *VAR_10;
    int VAR_11;
    uint64_t VAR_12;
    drmModeConnector *VAR_13;
    drmModeRes *VAR_14;
    int VAR_15;
    bool VAR_16 = 0;




    VAR_10 = FUNC_12(VAR_8, VAR_2);
    if (VAR_10 == ((void*)0)) {
        FUNC_11(VAR_8, "Don't know which DRM device to open");
        return VAR_4;
    }

    VAR_9->drm_fd = FUNC_14(VAR_10, VAR_3);
    if (VAR_9->drm_fd == -1) {
        FUNC_11(VAR_8, "cannot open %s", VAR_10);
        FUNC_9(VAR_10);
        return VAR_4;
    }
    FUNC_9(VAR_10);

    FUNC_8(VAR_9->drm_fd, VAR_1, 1);

    if (!FUNC_0(VAR_8))
        goto err_out;

    FUNC_10(VAR_8, "Using VLC chroma '%.4s', DRM chroma '%.4s'",
            (char*)&VAR_9->vlc_fourcc, (char*)&VAR_9->drm_fourcc);

    VAR_11 = FUNC_3(VAR_9->drm_fd, VAR_0, &VAR_12);
    if (VAR_11 < 0 || !VAR_12) {
        FUNC_11(VAR_8, "Device '%s' does not support dumb buffers", VAR_10);
        goto err_out;
    }

    VAR_14 = FUNC_7(VAR_9->drm_fd);
    if (VAR_14 == ((void*)0)) {
        FUNC_11(VAR_8, "Didn't get DRM resources");
        goto err_out;
    }

    for (VAR_15 = 0; VAR_15 < VAR_14->count_connectors && VAR_9->crtc == 0; VAR_15++) {

        VAR_13 = FUNC_6(VAR_9->drm_fd, VAR_14->connectors[VAR_15]);
        if (VAR_13 == ((void*)0))
            continue;

        VAR_16 = 1;

        VAR_11 = FUNC_1(VAR_8, VAR_14, VAR_13);
        if (VAR_11 != VAR_6) {
            if (VAR_11 != VAR_7) {
                FUNC_11(VAR_8, "Cannot do setup for connector %u:%u", VAR_15,
                        VAR_14->connectors[VAR_15]);

                FUNC_4(VAR_13);
                FUNC_5(VAR_14);
                goto err_out;
            }
            FUNC_4(VAR_13);
            VAR_16 = 0;
            continue;
        }
        FUNC_4(VAR_13);
    }
    FUNC_5(VAR_14);

    if (!VAR_16)
        goto err_out;

    return VAR_5;
err_out:
    FUNC_2(VAR_9->drm_fd);
    FUNC_13(VAR_9->drm_fd);
    VAR_9->drm_fd = 0;
    return VAR_4;
}
