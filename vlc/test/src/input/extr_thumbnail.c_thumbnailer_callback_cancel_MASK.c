
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int b_done; int cond; int lock; } ;
typedef int picture_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void* VAR_0, picture_t* VAR_1 )
{
    struct test_ctx* VAR_2 = VAR_0;
    FUNC_0( VAR_1 == ((void*)0) );
    FUNC_2( &VAR_2->lock );
    VAR_2->b_done = 1;
    FUNC_3( &VAR_2->lock );
    FUNC_1( &VAR_2->cond );
}
