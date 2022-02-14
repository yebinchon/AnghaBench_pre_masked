
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_14__ {scalar_t__ crtc; int drm_fd; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_15__ {int count_crtcs; scalar_t__* crtcs; } ;
typedef TYPE_3__ drmModeRes ;
struct TYPE_16__ {int possible_crtcs; scalar_t__ crtc_id; } ;
typedef TYPE_4__ drmModeEncoder ;
struct TYPE_17__ {int count_encoders; int connector_id; int * encoders; int encoder_id; } ;
typedef TYPE_5__ drmModeConnector ;
typedef int deviceRval ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static deviceRval FUNC_5(vout_display_t *VAR_2, drmModeRes const *VAR_3,
                             drmModeConnector const *VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_2->sys;
    drmModeEncoder *VAR_6;
    int VAR_7, VAR_8;




    if (VAR_4->encoder_id) {
        VAR_6 = FUNC_1(VAR_5->drm_fd, VAR_4->encoder_id);
        if (VAR_6) {
            if (VAR_6->crtc_id) {
                FUNC_3(VAR_2, "Got CRTC %d from current encoder", VAR_6->crtc_id);

                VAR_5->crtc = VAR_6->crtc_id;
                FUNC_0(VAR_6);
                return VAR_0;
            }
            FUNC_0(VAR_6);
        }
    }




    for (VAR_7 = 0; VAR_7 < VAR_4->count_encoders; VAR_7++) {
        VAR_6 = FUNC_1(VAR_5->drm_fd, VAR_4->encoders[VAR_7]);

        for (VAR_8 = 0; VAR_6 && VAR_8 < VAR_3->count_crtcs; ++VAR_8) {
            if (FUNC_2(VAR_6->possible_crtcs) == VAR_8 && VAR_3->crtcs[VAR_8]) {
                FUNC_3(VAR_2, "Got CRTC %d", VAR_3->crtcs[VAR_8]);
                VAR_5->crtc = VAR_3->crtcs[VAR_8];
                FUNC_0(VAR_6);
                return VAR_0;
            }
        }
        FUNC_0(VAR_6);
    }

    FUNC_4(VAR_2 , "Cannot find CRTC for connector %d", VAR_4->connector_id);
    return VAR_1;
}
