
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int i_reject_count; int end_date; TYPE_3__* p_context; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_9__ {scalar_t__ codec_id; } ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_3->p_sys;
    AVCodecContext *VAR_5 = VAR_4->p_context;

    if( FUNC_1( VAR_5 ) )
        FUNC_0( VAR_5 );
    FUNC_2( &VAR_4->end_date, VAR_2 );

    if( VAR_5->codec_id == VAR_0 ||
        VAR_5->codec_id == VAR_1 )
        VAR_4->i_reject_count = 3;
}
