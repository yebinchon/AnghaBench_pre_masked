
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_19__ {scalar_t__ i_state; scalar_t__ i_spu_size; TYPE_3__* p_spu; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_20__ {scalar_t__ i_buffer; scalar_t__ i_pts; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__**,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__,...) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;

__attribute__((used)) static block_t *FUNC_7( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;

    if( VAR_5->i_buffer < VAR_0 )
    {
        FUNC_5( VAR_4, "invalid packet header (size %zu < %u)" ,
                 VAR_5->i_buffer, VAR_0 );
        FUNC_4( VAR_5 );
        return ((void*)0);
    }





    if( VAR_6->i_state == VAR_1 && VAR_5->i_pts == VAR_3 )
    {
        FUNC_6( VAR_4, "first packet expected but no PTS present");
        return ((void*)0);
    }

    VAR_5->p_buffer += VAR_0;
    VAR_5->i_buffer -= VAR_0;


    if( VAR_6->i_state == VAR_1 ) FUNC_0( VAR_4, VAR_5 );

    FUNC_2( &VAR_6->p_spu, VAR_5 );
    VAR_6->p_spu = FUNC_3( VAR_6->p_spu );

    if( VAR_6->p_spu->i_buffer >= VAR_6->i_spu_size )
    {
        block_t *VAR_7 = VAR_6->p_spu;

        if( VAR_7->i_buffer != VAR_6->i_spu_size )
        {
            FUNC_6( VAR_4, "SPU packets size=%zu should be %zu",
                      VAR_7->i_buffer, VAR_6->i_spu_size );
        }

        FUNC_5( VAR_4, "subtitle packet complete, size=%zuu", VAR_7->i_buffer);

        FUNC_1( VAR_4, VAR_7 );

        VAR_6->i_state = VAR_1;
        VAR_6->p_spu = 0;
        return VAR_7;
    }
    else
    {

        VAR_6->i_state = VAR_2;
    }

    return ((void*)0);
}
