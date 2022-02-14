
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_27__ {int (* Disable ) (int ) ;int (* DrawArrays ) (int ,int ,int) ;int (* UniformMatrix4fv ) (int ,int,int ,int ) ;int (* VertexAttribPointer ) (int ,int,int ,int ,int ,int ) ;int (* EnableVertexAttribArray ) (int ) ;int (* BufferData ) (int ,int,double const*,int ) ;int (* BindBuffer ) (int ,int ) ;int (* BindTexture ) (int ,scalar_t__) ;int (* ActiveTexture ) (scalar_t__) ;int (* GenBuffers ) (int,int *) ;int (* DeleteBuffers ) (int,int *) ;int (* BlendFunc ) (int ,int ) ;int (* Enable ) (int ) ;int (* UseProgram ) (int ) ;int (* Clear ) (int ) ;} ;
struct TYPE_28__ {float i_x_offset; float i_y_offset; float i_visible_width; float i_visible_height; } ;
struct TYPE_32__ {float* tex_width; float* tex_height; int region_count; int subpicture_buffer_object_count; int gl; TYPE_4__ vt; int * subpicture_buffer_object; TYPE_12__* region; struct prgm* sub_prgm; TYPE_19__* prgm; TYPE_5__ last_source; } ;
typedef TYPE_9__ vout_display_opengl_t ;
struct TYPE_20__ {float i_x_offset; float i_y_offset; float i_visible_width; float i_visible_height; } ;
typedef TYPE_10__ video_format_t ;
typedef int vertexCoord ;
typedef int textureCoord ;
struct TYPE_26__ {int ZoomMatrix; int ViewMatrix; int ProjectionMatrix; int OrientationMatrix; } ;
struct TYPE_25__ {int ZoomMatrix; int ViewMatrix; int ProjectionMatrix; int OrientationMatrix; } ;
struct TYPE_24__ {int VertexPosition; int * MultiTexCoord; } ;
struct prgm {TYPE_3__ var; TYPE_2__ uloc; TYPE_1__ aloc; TYPE_11__* tc; int id; } ;
struct TYPE_21__ {unsigned int tex_count; int (* pf_prepare_shader ) (TYPE_11__*,int *,int *,int ) ;int tex_target; TYPE_8__* texs; } ;
typedef TYPE_11__ opengl_tex_converter_t ;
struct TYPE_22__ {double const left; double const top; double const bottom; double const right; double tex_height; double tex_width; scalar_t__ texture; int alpha; int height; int width; } ;
typedef TYPE_12__ gl_region_t ;
struct TYPE_30__ {float den; scalar_t__ num; } ;
struct TYPE_29__ {float den; scalar_t__ num; } ;
struct TYPE_31__ {TYPE_7__ h; TYPE_6__ w; } ;
struct TYPE_23__ {TYPE_11__* tc; int id; } ;
typedef int GLuint ;
typedef double GLfloat ;


 int FUNC_0 (TYPE_9__*,TYPE_19__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_9__*,float*,float*,float*,float*) ;
 int FUNC_3 (TYPE_9__*,float*,float*,float*,float*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_11__*,int *,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,double const*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,double const*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int ,int ) ;
 int FUNC_19 (int ,int,int ,int ) ;
 int FUNC_20 (int ,int,int ,int ) ;
 int FUNC_21 (int ,int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int,int *) ;
 int FUNC_27 (int,int *) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,scalar_t__) ;
 int FUNC_30 (int ) ;

int FUNC_31(vout_display_opengl_t *VAR_13,
                                const video_format_t *VAR_14)
{
    FUNC_1();




    VAR_13->vt.Clear(VAR_2);

    VAR_13->vt.UseProgram(VAR_13->prgm->id);

    if (VAR_14->i_x_offset != VAR_13->last_source.i_x_offset
     || VAR_14->i_y_offset != VAR_13->last_source.i_y_offset
     || VAR_14->i_visible_width != VAR_13->last_source.i_visible_width
     || VAR_14->i_visible_height != VAR_13->last_source.i_visible_height)
    {
        float VAR_15[VAR_10];
        float VAR_16[VAR_10];
        float VAR_17[VAR_10];
        float VAR_18[VAR_10];
        const opengl_tex_converter_t *VAR_19 = VAR_13->prgm->tc;
        for (unsigned VAR_20 = 0; VAR_20 < VAR_19->tex_count; VAR_20++)
        {
            float VAR_21 = (float)VAR_19->texs[VAR_20].w.num / VAR_19->texs[VAR_20].w.den
                          / VAR_13->tex_width[VAR_20];
            float VAR_22 = (float)VAR_19->texs[VAR_20].h.num / VAR_19->texs[VAR_20].h.den
                          / VAR_13->tex_height[VAR_20];
            VAR_15[VAR_20] = (VAR_14->i_x_offset + 0 ) * VAR_21;
            VAR_16[VAR_20] = (VAR_14->i_y_offset + 0 ) * VAR_22;
            VAR_17[VAR_20] = (VAR_14->i_x_offset + VAR_14->i_visible_width ) * VAR_21;
            VAR_18[VAR_20] = (VAR_14->i_y_offset + VAR_14->i_visible_height) * VAR_22;
        }

        FUNC_3(VAR_13, VAR_15, VAR_16, VAR_17, VAR_18);
        int VAR_23 = FUNC_2(VAR_13, VAR_15, VAR_16, VAR_17, VAR_18);
        if (VAR_23 != VAR_12)
            return VAR_23;

        VAR_13->last_source.i_x_offset = VAR_14->i_x_offset;
        VAR_13->last_source.i_y_offset = VAR_14->i_y_offset;
        VAR_13->last_source.i_visible_width = VAR_14->i_visible_width;
        VAR_13->last_source.i_visible_height = VAR_14->i_visible_height;
    }
    FUNC_0(VAR_13, VAR_13->prgm);



    struct prgm *VAR_24 = VAR_13->sub_prgm;
    GLuint VAR_25 = VAR_24->id;
    opengl_tex_converter_t *VAR_26 = VAR_24->tc;
    VAR_13->vt.UseProgram(VAR_25);

    VAR_13->vt.Enable(VAR_1);
    VAR_13->vt.BlendFunc(VAR_6, VAR_5);


    if (2 * VAR_13->region_count > VAR_13->subpicture_buffer_object_count) {
        if (VAR_13->subpicture_buffer_object_count > 0)
            VAR_13->vt.DeleteBuffers(VAR_13->subpicture_buffer_object_count,
                                  VAR_13->subpicture_buffer_object);
        VAR_13->subpicture_buffer_object_count = 0;

        int VAR_27 = 2 * VAR_13->region_count;
        VAR_13->subpicture_buffer_object = FUNC_5(VAR_13->subpicture_buffer_object, VAR_27 * sizeof(GLuint));
        if (!VAR_13->subpicture_buffer_object)
            return VAR_11;

        VAR_13->subpicture_buffer_object_count = VAR_27;
        VAR_13->vt.GenBuffers(VAR_13->subpicture_buffer_object_count,
                           VAR_13->subpicture_buffer_object);
    }

    VAR_13->vt.ActiveTexture(VAR_8 + 0);
    for (int VAR_28 = 0; VAR_28 < VAR_13->region_count; VAR_28++) {
        gl_region_t *VAR_29 = &VAR_13->region[VAR_28];
        const GLfloat VAR_30[] = {
            VAR_29->left, VAR_29->top,
            VAR_29->left, VAR_29->bottom,
            VAR_29->right, VAR_29->top,
            VAR_29->right, VAR_29->bottom,
        };
        const GLfloat VAR_31[] = {
            0.0, 0.0,
            0.0, VAR_29->tex_height,
            VAR_29->tex_width, 0.0,
            VAR_29->tex_width, VAR_29->tex_height,
        };

        FUNC_4(VAR_29->texture != 0);
        VAR_13->vt.BindTexture(VAR_26->tex_target, VAR_29->texture);

        VAR_26->pf_prepare_shader(VAR_26, &VAR_29->width, &VAR_29->height, VAR_29->alpha);

        VAR_13->vt.BindBuffer(VAR_0, VAR_13->subpicture_buffer_object[2 * VAR_28]);
        VAR_13->vt.BufferData(VAR_0, sizeof(VAR_31), VAR_31, VAR_7);
        VAR_13->vt.EnableVertexAttribArray(VAR_24->aloc.MultiTexCoord[0]);
        VAR_13->vt.VertexAttribPointer(VAR_24->aloc.MultiTexCoord[0], 2, VAR_4,
                                    0, 0, 0);

        VAR_13->vt.BindBuffer(VAR_0, VAR_13->subpicture_buffer_object[2 * VAR_28 + 1]);
        VAR_13->vt.BufferData(VAR_0, sizeof(VAR_30), VAR_30, VAR_7);
        VAR_13->vt.EnableVertexAttribArray(VAR_24->aloc.VertexPosition);
        VAR_13->vt.VertexAttribPointer(VAR_24->aloc.VertexPosition, 2, VAR_4,
                                    0, 0, 0);

        VAR_13->vt.UniformMatrix4fv(VAR_24->uloc.OrientationMatrix, 1, VAR_3,
                                 VAR_24->var.OrientationMatrix);
        VAR_13->vt.UniformMatrix4fv(VAR_24->uloc.ProjectionMatrix, 1, VAR_3,
                                 VAR_24->var.ProjectionMatrix);
        VAR_13->vt.UniformMatrix4fv(VAR_24->uloc.ViewMatrix, 1, VAR_3,
                                 VAR_24->var.ViewMatrix);
        VAR_13->vt.UniformMatrix4fv(VAR_24->uloc.ZoomMatrix, 1, VAR_3,
                                 VAR_24->var.ZoomMatrix);

        VAR_13->vt.DrawArrays(VAR_9, 0, 4);
    }
    VAR_13->vt.Disable(VAR_1);


    FUNC_30(VAR_13->gl);

    FUNC_1();

    return VAR_12;
}
