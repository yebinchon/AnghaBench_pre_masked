
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_15__ {int height; int width; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int drmModeRes ;
struct TYPE_16__ {scalar_t__ connection; scalar_t__ count_modes; int connector_id; TYPE_1__* modes; } ;
typedef TYPE_4__ drmModeConnector ;
typedef scalar_t__ deviceRval ;
struct TYPE_13__ {int vdisplay; int hdisplay; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*,TYPE_4__ const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,char*,int,...) ;
 int FUNC_4 (TYPE_2__*,char*,int,int ) ;

__attribute__((used)) static deviceRval FUNC_5(vout_display_t *VAR_4, drmModeRes const *VAR_5,
                             drmModeConnector const *VAR_6)
{
    vout_display_sys_t *VAR_7 = VAR_4->sys;
    deviceRval VAR_8;
    int VAR_9, VAR_10;

    if (VAR_6->connection != VAR_0 || VAR_6->count_modes == 0)
        return VAR_3;

    VAR_7->width = VAR_6->modes[0].hdisplay;
    VAR_7->height = VAR_6->modes[0].vdisplay;
    FUNC_3(VAR_4, "Mode resolution for connector %u is %ux%u",
            VAR_6->connector_id, VAR_7->width, VAR_7->height);

    VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6);
    if (VAR_8 != VAR_2) {
        FUNC_3(VAR_4 , "No valid CRTC for connector %d", VAR_6->connector_id);
        return VAR_8;
    }

    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
        VAR_8 = FUNC_0(VAR_4, VAR_9);
        if (VAR_8 != VAR_2) {
            FUNC_4(VAR_4, "Cannot create framebuffer %d for connector %d", VAR_9,
                    VAR_6->connector_id);
            for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
                FUNC_1(VAR_7, VAR_10);

            return VAR_8;
        } else {
            FUNC_3(VAR_4, "Created HW framebuffer %d/%d", VAR_9+1, VAR_1);
        }
    }
    return VAR_2;
}
