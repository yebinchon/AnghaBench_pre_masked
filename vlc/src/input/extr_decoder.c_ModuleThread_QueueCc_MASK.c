
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ b_supported; } ;
struct decoder_owner {TYPE_2__* p_packetizer; TYPE_1__ cc; } ;
typedef int decoder_t ;
typedef int decoder_cc_desc_t ;
typedef int block_t ;
struct TYPE_4__ {int pf_get_cc; } ;


 int FUNC_0 (struct decoder_owner*,int *,int const*) ;
 int FUNC_1 (int *) ;
 struct decoder_owner* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0, block_t *VAR_1,
                                  const decoder_cc_desc_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_2( VAR_0 );

    if( FUNC_3( VAR_1 != ((void*)0) ) )
    {
        if( VAR_3->cc.b_supported &&
           ( !VAR_3->p_packetizer || !VAR_3->p_packetizer->pf_get_cc ) )
            FUNC_0( VAR_3, VAR_1, VAR_2 );
        else
            FUNC_1( VAR_1 );
    }
}
