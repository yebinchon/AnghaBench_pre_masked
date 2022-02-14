
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {scalar_t__ i_size; scalar_t__ i_pos; struct TYPE_7__* p_father; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static MP4_Box_t *FUNC_5( stream_t *VAR_0, MP4_Box_t *VAR_1 )
{
    MP4_Box_t *VAR_2 = FUNC_1( 1, sizeof( MP4_Box_t ) );
    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    if( !FUNC_0( VAR_0, VAR_2 ) )
    {
        FUNC_4( VAR_0, "cannot read one box" );
        FUNC_2( VAR_2 );
        return ((void*)0);
    }

    if( VAR_1 && VAR_1->i_size > 0 &&
        VAR_1->i_pos + VAR_1->i_size < VAR_2->i_pos + VAR_2->i_size )
    {
        FUNC_3( VAR_0, "out of bound child" );
        FUNC_2( VAR_2 );
        return ((void*)0);
    }

    if( !VAR_2->i_size )
    {
        FUNC_3( VAR_0, "found an empty box (null size)" );
        FUNC_2( VAR_2 );
        return ((void*)0);
    }
    VAR_2->p_father = VAR_1;

    return VAR_2;
}
