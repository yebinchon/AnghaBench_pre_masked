
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_4__ {int* p_pixels; int i_pitch; } ;



__attribute__((used)) static inline void FUNC_0(picture_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    VAR_0->p->p_pixels[VAR_2 * VAR_0->p->i_pitch + VAR_1] = VAR_3;
}
