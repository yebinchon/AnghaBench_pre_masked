
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int subpicture_t ;
typedef int decoder_t ;
struct TYPE_7__ {int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4( decoder_t *VAR_2, block_t *VAR_3 )
{
    block_t *VAR_4;

    if( VAR_3 == ((void*)0) )
        return VAR_1;

    if( VAR_3->i_flags & VAR_0 )
    {
        FUNC_2( VAR_3 );
        return VAR_1;
    }

    if( !(VAR_4 = FUNC_1( VAR_2, VAR_3 )) )
        return VAR_1;


    subpicture_t *VAR_5 = FUNC_0( VAR_2, VAR_4 );
    FUNC_2( VAR_4 );
    if( VAR_5 != ((void*)0) )
        FUNC_3( VAR_2, VAR_5 );
    return VAR_1;
}
