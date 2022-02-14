
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_chroma; } ;
struct TYPE_7__ {TYPE_2__* vt; TYPE_1__ fmt; int gl; scalar_t__ b_dump_shaders; int glsl_version; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_6__ {int (* CompileShader ) (int ) ;int (* ShaderSource ) (int ,int,char const**,int *) ;int (* CreateShader ) (int ) ;} ;
typedef int GLuint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char const*,int ,char const*,char const*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char const**,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static GLuint FUNC_6(const opengl_tex_converter_t *VAR_1,
                                unsigned VAR_2)
{

    static const char *VAR_3 =
        "#version %u\n"
        "varying vec2 TexCoord0;\n"
        "attribute vec4 MultiTexCoord0;\n"
        "%s%s"
        "attribute vec3 VertexPosition;\n"
        "uniform mat4 OrientationMatrix;\n"
        "uniform mat4 ProjectionMatrix;\n"
        "uniform mat4 ZoomMatrix;\n"
        "uniform mat4 ViewMatrix;\n"
        "void main() {\n"
        " TexCoord0 = vec4(OrientationMatrix * MultiTexCoord0).st;\n"
        "%s%s"
        " gl_Position = ProjectionMatrix * ZoomMatrix * ViewMatrix\n"
        "               * vec4(VertexPosition, 1.0);\n"
        "}";

    const char *VAR_4 = VAR_2 > 1 ?
        "varying vec2 TexCoord1;\nattribute vec4 MultiTexCoord1;\n" : "";
    const char *VAR_5 = VAR_2 > 1 ?
        " TexCoord1 = vec4(OrientationMatrix * MultiTexCoord1).st;\n" : "";
    const char *VAR_6 = VAR_2 > 2 ?
        "varying vec2 TexCoord2;\nattribute vec4 MultiTexCoord2;\n" : "";
    const char *VAR_7 = VAR_2 > 2 ?
        " TexCoord2 = vec4(OrientationMatrix * MultiTexCoord2).st;\n" : "";

    char *VAR_8;
    if (FUNC_0(&VAR_8, VAR_3, VAR_1->glsl_version, VAR_4, VAR_6,
                 VAR_5, VAR_7) < 0)
        return 0;

    GLuint VAR_9 = VAR_1->vt->CreateShader(VAR_0);
    VAR_1->vt->ShaderSource(VAR_9, 1, (const char **) &VAR_8, ((void*)0));
    if (VAR_1->b_dump_shaders)
        FUNC_2(VAR_1->gl, "\n=== Vertex shader for fourcc: %4.4s ===\n%s\n",
                (const char *)&VAR_1->fmt.i_chroma, VAR_8);
    VAR_1->vt->CompileShader(VAR_9);
    FUNC_1(VAR_8);
    return VAR_9;
}
