
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int lock; } ;
struct TYPE_15__ {TYPE_1__ bdj; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_16__ {int cmd; int plane; int h; int w; } ;
typedef TYPE_4__ BD_ARGB_OVERLAY ;






 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__ const* const) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, const BD_ARGB_OVERLAY *const VAR_1)
{
    demux_t *VAR_2 = (demux_t*)VAR_0;
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    switch (VAR_1->cmd) {
    case 128:
        FUNC_6(&VAR_3->bdj.lock);
        FUNC_4(VAR_2, VAR_1->plane, VAR_1->w, VAR_1->h);
        FUNC_7(&VAR_3->bdj.lock);
        break;
    case 131:
        FUNC_6(&VAR_3->bdj.lock);
        FUNC_1(VAR_2, VAR_1->plane);
        FUNC_2(VAR_2, VAR_1->plane);
        FUNC_7(&VAR_3->bdj.lock);
        break;
    case 129:
        FUNC_0(VAR_2, VAR_1->plane);
        break;
    case 130:
        FUNC_3(VAR_2, VAR_1);
        break;
    default:
        FUNC_5(VAR_2, "Unknown BD ARGB overlay command: %u", VAR_1->cmd);
        break;
    }
}
