
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_8__ {scalar_t__ i_pos; TYPE_1__* tk; scalar_t__ i_used; scalar_t__ i_tk; scalar_t__ i_offset; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_6__ {scalar_t__ i_end; scalar_t__ i_start; scalar_t__ date; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(stream_t *VAR_1)
{
    stream_sys_t *VAR_2 = VAR_1->p_sys;

    VAR_2->i_pos = 0;


    VAR_2->i_offset = 0;
    VAR_2->i_tk = 0;
    VAR_2->i_used = 0;

    for (unsigned VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_2->tk[VAR_3].date = 0;
        VAR_2->tk[VAR_3].i_start = VAR_2->i_pos;
        VAR_2->tk[VAR_3].i_end = VAR_2->i_pos;
    }


    FUNC_0(VAR_1);
}
