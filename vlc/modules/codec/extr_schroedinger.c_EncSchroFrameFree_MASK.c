
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc_picture_free_t {int p_pic; } ;
typedef int SchroFrame ;


 int FUNC_0 (struct enc_picture_free_t*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( SchroFrame *VAR_0, void *VAR_1 )
{
    struct enc_picture_free_t *VAR_2 = VAR_1;

    if( !VAR_2 )
        return;

    FUNC_1( VAR_2->p_pic );
    FUNC_0( VAR_2 );
    (void)VAR_0;
}
