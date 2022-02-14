
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {TYPE_1__* p_sample_hint; } ;
struct TYPE_8__ {scalar_t__ i_size; scalar_t__ i_pos; TYPE_2__ data; } ;
struct TYPE_6__ {int * p_data; int i_data_reference_index; int * i_reserved1; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_3( VAR_0, 24, VAR_1 );

    for( unsigned VAR_4 = 0; VAR_4 < 6 ; VAR_4++ )
    {
        FUNC_0( VAR_3->data.p_sample_hint->i_reserved1[VAR_4] );
    }

    FUNC_1( VAR_3->data.p_sample_hint->i_data_reference_index );

    if( !(VAR_3->data.p_sample_hint->p_data = FUNC_7(8)) )
        FUNC_4( 0 );

    FUNC_2( *(VAR_3->data.p_sample_hint->p_data) );

    FUNC_5(VAR_2, VAR_3, ((void*)0));

    if ( FUNC_6( VAR_2, VAR_3->i_pos + VAR_3->i_size ) )
        FUNC_4( 0 );

    FUNC_4( 1 );
}
