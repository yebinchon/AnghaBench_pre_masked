
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_4__ {int i_buffer; int p_buffer; int i_pts; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3( decoder_t *VAR_0, bool VAR_1 )
{
    block_t *VAR_2 = FUNC_1( VAR_0, VAR_1 );
    if( !VAR_2 )
        return 0;

    FUNC_0( VAR_0, VAR_2->i_pts, VAR_2->p_buffer, VAR_2->i_buffer );
    FUNC_2( VAR_2 );

    return 1;
}
