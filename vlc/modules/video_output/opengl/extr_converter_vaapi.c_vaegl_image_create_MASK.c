
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* gl; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* createImageKHR ) (TYPE_4__*,int ,int *,int *) ;} ;
struct TYPE_7__ {TYPE_1__ egl; } ;
typedef int EGLint ;
typedef int EGLImageKHR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,int ,int *,int *) ;

__attribute__((used)) static EGLImageKHR
FUNC_1(const opengl_tex_converter_t *VAR_8, EGLint VAR_9, EGLint VAR_10,
                   EGLint VAR_11, EGLint VAR_12, EGLint VAR_13, EGLint VAR_14)
{
    EGLint VAR_15[] = {
        VAR_7, VAR_9,
        VAR_3, VAR_10,
        VAR_5, VAR_11,
        VAR_0, VAR_12,
        VAR_1, VAR_13,
        VAR_2, VAR_14,
        VAR_6
    };

    return VAR_8->gl->egl.createImageKHR(VAR_8->gl, VAR_4, ((void*)0),
                                      VAR_15);
}
