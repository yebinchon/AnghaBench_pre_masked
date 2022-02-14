
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct decoder_owner {TYPE_2__* id; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_10__ {TYPE_1__ fifo; int decoder_out; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
struct TYPE_13__ {int i_format; } ;
struct TYPE_12__ {TYPE_7__ audio; int i_codec; } ;
struct TYPE_11__ {TYPE_4__ fmt_out; } ;
typedef TYPE_3__ decoder_t ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_7__*) ;
 struct decoder_owner* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( decoder_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_2( VAR_2 );
    sout_stream_id_sys_t *VAR_4 = VAR_3->id;

    VAR_2->fmt_out.audio.i_format = VAR_2->fmt_out.i_codec;
    FUNC_1( &VAR_2->fmt_out.audio );

    if( !FUNC_0(&VAR_2->fmt_out.audio) )
        return VAR_0;

    FUNC_5(&VAR_4->fifo.lock);
    FUNC_3( &VAR_4->decoder_out );
    FUNC_4( &VAR_4->decoder_out, &VAR_2->fmt_out );
    FUNC_6(&VAR_4->fifo.lock);

    return VAR_1;
}
