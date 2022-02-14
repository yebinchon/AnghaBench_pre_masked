
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int stream_t ;
struct TYPE_6__ {int i_shortsize; struct TYPE_6__* p_next; scalar_t__ i_size; struct TYPE_6__* p_first; } ;
typedef TYPE_1__ MP4_Box_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int const*) ;
 scalar_t__ FUNC_3 (int ) ;

MP4_Box_t *FUNC_4( stream_t *VAR_3 )
{

    MP4_Box_t *VAR_4;
    MP4_Box_t *VAR_5;

    VAR_4 = FUNC_1( VAR_2 );
    if( FUNC_3( VAR_4 == ((void*)0) ) )
        return ((void*)0);
    VAR_4->i_shortsize = 1;

    const uint32_t VAR_6[] = { VAR_1, VAR_0, 0 };
    FUNC_2( VAR_3, VAR_4, VAR_6 );

    VAR_5 = VAR_4->p_first;
    if( VAR_5 == ((void*)0) )
    {
        FUNC_0( VAR_4 );
        return ((void*)0);
    }
    else while( VAR_5 )
    {
        VAR_4->i_size += VAR_5->i_size;
        VAR_5 = VAR_5->p_next;
    }

    return VAR_4;
}
