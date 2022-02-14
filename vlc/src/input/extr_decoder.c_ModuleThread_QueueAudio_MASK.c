
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int dummy; } ;
typedef int decoder_t ;
typedef int block_t ;


 int FUNC_0 (struct decoder_owner*,int *) ;
 int FUNC_1 (struct decoder_owner*,int) ;
 int VAR_0 ;
 struct decoder_owner* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_1, block_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_2( VAR_1 );

    int VAR_4 = FUNC_0( VAR_3, VAR_2 );

    FUNC_1( VAR_3, VAR_4 != VAR_0 );
}
