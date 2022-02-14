
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EGLint ;
typedef int EGLSurface ;
typedef int EGLNativeWindowType ;
typedef int EGLDisplay ;
typedef int EGLConfig ;


 int FUNC_0 (int ,int ,int ,int const*) ;

__attribute__((used)) static EGLSurface FUNC_1(EGLDisplay VAR_0, EGLConfig VAR_1,
                                      void *VAR_2, const EGLint *VAR_3)
{
    EGLNativeWindowType *VAR_4 = VAR_2;

    return FUNC_0(VAR_0, VAR_1, *VAR_4, VAR_3);
}
