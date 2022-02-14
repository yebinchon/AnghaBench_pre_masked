
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static block_t *FUNC_3( const char *VAR_0 )
{
    block_t *VAR_1 = FUNC_0( FUNC_2(VAR_0) );
    if( VAR_1 )
        FUNC_1( VAR_1->p_buffer, VAR_0, VAR_1->i_buffer );
    return VAR_1;
}
