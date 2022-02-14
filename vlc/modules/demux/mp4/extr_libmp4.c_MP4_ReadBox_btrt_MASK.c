
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_btrt; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int i_avg_bitrate; int i_max_bitrate; int i_buffer_size; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_1( VAR_0, ((void*)0) );

    if(VAR_1 != 12)
        FUNC_2( 0 );

    FUNC_0( VAR_3->data.p_btrt->i_buffer_size );
    FUNC_0( VAR_3->data.p_btrt->i_max_bitrate );
    FUNC_0( VAR_3->data.p_btrt->i_avg_bitrate );

    FUNC_2( 1 );
}
