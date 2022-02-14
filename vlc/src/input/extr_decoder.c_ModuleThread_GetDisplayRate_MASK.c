
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {float output_rate; int lock; int p_clock; } ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static float FUNC_3( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_0( VAR_0 );

    if( !VAR_1->p_clock )
        return 1.f;
    FUNC_1( &VAR_1->lock );
    float VAR_2 = VAR_1->output_rate;
    FUNC_2( &VAR_1->lock );
    return VAR_2;
}
