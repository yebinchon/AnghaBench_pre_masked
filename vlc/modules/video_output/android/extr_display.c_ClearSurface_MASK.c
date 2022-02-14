
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int cfg; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_10__ {TYPE_1__* anw; TYPE_4__* p_window; int embed; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int vlc_gl_t ;
typedef int uint16_t ;
struct TYPE_11__ {int p_surface; scalar_t__ b_opaque; } ;
typedef TYPE_4__ android_window ;
struct TYPE_12__ {int* bits; } ;
struct TYPE_8__ {scalar_t__ (* setBuffersGeometry ) (int ,int,int,int ) ;scalar_t__ (* winLock ) (int ,TYPE_5__*,int *) ;int (* unlockAndPost ) (int ) ;} ;
typedef TYPE_5__ ANativeWindow_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float,float,float,float) ;
 scalar_t__ FUNC_3 (int ,int,int,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__*,int *) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ,char*) ;
 int * FUNC_7 (int ,int ,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(vout_display_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_3->sys;

    if (VAR_4->p_window->b_opaque)
    {

        char *VAR_5 = FUNC_6(VAR_4->embed, "gles2");
        vlc_gl_t *VAR_6 = FUNC_7(VAR_3->cfg, VAR_1, VAR_5);
        FUNC_0(VAR_5);
        if (VAR_6 == ((void*)0))
            return;

        if (FUNC_8(VAR_6))
            goto end;

        FUNC_11(VAR_6, 1, 1);
        FUNC_2(0.0f, 0.0f, 0.0f, 0.0f);
        FUNC_1(VAR_0);
        FUNC_12(VAR_6);

        FUNC_10(VAR_6);

end:
        FUNC_9(VAR_6);
    }
    else
    {
        android_window *VAR_7 = VAR_4->p_window;
        ANativeWindow_Buffer VAR_8;

        if (VAR_4->anw->setBuffersGeometry(VAR_7->p_surface, 1, 1,
                                         VAR_2) == 0
          && VAR_4->anw->winLock(VAR_7->p_surface, &VAR_8, ((void*)0)) == 0)
        {
            uint16_t *VAR_9 = VAR_8.bits;
            VAR_9[0] = 0x0000;
            VAR_4->anw->unlockAndPost(VAR_7->p_surface);
        }
    }
}
