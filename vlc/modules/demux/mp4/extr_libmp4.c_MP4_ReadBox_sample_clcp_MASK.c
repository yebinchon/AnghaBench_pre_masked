
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_5__ {TYPE_2__* p_sample_clcp; } ;
struct TYPE_7__ {TYPE_1__ data; int i_handler; } ;
struct TYPE_6__ {int i_data_reference_index; int * i_reserved1; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_3, MP4_Box_t *VAR_4 )
{
    VAR_4->i_handler = VAR_0;
    FUNC_2( VAR_1, ((void*)0) );

    if( VAR_2 < 8 )
        FUNC_3( 0 );

    for( int VAR_5=0; VAR_5<6; VAR_5++ )
        FUNC_0( VAR_4->data.p_sample_clcp->i_reserved1[VAR_5] );
    FUNC_1( VAR_4->data.p_sample_clcp->i_data_reference_index );




    FUNC_3( 1 );
}
