
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_cmvd; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int b_compressed; int i_compressed_size; int p_data; int i_uncompressed_size; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_4, MP4_Box_t *VAR_5 )
{
    FUNC_1( VAR_0, VAR_1 );

    FUNC_0( VAR_5->data.p_cmvd->i_uncompressed_size );

    VAR_5->data.p_cmvd->i_compressed_size = VAR_2;

    if( !( VAR_5->data.p_cmvd->p_data = FUNC_3( VAR_2 ) ) )
        FUNC_2( 0 );


    FUNC_4( VAR_5->data.p_cmvd->p_data, VAR_3,VAR_2);

    VAR_5->data.p_cmvd->b_compressed = 1;






    FUNC_2( 1 );
}
