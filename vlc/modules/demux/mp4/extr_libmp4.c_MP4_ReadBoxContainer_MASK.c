
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_5__ {size_t i_size; scalar_t__ i_pos; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_0, MP4_Box_t *VAR_1 )
{
    if( VAR_1->i_size &&
        ( VAR_1->i_size <= (size_t)FUNC_2(VAR_1 ) + 8 ) )
    {

        return 1;
    }


    if ( FUNC_1( VAR_0, VAR_1->i_pos +
                      FUNC_2( VAR_1 ) ) )
        return 0;
    return FUNC_0( VAR_0, VAR_1, ((void*)0) );
}
