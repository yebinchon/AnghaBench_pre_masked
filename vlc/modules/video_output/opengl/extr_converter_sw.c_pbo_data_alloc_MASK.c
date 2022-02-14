
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i_planes; TYPE_3__* p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_9__ {int * buffers; int * bytes; } ;
typedef TYPE_3__ picture_sys_t ;
struct TYPE_10__ {TYPE_1__* vt; int gl; } ;
typedef TYPE_4__ opengl_tex_converter_t ;
struct TYPE_7__ {scalar_t__ (* GetError ) () ;int (* DeleteBuffers ) (int,int *) ;int (* BufferData ) (int ,int ,int *,int ) ;int (* BindBuffer ) (int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int
FUNC_6(const opengl_tex_converter_t *VAR_5, picture_t *VAR_6)
{
    picture_sys_t *VAR_7 = VAR_6->p_sys;

    VAR_5->vt->GetError();

    for (int VAR_8 = 0; VAR_8 < VAR_6->i_planes; ++VAR_8)
    {
        VAR_5->vt->BindBuffer(VAR_2, VAR_7->buffers[VAR_8]);
        VAR_5->vt->BufferData(VAR_2, VAR_7->bytes[VAR_8], ((void*)0),
                            VAR_0);

        if (VAR_5->vt->GetError() != VAR_1)
        {
            FUNC_0(VAR_5->gl, "could not alloc PBO buffers");
            VAR_5->vt->DeleteBuffers(VAR_8, VAR_7->buffers);
            return VAR_3;
        }
    }
    return VAR_4;
}
