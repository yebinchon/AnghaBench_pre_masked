
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_format; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_12__ {TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_11__ {int i_nb_blocks; } ;
struct TYPE_10__ {int i_frame_count; } ;
struct TYPE_13__ {TYPE_4__ eac3; TYPE_3__ truehd; int * p_out_buf; } ;
typedef TYPE_6__ filter_sys_t ;




 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_0 )
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    if( VAR_1->p_out_buf != ((void*)0) )
    {
        FUNC_0( VAR_1->p_out_buf );
        VAR_1->p_out_buf = ((void*)0);
    }
    switch( VAR_0->fmt_in.audio.i_format )
    {
        case 128:
            VAR_1->truehd.i_frame_count = 0;
            break;
        case 129:
            VAR_1->eac3.i_nb_blocks = 0;
            break;
        default:
            break;
    }
}
