
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_selected; scalar_t__ p_es; int b_ok; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_7__ {int out; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_1, mp4_track_t *VAR_2, bool VAR_3 )
{
    if( !VAR_2->b_ok || FUNC_0(VAR_2) )
        return;

    if( VAR_3 == VAR_2->b_selected )
        return;

    if( !VAR_3 && VAR_2->p_es )
    {
        FUNC_1( VAR_1->out, VAR_0,
                        VAR_2->p_es, 0 );
    }

    VAR_2->b_selected = VAR_3;
}
