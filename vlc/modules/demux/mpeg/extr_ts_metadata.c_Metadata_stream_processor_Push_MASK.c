
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int uint8_t ;
struct TYPE_15__ {scalar_t__ priv; } ;
typedef TYPE_4__ ts_stream_processor_t ;
struct TYPE_12__ {scalar_t__ i_format; } ;
struct TYPE_16__ {TYPE_2__* p_program; TYPE_1__ metadata; } ;
typedef TYPE_5__ ts_es_t ;
struct TYPE_17__ {int i_buffer; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_18__ {int out; TYPE_3__* p_stream; } ;
struct TYPE_14__ {TYPE_5__* p_es; } ;
struct TYPE_13__ {int i_number; } ;
typedef TYPE_7__ Metadata_stream_processor_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;

__attribute__((used)) static block_t * FUNC_6( ts_stream_processor_t *VAR_2, uint8_t VAR_3, block_t *VAR_4 )
{
    Metadata_stream_processor_context_t *VAR_5 = (Metadata_stream_processor_context_t *) VAR_2->priv;
    ts_es_t *VAR_6 = VAR_5->p_stream->p_es;

    if( VAR_3 != 0xbd )
    {
        FUNC_2( VAR_4 );
        return ((void*)0);
    }

    if( VAR_6->metadata.i_format == FUNC_1('I', 'D', '3', ' ') )
    {
        vlc_meta_t *VAR_7 = FUNC_5();
        if( VAR_7 )
        {
            (void) FUNC_0( VAR_4->p_buffer, VAR_4->i_buffer, VAR_1, VAR_7 );
            FUNC_3( VAR_5->out, VAR_0, VAR_6->p_program->i_number, VAR_7 );
            FUNC_4( VAR_7 );
        }
    }

    return VAR_4;
}
