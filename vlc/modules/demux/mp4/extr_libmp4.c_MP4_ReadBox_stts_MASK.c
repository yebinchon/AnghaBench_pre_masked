
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int stream_t ;
typedef int int32_t ;
struct TYPE_7__ {size_t* pi_sample_count; size_t* pi_sample_delta; size_t i_entry_count; } ;
struct TYPE_5__ {TYPE_4__* p_stts; } ;
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
 void* FUNC_6 (size_t,int) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_3, MP4_Box_t *VAR_4 )
{
    uint32_t VAR_5;

    FUNC_2( VAR_0, VAR_1 );

    FUNC_1( VAR_4->data.p_stts );
    FUNC_0( VAR_5 );

    if( FUNC_4(8) * VAR_5 > VAR_2 )
    {

        FUNC_3( 0 );
    }

    VAR_4->data.p_stts->pi_sample_count = FUNC_6( VAR_5, sizeof(uint32_t) );
    VAR_4->data.p_stts->pi_sample_delta = FUNC_6( VAR_5, sizeof(int32_t) );
    VAR_4->data.p_stts->i_entry_count = VAR_5;

    if( VAR_4->data.p_stts->pi_sample_count == ((void*)0)
     || VAR_4->data.p_stts->pi_sample_delta == ((void*)0) )
    {
        FUNC_3( 0 );
    }

    for( uint32_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
    {
        FUNC_0( VAR_4->data.p_stts->pi_sample_count[VAR_6] );
        FUNC_0( VAR_4->data.p_stts->pi_sample_delta[VAR_6] );
    }






    FUNC_3( 1 );
}
