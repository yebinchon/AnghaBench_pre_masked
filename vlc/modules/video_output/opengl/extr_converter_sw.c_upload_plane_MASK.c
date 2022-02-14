
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void const uint8_t ;
struct priv {size_t texture_temp_buf_size; void const* texture_temp_buf; int has_unpack_subimage; } ;
struct TYPE_7__ {int tex_target; TYPE_2__* vt; TYPE_1__* texs; struct priv* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_6__ {int (* TexSubImage2D ) (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;int (* PixelStorei ) (int ,unsigned int) ;} ;
struct TYPE_5__ {int type; int format; } ;
typedef unsigned int GLsizei ;
typedef int GLenum ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void const*,void const*,unsigned int) ;
 void const* FUNC_2 (void const*,size_t) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;
 int FUNC_5 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;

__attribute__((used)) static int
FUNC_8(const opengl_tex_converter_t *VAR_4, unsigned VAR_5,
             GLsizei VAR_6, GLsizei VAR_7,
             unsigned VAR_8, unsigned VAR_9, const void *VAR_10)
{
    struct priv *VAR_11 = VAR_4->priv;
    GLenum VAR_12 = VAR_4->texs[VAR_5].format;
    GLenum VAR_13 = VAR_4->texs[VAR_5].type;


    VAR_4->vt->PixelStorei(VAR_0, 4);

    if (!VAR_11->has_unpack_subimage)
    {
        if (VAR_8 != VAR_9)
        {

            VAR_9 = (((VAR_9) + ((4) - 1)) & ~((4) - 1));

            size_t VAR_14 = VAR_9 * VAR_7;
            const uint8_t *VAR_15 = VAR_10;
            uint8_t *VAR_16;
            if (VAR_11->texture_temp_buf_size < VAR_14)
            {
                VAR_11->texture_temp_buf =
                    FUNC_2(VAR_11->texture_temp_buf, VAR_14);
                if (VAR_11->texture_temp_buf == ((void*)0))
                {
                    VAR_11->texture_temp_buf_size = 0;
                    return VAR_2;
                }
                VAR_11->texture_temp_buf_size = VAR_14;
            }
            VAR_16 = VAR_11->texture_temp_buf;

            for (GLsizei VAR_17 = 0; VAR_17 < VAR_7 ; VAR_17++)
            {
                FUNC_1(VAR_16, VAR_15, VAR_9);
                VAR_15 += VAR_8;
                VAR_16 += VAR_9;
            }
            VAR_4->vt->TexSubImage2D(VAR_4->tex_target, 0, 0, 0, VAR_6, VAR_7,
                                  VAR_12, VAR_13, VAR_11->texture_temp_buf);
        }
        else
        {
            VAR_4->vt->TexSubImage2D(VAR_4->tex_target, 0, 0, 0, VAR_6, VAR_7,
                                  VAR_12, VAR_13, VAR_10);
        }
    }
    else
    {
        VAR_4->vt->PixelStorei(VAR_1, VAR_8 * VAR_6 / (VAR_9 ? VAR_9 : 1));
        VAR_4->vt->TexSubImage2D(VAR_4->tex_target, 0, 0, 0, VAR_6, VAR_7,
                              VAR_12, VAR_13, VAR_10);
    }
    return VAR_3;
}
