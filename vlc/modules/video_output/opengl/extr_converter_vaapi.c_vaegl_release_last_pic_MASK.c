
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {unsigned int num_planes; int image_id; int buf; } ;
struct TYPE_7__ {int pic; TYPE_1__ va_image; int * egl_images; } ;
struct priv {TYPE_2__ last; int vadpy; } ;
struct TYPE_8__ {int gl; } ;
typedef TYPE_3__ opengl_tex_converter_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__ const*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(const opengl_tex_converter_t *VAR_0, struct priv *VAR_1)
{
    vlc_object_t *VAR_2 = FUNC_0(VAR_0->gl);

    for (unsigned VAR_3 = 0; VAR_3 < VAR_1->last.va_image.num_planes; ++VAR_3)
        FUNC_2(VAR_0, VAR_1->last.egl_images[VAR_3]);

    FUNC_4(VAR_2, VAR_1->vadpy, VAR_1->last.va_image.buf);

    FUNC_3(VAR_2, VAR_1->vadpy, VAR_1->last.va_image.image_id);

    FUNC_1(VAR_1->last.pic);
}
