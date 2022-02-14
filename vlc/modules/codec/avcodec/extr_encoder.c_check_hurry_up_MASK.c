
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int encoder_t ;
struct TYPE_7__ {scalar_t__ b_trellis; TYPE_1__* p_context; int i_hq; } ;
typedef TYPE_2__ encoder_sys_t ;
struct TYPE_8__ {int pict_type; int pts; } ;
struct TYPE_6__ {scalar_t__ trellis; int mb_decision; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3( encoder_sys_t *VAR_5, AVFrame *VAR_6, encoder_t *VAR_7 )
{
    vlc_tick_t VAR_8 = FUNC_2();

    if ( VAR_8 + VAR_4 > FUNC_0(VAR_6->pts) )
    {
        VAR_5->p_context->mb_decision = VAR_1;
        VAR_5->p_context->trellis = 0;
        FUNC_1( VAR_7, "hurry up mode 3" );
    }
    else
    {
        VAR_5->p_context->mb_decision = VAR_5->i_hq;

        if ( VAR_8 + VAR_3 > FUNC_0(VAR_6->pts) )
        {
            VAR_5->p_context->trellis = 0;
            FUNC_1( VAR_7, "hurry up mode 2" );
        }
        else
        {
            VAR_5->p_context->trellis = VAR_5->b_trellis;
        }
    }

    if ( VAR_8 + VAR_2 > FUNC_0(VAR_6->pts) )
    {
        VAR_6->pict_type = VAR_0;

    }
}
