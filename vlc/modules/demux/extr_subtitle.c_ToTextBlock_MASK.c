
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_text; } ;
typedef TYPE_1__ subtitle_t ;
struct TYPE_7__ {int p_buffer; } ;
typedef TYPE_2__ block_t ;


 TYPE_2__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static block_t *FUNC_3( const subtitle_t *VAR_0 )
{
    block_t *VAR_1;
    size_t VAR_2 = FUNC_2( VAR_0->psz_text ) + 1;

    if( VAR_2 <= 1 || !(VAR_1 = FUNC_0( VAR_2 )) )
        return ((void*)0);

    FUNC_1( VAR_1->p_buffer, VAR_0->psz_text, VAR_2 );

    return VAR_1;
}
