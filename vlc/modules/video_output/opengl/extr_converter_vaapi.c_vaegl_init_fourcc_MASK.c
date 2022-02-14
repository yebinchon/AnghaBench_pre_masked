
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {unsigned int fourcc; void** drm_fourccs; } ;
typedef int opengl_tex_converter_t ;
 int VAR_0 ;
 void* FUNC_0 (char,char,char,char) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(const opengl_tex_converter_t *VAR_2, struct priv *VAR_3,
                  unsigned VAR_4)
{
    (void) VAR_2;
    switch (VAR_4)
    {
        case 132:
            VAR_3->drm_fourccs[0] = FUNC_0('R', '8', ' ', ' ');
            VAR_3->drm_fourccs[1] = FUNC_0('G', 'R', '8', '8');
            break;
        case 131:
            VAR_3->drm_fourccs[0] = FUNC_0('R', '1', '6', ' ');
            VAR_3->drm_fourccs[1] = FUNC_0('G', 'R', '3', '2');
            break;
        default: return VAR_0;
    }
    VAR_3->fourcc = VAR_4;
    return VAR_1;
}
