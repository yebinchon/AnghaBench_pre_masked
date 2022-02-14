
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_track_reference; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {unsigned int i_entry_count; int * i_track_ID; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int * FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_3, MP4_Box_t *VAR_4 )
{
    uint32_t VAR_5;

    FUNC_1( VAR_0, VAR_1 );

    VAR_4->data.p_track_reference->i_track_ID = ((void*)0);
    VAR_5 = VAR_2 / sizeof(uint32_t);
    VAR_4->data.p_track_reference->i_entry_count = VAR_5;
    VAR_4->data.p_track_reference->i_track_ID = FUNC_4( VAR_5,
                                                        sizeof(uint32_t) );
    if( VAR_4->data.p_track_reference->i_track_ID == ((void*)0) )
        FUNC_2( 0 );

    for( unsigned VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
    {
        FUNC_0( VAR_4->data.p_track_reference->i_track_ID[VAR_6] );
    }





    FUNC_2( 1 );
}
