
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int stream_t ;
struct TYPE_7__ {size_t* i_chunk_offset; size_t i_entry_count; } ;
struct TYPE_5__ {TYPE_4__* p_co64; } ;
struct TYPE_6__ {scalar_t__ i_type; TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (int) ;
 size_t VAR_3 ;
 int FUNC_6 (int *,char*,size_t) ;
 scalar_t__ FUNC_7 (int ) ;
 size_t* FUNC_8 (size_t,int) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_4, MP4_Box_t *VAR_5 )
{
    const bool VAR_6 = VAR_5->i_type != VAR_0;
    uint32_t VAR_7;

    FUNC_3( VAR_1, VAR_2 );

    FUNC_2( VAR_5->data.p_co64 );
    FUNC_0( VAR_7 );

    if( (VAR_6 ? FUNC_5(8) : FUNC_5(4)) * VAR_7 > VAR_3 )
        FUNC_4( 0 );

    VAR_5->data.p_co64->i_chunk_offset = FUNC_8( VAR_7, sizeof(uint64_t) );
    if( FUNC_7(VAR_5->data.p_co64->i_chunk_offset == ((void*)0)) )
        FUNC_4( 0 );
    VAR_5->data.p_co64->i_entry_count = VAR_7;

    for( uint32_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++ )
    {
        if( VAR_6 )
            FUNC_1( VAR_5->data.p_co64->i_chunk_offset[VAR_8] );
        else
            FUNC_0( VAR_5->data.p_co64->i_chunk_offset[VAR_8] );
    }






    FUNC_4( 1 );
}
