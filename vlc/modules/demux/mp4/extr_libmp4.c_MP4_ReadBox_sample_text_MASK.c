
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_sample_text; } ;
struct TYPE_7__ {TYPE_2__ data; int i_handler; } ;
struct TYPE_5__ {scalar_t__ i_data; int p_data; int i_data_reference_index; int i_reserved2; int i_reserved1; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_5, MP4_Box_t *VAR_6 )
{
    VAR_6->i_handler = VAR_0;
    FUNC_2( VAR_1, VAR_2 );

    FUNC_1( VAR_6->data.p_sample_text->i_reserved1 );
    FUNC_0( VAR_6->data.p_sample_text->i_reserved2 );

    FUNC_0( VAR_6->data.p_sample_text->i_data_reference_index );

    if( VAR_3 )
    {
        VAR_6->data.p_sample_text->p_data = FUNC_4( VAR_3 );
        if( !VAR_6->data.p_sample_text->p_data )
            FUNC_3( 0 );
        FUNC_5( VAR_6->data.p_sample_text->p_data, VAR_4, VAR_3 );
    }
    VAR_6->data.p_sample_text->i_data = VAR_3;




    FUNC_3( 1 );
}
