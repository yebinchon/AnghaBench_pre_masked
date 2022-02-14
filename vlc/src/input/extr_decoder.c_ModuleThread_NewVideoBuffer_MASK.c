
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int out_pool; int p_vout; } ;
typedef int picture_t ;
typedef int decoder_t ;


 int FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static picture_t *FUNC_4( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_1( VAR_0 );
    FUNC_0( VAR_1->p_vout );

    picture_t *VAR_2 = FUNC_3( VAR_1->out_pool );
    if (VAR_2)
        FUNC_2( VAR_2 );
    return VAR_2;
}
