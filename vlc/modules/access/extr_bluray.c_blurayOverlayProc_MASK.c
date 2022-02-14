
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_14__ {int lock; } ;
struct TYPE_16__ {TYPE_1__ bdj; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_17__ {int cmd; int plane; int h; int w; } ;
typedef TYPE_4__ BD_OVERLAY ;
 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__ const* const) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, const BD_OVERLAY *const VAR_2)
{
    demux_t *VAR_3 = (demux_t*)VAR_1;
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_7(&VAR_4->bdj.lock);

    if (!VAR_2) {
        FUNC_5(VAR_3, "Closing overlays.");
        for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
            FUNC_2(VAR_3, VAR_5);
        FUNC_8(&VAR_4->bdj.lock);
        return;
    }

    switch (VAR_2->cmd) {
    case 129:
        FUNC_5(VAR_3, "Initializing overlay");
        FUNC_4(VAR_3, VAR_2->plane, VAR_2->w, VAR_2->h);
        break;
    case 132:
        FUNC_1(VAR_3, VAR_2->plane);
        FUNC_2(VAR_3, VAR_2->plane);
        break;
    case 133:
        FUNC_1(VAR_3, VAR_2->plane);
        break;
    case 130:
        FUNC_0(VAR_3, VAR_2->plane);
        break;
    case 131:
    case 128:
        FUNC_3(VAR_3, VAR_2);
        break;
    default:
        FUNC_6(VAR_3, "Unknown BD overlay command: %u", VAR_2->cmd);
        break;
    }

    FUNC_8(&VAR_4->bdj.lock);
}
