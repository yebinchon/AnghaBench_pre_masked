
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int i_version; int i_base_media_decode_time; } ;
struct TYPE_5__ {TYPE_4__* p_tfdt; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_3( VAR_0, ((void*)0) );
    if( VAR_1 < 8 )
        FUNC_4( 0 );

    FUNC_2( VAR_3->data.p_tfdt );

    if( VAR_3->data.p_tfdt->i_version == 0 )
        FUNC_0( VAR_3->data.p_tfdt->i_base_media_decode_time );
    else if( VAR_3->data.p_tfdt->i_version == 1 )
        FUNC_1( VAR_3->data.p_tfdt->i_base_media_decode_time );
    else
        FUNC_4( 0 );

    FUNC_4( 1 );
}
