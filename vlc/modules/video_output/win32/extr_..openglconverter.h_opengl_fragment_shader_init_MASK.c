
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int video_color_space_t ;
struct TYPE_4__ {int (* pf_fragment_shader_init ) (TYPE_1__*,int ,int ,int ) ;} ;
typedef TYPE_1__ opengl_tex_converter_t ;
typedef int GLuint ;
typedef int GLenum ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static inline GLuint
FUNC_1(opengl_tex_converter_t *VAR_0, GLenum VAR_1,
                            vlc_fourcc_t VAR_2, video_color_space_t VAR_3)
{
    return VAR_0->pf_fragment_shader_init(VAR_0, VAR_1, VAR_2, VAR_3);
}
