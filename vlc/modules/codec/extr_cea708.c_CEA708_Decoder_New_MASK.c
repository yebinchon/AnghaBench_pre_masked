
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_5__ {int * p_dec; } ;
typedef TYPE_1__ cea708_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

cea708_t * FUNC_2( decoder_t *VAR_0 )
{
    cea708_t *VAR_1 = FUNC_1( sizeof(cea708_t) );
    if( VAR_1 )
    {
        FUNC_0( VAR_1 );
        VAR_1->p_dec = VAR_0;
    }
    return VAR_1;
}
