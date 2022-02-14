
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_6__ {scalar_t__ p_data; } ;
struct TYPE_5__ {scalar_t__ i_chunk_size; } ;
struct TYPE_7__ {TYPE_2__ strd; TYPE_1__ common; } ;
typedef TYPE_3__ avi_chunk_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_5, avi_chunk_t *VAR_6 )
{
    if ( VAR_6->common.i_chunk_size == 0 )
    {
        FUNC_3( (vlc_object_t*)VAR_5, "Zero sized pre-JUNK section met" );
        return VAR_1;
    }

    VAR_0;
    VAR_6->strd.p_data = FUNC_1( VAR_6->common.i_chunk_size );
    if( VAR_6->strd.p_data )
        FUNC_2( VAR_6->strd.p_data, VAR_4 + 8, VAR_6->common.i_chunk_size );
    FUNC_0( VAR_6->strd.p_data ? VAR_3 : VAR_2 );
}
