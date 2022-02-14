
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int lock; scalar_t__ out_pool; } ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0, bool VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );

    FUNC_2( &VAR_2->lock );
    if (VAR_2->out_pool)
        FUNC_1( VAR_2->out_pool, VAR_1 );
    FUNC_3( &VAR_2->lock );
}
