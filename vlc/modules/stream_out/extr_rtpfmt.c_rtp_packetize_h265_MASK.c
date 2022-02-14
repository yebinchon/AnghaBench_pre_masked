
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {scalar_t__ p_head; scalar_t__ p_tail; } ;
typedef TYPE_1__ hxxx_iterator_ctx_t ;
struct TYPE_8__ {size_t i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; size_t i_length; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const**,size_t*) ;
 int FUNC_2 (TYPE_1__*,int ,size_t,int ) ;
 int FUNC_3 (int *,int const*,size_t,scalar_t__,scalar_t__,int,size_t) ;

__attribute__((used)) static int FUNC_4( sout_stream_id_sys_t *VAR_2, block_t *VAR_3 )
{
    hxxx_iterator_ctx_t VAR_4;
    FUNC_2( &VAR_4, VAR_3->p_buffer, VAR_3->i_buffer, 0 );

    const uint8_t *VAR_5;
    size_t VAR_6;
    while( FUNC_1( &VAR_4, &VAR_5, &VAR_6 ) )
    {
        FUNC_3( VAR_2, VAR_5, VAR_6,
                (VAR_3->i_pts != VAR_1 ? VAR_3->i_pts : VAR_3->i_dts), VAR_3->i_dts,
                VAR_4.p_head + 3 >= VAR_4.p_tail, VAR_3->i_length * VAR_6 / VAR_3->i_buffer );
    }

    FUNC_0(VAR_3);
    return VAR_0;
}
