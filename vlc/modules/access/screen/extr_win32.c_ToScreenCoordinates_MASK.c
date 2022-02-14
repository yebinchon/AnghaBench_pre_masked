
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {TYPE_1__ ptl; } ;
typedef TYPE_2__ screen_data_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {TYPE_2__* p_data; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_12__ {int y; int x; } ;
typedef TYPE_5__ POINT ;



__attribute__((used)) static inline void FUNC_0( demux_t *VAR_0, POINT *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;
    screen_data_t *VAR_3 = VAR_2->p_data;
    VAR_1->x -= VAR_3->ptl.x;
    VAR_1->y -= VAR_3->ptl.y;
}
