
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetcher_thread {int interrupt; int thread; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct fetcher_thread*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5( void* VAR_0, void* VAR_1 )
{
    struct fetcher_thread* VAR_2 = VAR_1;
    FUNC_0( VAR_0 );

    FUNC_3( &VAR_2->interrupt );
    FUNC_4( VAR_2->thread, ((void*)0) );
    FUNC_2( &VAR_2->interrupt );
    FUNC_1( VAR_2 );
}
