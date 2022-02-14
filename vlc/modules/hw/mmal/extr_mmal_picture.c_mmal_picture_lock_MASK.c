
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_7__ {int i_planes; TYPE_1__* p; TYPE_3__* p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_8__ {int displayed; TYPE_4__* buffer; } ;
typedef TYPE_3__ picture_sys_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_6__ {int p_pixels; int i_pitch; int i_lines; } ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;

int FUNC_0(picture_t *VAR_1)
{
    picture_sys_t *VAR_2 = VAR_1->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_3 = VAR_2->buffer;

    int VAR_4 = 0;
    VAR_1->p[0].p_pixels = VAR_3->data;
    for (int VAR_5 = 1; VAR_5 < VAR_1->i_planes; VAR_5++) {
        VAR_4 = VAR_4 + VAR_1->p[VAR_5 - 1].i_pitch * VAR_1->p[VAR_5 - 1].i_lines;
        VAR_1->p[VAR_5].p_pixels = (ptrdiff_t)VAR_3->data + VAR_4;
    }

    VAR_2->displayed = 0;

    return VAR_0;
}
