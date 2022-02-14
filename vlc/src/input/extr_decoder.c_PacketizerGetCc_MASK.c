
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_supported; } ;
struct decoder_owner {TYPE_1__ cc; } ;
struct TYPE_6__ {int * (* pf_get_cc ) (TYPE_2__*,int *) ;} ;
typedef TYPE_2__ decoder_t ;
typedef int decoder_cc_desc_t ;
typedef int block_t ;


 int FUNC_0 (struct decoder_owner*,int *,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3( struct decoder_owner *VAR_0, decoder_t *VAR_1 )
{
    block_t *VAR_2;
    decoder_cc_desc_t VAR_3;


    if( !VAR_0->cc.b_supported )
        return;

    FUNC_1( VAR_1->pf_get_cc != ((void*)0) );

    VAR_2 = VAR_1->pf_get_cc( VAR_1, &VAR_3 );
    if( !VAR_2 )
        return;
    FUNC_0( VAR_0, VAR_2, &VAR_3 );
}
