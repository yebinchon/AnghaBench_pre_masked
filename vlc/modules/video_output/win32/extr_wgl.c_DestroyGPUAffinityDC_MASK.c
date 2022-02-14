
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * affinityHDC; int hvideownd; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_5__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int (* PFNWGLDELETEDCNVPROC ) (int *) ;
typedef int HGLRC ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(vlc_gl_t *VAR_1) {
    vout_display_sys_t *VAR_2 = VAR_1->sys;

    if (VAR_2->affinityHDC == ((void*)0)) return;

    PIXELFORMATDESCRIPTOR VAR_3 = VAR_0;


    HDC VAR_4 = FUNC_1(VAR_2->hvideownd);
    FUNC_2(VAR_4, FUNC_0(VAR_4, &VAR_3), &VAR_3);
    HGLRC VAR_5 = FUNC_3(VAR_4);
    FUNC_6(VAR_4, VAR_5);


    PFNWGLDELETEDCNVPROC VAR_6 = (PFNWGLDELETEDCNVPROC)FUNC_5("wglDeleteDCNV");


    FUNC_4(VAR_5);


    if (!VAR_6) return;


    VAR_6(VAR_2->affinityHDC);
}
