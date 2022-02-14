
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_stream; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
typedef TYPE_3__ ts_pid_t ;
typedef int demux_t ;
struct TYPE_11__ {int i_flags; int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_9__ {int p_sections_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4( demux_t *VAR_3, ts_pid_t *VAR_4, block_t *VAR_5, size_t VAR_6 )
{
    FUNC_0(VAR_6); FUNC_0(VAR_3);
    bool VAR_7 = 0;

    if( VAR_5->i_flags & VAR_1 )
    {
        FUNC_3( VAR_4->u.p_stream->p_sections_proc );
    }

    if( (VAR_5->i_flags & (VAR_2 | VAR_0)) == 0 )
    {
        FUNC_2( VAR_4->u.p_stream->p_sections_proc, VAR_5->p_buffer );
        VAR_7 = 1;
    }

    FUNC_1( VAR_5 );

    return VAR_7;
}
