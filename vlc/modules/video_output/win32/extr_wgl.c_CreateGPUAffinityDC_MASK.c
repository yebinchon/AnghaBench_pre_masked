
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * affinityHDC; int hvideownd; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_6__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;
typedef int UINT ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int (* PFNWGLENUMGPUSNVPROC ) (int ,int **) ;
typedef int * (* PFNWGLCREATEAFFINITYDCNVPROC ) (int **) ;
typedef int * HGPUNV ;
typedef int HGLRC ;
typedef int * HDC ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(vlc_gl_t *VAR_1, UINT VAR_2) {
    vout_display_sys_t *VAR_3 = VAR_1->sys;

    PIXELFORMATDESCRIPTOR VAR_4 = VAR_0;


    HDC VAR_5 = FUNC_1(VAR_3->hvideownd);
    FUNC_2(VAR_5, FUNC_0(VAR_5, &VAR_4), &VAR_4);
    HGLRC VAR_6 = FUNC_4(VAR_5);
    FUNC_7(VAR_5, VAR_6);


    PFNWGLENUMGPUSNVPROC VAR_7 = (PFNWGLENUMGPUSNVPROC)FUNC_6("wglEnumGpusNV");
    PFNWGLCREATEAFFINITYDCNVPROC VAR_8 = (PFNWGLCREATEAFFINITYDCNVPROC)FUNC_6("wglCreateAffinityDCNV");


    FUNC_5(VAR_6);


    if (!VAR_7 || !VAR_8) return;


    HGPUNV VAR_9[2];
    VAR_9[0] = ((void*)0);
    VAR_9[1] = ((void*)0);
    HGPUNV VAR_10;
    if (!VAR_7(VAR_2, &VAR_10)) return;


    VAR_9[0] = VAR_10;
    VAR_3->affinityHDC = VAR_8(VAR_9);
    if (VAR_3->affinityHDC == ((void*)0)) return;
    FUNC_2(VAR_3->affinityHDC,
        FUNC_0(VAR_3->affinityHDC, &VAR_4), &VAR_4);

    FUNC_3(VAR_1, "GPU affinity set to adapter: %d", VAR_2);
}
