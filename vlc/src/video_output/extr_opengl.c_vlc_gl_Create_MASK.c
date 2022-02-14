
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vout_window_t ;
struct TYPE_8__ {scalar_t__ getProcAddress; scalar_t__ swap; scalar_t__ releaseCurrent; scalar_t__ makeCurrent; int * module; int * surface; } ;
typedef TYPE_2__ vlc_gl_t ;
struct TYPE_7__ {int height; int width; } ;
struct vout_display_cfg {TYPE_1__ display; int * window; } ;
struct vlc_gl_priv_t {TYPE_2__ gl; int rc; } ;


 int FUNC_0 (int *) ;


 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct vlc_gl_priv_t* FUNC_4 (int ,int,char*) ;
 int VAR_0 ;
 int * FUNC_5 (TYPE_2__*,char const*,char const*,int,int ,TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;

vlc_gl_t *FUNC_7(const struct vout_display_cfg *restrict VAR_1,
                        unsigned VAR_2, const char *VAR_3)
{
    vout_window_t *VAR_4 = VAR_1->window;
    struct vlc_gl_priv_t *VAR_5;
    const char *VAR_6;

    switch (VAR_2 )
    {
        case 129:
            VAR_6 = "opengl";
            break;
        case 128:
            VAR_6 = "opengl es2";
            break;
        default:
            return ((void*)0);
    }

    VAR_5 = FUNC_4(FUNC_0(VAR_4), sizeof (*VAR_5), "gl");
    if (FUNC_2(VAR_5 == ((void*)0)))
        return ((void*)0);

    vlc_gl_t *VAR_7 = &VAR_5->gl;
    VAR_7->surface = VAR_4;
    VAR_7->module = FUNC_5(VAR_7, VAR_6, VAR_3, 1, VAR_0, VAR_7,
                                 VAR_1->display.width, VAR_1->display.height);
    if (VAR_7->module == ((void*)0))
    {
        FUNC_6(VAR_7);
        return ((void*)0);
    }
    FUNC_1(VAR_7->makeCurrent && VAR_7->releaseCurrent && VAR_7->swap
        && VAR_7->getProcAddress);
    FUNC_3(&VAR_5->rc);

    return &VAR_5->gl;
}
