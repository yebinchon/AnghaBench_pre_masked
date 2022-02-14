
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_7__ {int cur_seekpoint; scalar_t__ offset; scalar_t__* offsets; TYPE_1__* p_marks; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_5__ {int i_seekpoint; } ;



__attribute__((used)) static void FUNC_0( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;
    if( !VAR_1->p_marks )
        return;

    int VAR_2 = VAR_1->cur_seekpoint;
    if( VAR_1->offset < VAR_1->offsets[VAR_1->cur_seekpoint] )
    {

        VAR_2 = 0;
    }


    while( VAR_2 + 1 < VAR_1->p_marks->i_seekpoint &&
        VAR_1->offset >= VAR_1->offsets[VAR_2 + 1] )
    {
        VAR_2++;
    }

    VAR_1->cur_seekpoint = VAR_2;
}
