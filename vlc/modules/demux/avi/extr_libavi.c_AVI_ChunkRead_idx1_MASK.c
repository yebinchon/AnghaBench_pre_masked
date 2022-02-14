
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
typedef int int64_t ;
typedef int idx1_entry_t ;
struct TYPE_7__ {unsigned int i_entry_count; unsigned int i_entry_max; TYPE_4__* entry; } ;
struct TYPE_6__ {scalar_t__ i_chunk_size; } ;
struct TYPE_8__ {TYPE_2__ idx1; TYPE_1__ common; } ;
typedef TYPE_3__ avi_chunk_t ;
struct TYPE_9__ {int i_length; int i_pos; int i_flags; int i_fourcc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (unsigned int,int) ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_4, avi_chunk_t *VAR_5 )
{
    unsigned int VAR_6, VAR_7;

    VAR_0;

    VAR_6 = FUNC_3( (int64_t)VAR_5->common.i_chunk_size, VAR_3 ) / 16;

    VAR_5->idx1.i_entry_count = VAR_6;
    VAR_5->idx1.i_entry_max = VAR_6;
    if( VAR_6 > 0 )
    {
        VAR_5->idx1.entry = FUNC_4( VAR_6, sizeof( idx1_entry_t ) );
        if( !VAR_5->idx1.entry )
            FUNC_1( VAR_1 );

        for( VAR_7 = 0; VAR_7 < VAR_6 ; VAR_7++ )
        {
            FUNC_2( VAR_5->idx1.entry[VAR_7].i_fourcc );
            FUNC_0( VAR_5->idx1.entry[VAR_7].i_flags );
            FUNC_0( VAR_5->idx1.entry[VAR_7].i_pos );
            FUNC_0( VAR_5->idx1.entry[VAR_7].i_length );
        }
    }
    else
    {
        VAR_5->idx1.entry = ((void*)0);
    }



    FUNC_1( VAR_2 );
}
