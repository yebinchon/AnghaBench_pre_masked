
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fmt; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_9__ {int pic_opaque; int opaque; int (* unlock ) (int ,int ,void**) ;int * pitches; int * lines; int (* lock ) (int ,void**) ;} ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
typedef int picture_t ;
struct TYPE_10__ {TYPE_1__* p; int * p_sys; } ;
typedef TYPE_4__ picture_resource_t ;
struct TYPE_7__ {int i_pitch; int i_lines; void* p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,void**) ;
 int FUNC_6 (int ,int ,void**) ;

__attribute__((used)) static void FUNC_7(vout_display_t *VAR_1, picture_t *VAR_2, subpicture_t *VAR_3,
                    vlc_tick_t VAR_4)
{
    FUNC_0(VAR_4);
    vout_display_sys_t *VAR_5 = VAR_1->sys;
    picture_resource_t VAR_6 = { .p_sys = ((void*)0) };
    void *VAR_7[VAR_0];

    VAR_5->pic_opaque = VAR_5->lock(VAR_5->opaque, VAR_7);

    for (unsigned VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        VAR_6.p[VAR_8].p_pixels = VAR_7[VAR_8];
        VAR_6.p[VAR_8].i_lines = VAR_5->lines[VAR_8];
        VAR_6.p[VAR_8].i_pitch = VAR_5->pitches[VAR_8];
    }

    picture_t *VAR_9 = FUNC_3(&VAR_1->fmt, &VAR_6);
    if (FUNC_1(VAR_9 != ((void*)0))) {
        FUNC_2(VAR_9, VAR_2);
        FUNC_4(VAR_9);
    }

    if (VAR_5->unlock != ((void*)0))
        VAR_5->unlock(VAR_5->opaque, VAR_5->pic_opaque, VAR_7);

    (void) VAR_3;
}
