
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int firstcol; int characters; scalar_t__ lastcol; } ;
typedef TYPE_1__ cea708_text_row_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static cea708_text_row_t * FUNC_2( void )
{
    cea708_text_row_t *VAR_1 = FUNC_0( sizeof(*VAR_1) );
    if( VAR_1 )
    {
        VAR_1->firstcol = VAR_0;
        VAR_1->lastcol = 0;
        FUNC_1(VAR_1->characters, 0, 4 * VAR_0);
    }
    return VAR_1;
}
