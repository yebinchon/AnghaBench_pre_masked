
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ,size_t) ;

block_t *FUNC_4( stream_t *VAR_1, size_t VAR_2 )
{
    if( FUNC_2(VAR_2 > VAR_0) )
        return ((void*)0);

    block_t *VAR_3 = FUNC_0( VAR_2 );
    if( FUNC_2(VAR_3 == ((void*)0)) )
        return ((void*)0);

    ssize_t VAR_4 = FUNC_3( VAR_1, VAR_3->p_buffer, VAR_2 );
    if( VAR_4 <= 0 )
    {
        FUNC_1( VAR_3 );
        return ((void*)0);
    }

    VAR_3->i_buffer = VAR_4;
    return VAR_3;
}
