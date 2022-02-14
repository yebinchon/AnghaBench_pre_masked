
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int stream_t ;
struct TYPE_7__ {size_t* i_first_chunk; size_t* i_samples_per_chunk; size_t* i_sample_description_index; size_t i_entry_count; } ;
struct TYPE_5__ {TYPE_4__* p_stsc; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 size_t VAR_2 ;
 int FUNC_5 (int *,char*,size_t) ;
 scalar_t__ FUNC_6 (int) ;
 void* FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_3, MP4_Box_t *VAR_4 )
{
    uint32_t VAR_5;

    FUNC_2( VAR_0, VAR_1 );

    FUNC_1( VAR_4->data.p_stsc );
    FUNC_0( VAR_5 );

    if( FUNC_4(12) * VAR_5 > VAR_2 )
        FUNC_3( 0 );

    VAR_4->data.p_stsc->i_first_chunk = FUNC_7( VAR_5, sizeof(uint32_t) );
    VAR_4->data.p_stsc->i_samples_per_chunk = FUNC_7( VAR_5,
                                                         sizeof(uint32_t) );
    VAR_4->data.p_stsc->i_sample_description_index = FUNC_7( VAR_5,
                                                            sizeof(uint32_t) );
    if( FUNC_6( VAR_4->data.p_stsc->i_first_chunk == ((void*)0)
     || VAR_4->data.p_stsc->i_samples_per_chunk == ((void*)0)
     || VAR_4->data.p_stsc->i_sample_description_index == ((void*)0) ) )
    {
        FUNC_3( 0 );
    }
    VAR_4->data.p_stsc->i_entry_count = VAR_5;

    for( uint32_t VAR_6 = 0; VAR_6 < VAR_5;VAR_6++ )
    {
        FUNC_0( VAR_4->data.p_stsc->i_first_chunk[VAR_6] );
        FUNC_0( VAR_4->data.p_stsc->i_samples_per_chunk[VAR_6] );
        FUNC_0( VAR_4->data.p_stsc->i_sample_description_index[VAR_6] );
    }






    FUNC_3( 1 );
}
