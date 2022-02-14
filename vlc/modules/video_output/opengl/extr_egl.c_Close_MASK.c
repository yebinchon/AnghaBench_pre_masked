
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* surface; TYPE_4__* sys; } ;
typedef TYPE_3__ vlc_gl_t ;
struct TYPE_10__ {scalar_t__ display; scalar_t__ context; scalar_t__ surface; int * window; int * x11; } ;
typedef TYPE_4__ vlc_gl_sys_t ;
struct TYPE_7__ {int anativewindow; } ;
struct TYPE_8__ {TYPE_1__ handle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(vlc_gl_t *VAR_4)
{
    vlc_gl_sys_t *VAR_5 = VAR_4->sys;

    if (VAR_5->display != VAR_2)
    {
        if (VAR_5->context != VAR_1)
            FUNC_2(VAR_5->display, VAR_5->context);
        if (VAR_5->surface != VAR_3)
            FUNC_3(VAR_5->display, VAR_5->surface);
        FUNC_4(VAR_5->display);
    }
    FUNC_5 (VAR_5);
}
