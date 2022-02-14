
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* BufferData ) (int ,unsigned int,int *,int ) ;int (* BindBuffer ) (int ,int ) ;} ;
struct TYPE_7__ {int projection_mode; float i_width; float i_height; scalar_t__ i_cubemap_padding; } ;
struct TYPE_11__ {unsigned int nb_indices; TYPE_4__ vt; int index_buffer_object; int vertex_buffer_object; int * texture_buffer_object; TYPE_3__* prgm; TYPE_1__ fmt; } ;
typedef TYPE_5__ vout_display_opengl_t ;
struct TYPE_9__ {TYPE_2__* tc; } ;
struct TYPE_8__ {unsigned int tex_count; } ;
typedef int GLushort ;
typedef int GLfloat ;


 int FUNC_0 (unsigned int,float,float,int **,int **,unsigned int*,int **,unsigned int*,float const*,float const*,float const*,float const*) ;
 int FUNC_1 (unsigned int,int **,int **,unsigned int*,int **,unsigned int*,float const*,float const*,float const*,float const*) ;
 int FUNC_2 (unsigned int,int **,int **,unsigned int*,int **,unsigned int*,float const*,float const*,float const*,float const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,unsigned int,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned int,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_10(vout_display_opengl_t *VAR_5,
                       const float *VAR_6, const float *VAR_7,
                       const float *VAR_8, const float *VAR_9)
{
    GLfloat *VAR_10, *VAR_11;
    GLushort *VAR_12;
    unsigned VAR_13, VAR_14;

    int VAR_15;
    switch (VAR_5->fmt.projection_mode)
    {
    case 128:
        VAR_15 = FUNC_1(VAR_5->prgm->tc->tex_count,
                               &VAR_10, &VAR_11, &VAR_13,
                               &VAR_12, &VAR_14,
                               VAR_6, VAR_7, VAR_8, VAR_9);
        break;
    case 129:
        VAR_15 = FUNC_2(VAR_5->prgm->tc->tex_count,
                            &VAR_10, &VAR_11, &VAR_13,
                            &VAR_12, &VAR_14,
                            VAR_6, VAR_7, VAR_8, VAR_9);
        break;
    case 130:
        VAR_15 = FUNC_0(VAR_5->prgm->tc->tex_count,
                          (float)VAR_5->fmt.i_cubemap_padding / VAR_5->fmt.i_width,
                          (float)VAR_5->fmt.i_cubemap_padding / VAR_5->fmt.i_height,
                          &VAR_10, &VAR_11, &VAR_13,
                          &VAR_12, &VAR_14,
                          VAR_6, VAR_7, VAR_8, VAR_9);
        break;
    default:
        VAR_15 = VAR_3;
        break;
    }

    if (VAR_15 != VAR_4)
        return VAR_15;

    for (unsigned VAR_16 = 0; VAR_16 < VAR_5->prgm->tc->tex_count; VAR_16++)
    {
        VAR_5->vt.BindBuffer(VAR_0, VAR_5->texture_buffer_object[VAR_16]);
        VAR_5->vt.BufferData(VAR_0, VAR_13 * 2 * sizeof(GLfloat),
                           VAR_11 + VAR_16 * VAR_13 * 2, VAR_2);
    }

    VAR_5->vt.BindBuffer(VAR_0, VAR_5->vertex_buffer_object);
    VAR_5->vt.BufferData(VAR_0, VAR_13 * 3 * sizeof(GLfloat),
                       VAR_10, VAR_2);

    VAR_5->vt.BindBuffer(VAR_1, VAR_5->index_buffer_object);
    VAR_5->vt.BufferData(VAR_1, VAR_14 * sizeof(GLushort),
                       VAR_12, VAR_2);

    FUNC_3(VAR_11);
    FUNC_3(VAR_10);
    FUNC_3(VAR_12);

    VAR_5->nb_indices = VAR_14;

    return VAR_4;
}
