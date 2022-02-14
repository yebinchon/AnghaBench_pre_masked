
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_decoder_device ;
struct priv {int vadpy; } ;
typedef int picture_pool_t ;
struct TYPE_5__ {int fmt; struct priv* priv; int gl; } ;
typedef TYPE_1__ opengl_tex_converter_t ;
typedef int VASurfaceID ;
struct TYPE_6__ {int image_id; } ;
typedef TYPE_2__ VAImage ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*) ;
 int * FUNC_3 (int *,int *,int ,int,int **,int *,int) ;

__attribute__((used)) static int
FUNC_4(opengl_tex_converter_t *VAR_2,
                         vlc_decoder_device *VAR_3)
{
    vlc_object_t *VAR_4 = FUNC_0(VAR_2->gl);
    struct priv *VAR_5 = VAR_2->priv;
    VASurfaceID *VAR_6;

    picture_pool_t *VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_5->vadpy, 1,
                                             &VAR_6, &VAR_2->fmt, 1);
    if (!VAR_7)
        return VAR_1;

    VAImage VAR_8 = { .image_id = VAR_0 };
    int VAR_9 = FUNC_2(VAR_4, VAR_5->vadpy, VAR_6[0],
                                    &VAR_8);

    FUNC_1(VAR_7);

    return VAR_9;
}
