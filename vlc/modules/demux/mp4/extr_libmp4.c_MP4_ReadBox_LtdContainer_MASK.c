
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int stream_t ;
struct TYPE_11__ {scalar_t__ i_version; scalar_t__ i_entry_count; } ;
struct TYPE_9__ {TYPE_6__* p_lcont; } ;
struct TYPE_10__ {int i_size; scalar_t__ i_pos; TYPE_1__ data; int i_type; } ;
typedef TYPE_2__ MP4_Box_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (int *,char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_3( VAR_0, 16, ((void*)0) );
    if( VAR_1 < 8 )
        FUNC_4( 0 );

    FUNC_2( VAR_3->data.p_lcont );
    if( VAR_3->data.p_lcont->i_version != 0 )
        FUNC_4( 0 );
    FUNC_1( VAR_3->data.p_lcont->i_entry_count );

    uint32_t VAR_4 = 0;
    VAR_1 = VAR_3->i_size - 16;
    while (VAR_1 > 8 && VAR_4 < VAR_3->data.p_lcont->i_entry_count )
    {
        MP4_Box_t *VAR_5 = FUNC_5( VAR_2, VAR_3 );
        if( !VAR_5 )
            break;
        FUNC_0( VAR_3, VAR_5 );
        VAR_4++;

        if( VAR_1 < VAR_5->i_size )
            FUNC_4( 0 );

        VAR_1 -= VAR_5->i_size;
    }

    if (VAR_4 != VAR_3->data.p_lcont->i_entry_count)
        VAR_3->data.p_lcont->i_entry_count = VAR_4;







    if ( FUNC_6( VAR_2, VAR_3->i_pos + VAR_3->i_size ) )
        FUNC_4( 0 );

    FUNC_4( 1 );
}
