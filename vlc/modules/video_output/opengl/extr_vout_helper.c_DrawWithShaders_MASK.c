
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int (* DrawElements ) (int ,int ,int ,int ) ;int (* UniformMatrix4fv ) (int ,int,int ,int ) ;int (* VertexAttribPointer ) (int,int,int ,int ,int ,int ) ;int (* EnableVertexAttribArray ) (int) ;int (* BindBuffer ) (int ,int ) ;int (* BindTexture ) (int ,scalar_t__) ;int (* ActiveTexture ) (scalar_t__) ;} ;
struct TYPE_17__ {scalar_t__* texture; int nb_indices; TYPE_6__ vt; int index_buffer_object; int vertex_buffer_object; int * texture_buffer_object; TYPE_2__* prgm; int tex_height; int tex_width; } ;
typedef TYPE_7__ vout_display_opengl_t ;
struct TYPE_15__ {int ZoomMatrix; int ViewMatrix; int ProjectionMatrix; int OrientationMatrix; } ;
struct TYPE_14__ {int ZoomMatrix; int ViewMatrix; int ProjectionMatrix; int OrientationMatrix; } ;
struct TYPE_13__ {int* MultiTexCoord; int VertexPosition; } ;
struct prgm {TYPE_5__ var; TYPE_4__ uloc; TYPE_3__ aloc; TYPE_8__* tc; } ;
struct TYPE_18__ {int tex_target; int (* pf_prepare_shader ) (TYPE_8__*,int ,int ,float) ;} ;
typedef TYPE_8__ opengl_tex_converter_t ;
struct TYPE_12__ {TYPE_1__* tc; } ;
struct TYPE_11__ {unsigned int tex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,int ,int ,float) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(vout_display_opengl_t *VAR_7, struct prgm *VAR_8)
{
    opengl_tex_converter_t *VAR_9 = VAR_8->tc;
    VAR_9->pf_prepare_shader(VAR_9, VAR_7->tex_width, VAR_7->tex_height, 1.0f);

    for (unsigned VAR_10 = 0; VAR_10 < VAR_7->prgm->tc->tex_count; VAR_10++) {
        FUNC_0(VAR_7->texture[VAR_10] != 0);
        VAR_7->vt.ActiveTexture(VAR_4+VAR_10);
        VAR_7->vt.BindTexture(VAR_9->tex_target, VAR_7->texture[VAR_10]);

        VAR_7->vt.BindBuffer(VAR_0, VAR_7->texture_buffer_object[VAR_10]);

        FUNC_0(VAR_8->aloc.MultiTexCoord[VAR_10] != -1);
        VAR_7->vt.EnableVertexAttribArray(VAR_8->aloc.MultiTexCoord[VAR_10]);
        VAR_7->vt.VertexAttribPointer(VAR_8->aloc.MultiTexCoord[VAR_10], 2, VAR_3,
                                     0, 0, 0);
    }

    VAR_7->vt.BindBuffer(VAR_0, VAR_7->vertex_buffer_object);
    VAR_7->vt.BindBuffer(VAR_1, VAR_7->index_buffer_object);
    VAR_7->vt.EnableVertexAttribArray(VAR_8->aloc.VertexPosition);
    VAR_7->vt.VertexAttribPointer(VAR_8->aloc.VertexPosition, 3, VAR_3, 0, 0, 0);

    VAR_7->vt.UniformMatrix4fv(VAR_8->uloc.OrientationMatrix, 1, VAR_2,
                             VAR_8->var.OrientationMatrix);
    VAR_7->vt.UniformMatrix4fv(VAR_8->uloc.ProjectionMatrix, 1, VAR_2,
                             VAR_8->var.ProjectionMatrix);
    VAR_7->vt.UniformMatrix4fv(VAR_8->uloc.ViewMatrix, 1, VAR_2,
                             VAR_8->var.ViewMatrix);
    VAR_7->vt.UniformMatrix4fv(VAR_8->uloc.ZoomMatrix, 1, VAR_2,
                             VAR_8->var.ZoomMatrix);

    VAR_7->vt.DrawElements(VAR_5, VAR_7->nb_indices, VAR_6, 0);
}
