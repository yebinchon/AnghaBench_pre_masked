
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc; } ;
struct decoder_owner {int lock; TYPE_1__ cc; } ;
typedef int decoder_t ;
typedef int decoder_cc_desc_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( decoder_t *VAR_0, decoder_cc_desc_t *VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );

    FUNC_1( &VAR_2->lock );
    *VAR_1 = VAR_2->cc.desc;
    FUNC_2( &VAR_2->lock );
}
