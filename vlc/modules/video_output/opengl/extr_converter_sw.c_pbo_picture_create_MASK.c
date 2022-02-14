
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int i_pitch; size_t i_lines; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_17__ {scalar_t__ i_planes; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_18__ {int* bytes; int DeleteBuffers; int buffers; } ;
typedef TYPE_4__ picture_sys_t ;
struct TYPE_19__ {int pf_destroy; TYPE_4__* p_sys; } ;
typedef TYPE_5__ picture_resource_t ;
struct TYPE_20__ {unsigned int tex_count; int fmt; TYPE_1__* vt; } ;
typedef TYPE_6__ opengl_tex_converter_t ;
struct TYPE_15__ {int DeleteBuffers; int (* GenBuffers ) (scalar_t__,int ) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static picture_t *
FUNC_8(const opengl_tex_converter_t *VAR_2)
{
    picture_sys_t *VAR_3 = FUNC_1(1, sizeof(*VAR_3));
    if (FUNC_7(VAR_3 == ((void*)0)))
        return ((void*)0);

    picture_resource_t VAR_4 = {
        .p_sys = VAR_3,
        .pf_destroy = VAR_1,
    };
    picture_t *VAR_5 = FUNC_3(&VAR_2->fmt, &VAR_4);
    if (VAR_5 == ((void*)0))
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    VAR_2->vt->GenBuffers(VAR_5->i_planes, VAR_3->buffers);
    VAR_3->DeleteBuffers = VAR_2->vt->DeleteBuffers;


    if (FUNC_5(VAR_5, &VAR_2->fmt))
    {
        FUNC_4(VAR_5);
        return ((void*)0);
    }

    FUNC_0(VAR_5->i_planes > 0
        && (unsigned) VAR_5->i_planes == VAR_2->tex_count);

    for (int VAR_6 = 0; VAR_6 < VAR_5->i_planes; ++VAR_6)
    {
        const plane_t *VAR_7 = &VAR_5->p[VAR_6];

        if( VAR_7->i_pitch < 0 || VAR_7->i_lines <= 0 ||
            (size_t)VAR_7->i_pitch > VAR_0/VAR_7->i_lines )
        {
            FUNC_4(VAR_5);
            return ((void*)0);
        }
        VAR_3->bytes[VAR_6] = VAR_7->i_pitch * VAR_7->i_lines;
    }
    return VAR_5;
}
