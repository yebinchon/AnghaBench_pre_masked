
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_codec; int b_packetized; } ;
struct TYPE_9__ {int i_codec; int i_cat; } ;
struct TYPE_7__ {TYPE_3__ fmt; TYPE_4__ fmt_old; } ;
typedef TYPE_1__ logical_stream_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static bool FUNC_3( demux_t *VAR_3, logical_stream_t *VAR_4 )
{
    bool VAR_5 = 0;
    if( !VAR_4->fmt_old.i_cat || !VAR_4->fmt_old.i_codec )
        return 1;


    if( VAR_4->fmt.i_codec == VAR_2 )
        VAR_5 = FUNC_1( &VAR_4->fmt, &VAR_4->fmt_old );
    else if( VAR_4->fmt.i_codec == VAR_1 )
        VAR_5 = FUNC_0( &VAR_4->fmt, &VAR_4->fmt_old );
    else if( VAR_4->fmt.i_codec == VAR_0 )
        VAR_5 = !VAR_4->fmt.b_packetized;

    if( !VAR_5 )
        FUNC_2( VAR_3, "cannot reuse old stream, resetting the decoder" );

    return !VAR_5;
}
