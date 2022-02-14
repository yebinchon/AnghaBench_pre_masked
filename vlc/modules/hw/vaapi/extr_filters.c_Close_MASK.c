
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int filter_t ;
struct TYPE_5__ {int dec_device; int conf; int dpy; int ctx; int buf; } ;
struct TYPE_6__ {TYPE_1__ va; int dest_pics; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(filter_t *VAR_0, filter_sys_t * VAR_1)
{
    vlc_object_t * VAR_2 = FUNC_0(VAR_0);
    FUNC_2(VAR_1->dest_pics);
    FUNC_3(VAR_2, VAR_1->va.dpy, VAR_1->va.buf);
    FUNC_5(VAR_2, VAR_1->va.dpy, VAR_1->va.ctx);
    FUNC_4(VAR_2, VAR_1->va.dpy, VAR_1->va.conf);
    FUNC_6(VAR_0, VAR_1->va.dec_device);
    FUNC_1(VAR_1);
}
