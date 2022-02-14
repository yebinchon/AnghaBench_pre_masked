
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {int i_size; int i_pos; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{

    ssize_t VAR_3 = FUNC_4( VAR_2 );
    if( FUNC_5( VAR_1, ((void*)0), VAR_3 ) != VAR_3 )
        return 0;

    uint64_t VAR_4 = VAR_2->i_size - 8;
    while ( VAR_4 > 8 )
    {
        MP4_Box_t *VAR_5 = FUNC_2( VAR_1, VAR_2,
                                                  VAR_0 );
        if( !VAR_5 || VAR_4 < VAR_5->i_size )
        {
            FUNC_1( VAR_5 );
            break;
        }

        FUNC_0( VAR_2, VAR_5 );
        VAR_4 -= VAR_5->i_size;
    }

    return FUNC_3( VAR_1, VAR_2->i_pos + VAR_2->i_size ) ? 0 : 1;
}
