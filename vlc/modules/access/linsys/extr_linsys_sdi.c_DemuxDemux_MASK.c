
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int s; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_2 )
{
    block_t *VAR_3 = FUNC_2( VAR_2->s, VAR_0 );
    int VAR_4;

    if ( VAR_3 == ((void*)0) )
        return 0;

    VAR_4 = FUNC_0( VAR_2, VAR_3->p_buffer, VAR_3->i_buffer );
    FUNC_1( VAR_3 );

    return ( VAR_4 == VAR_1 );
}
