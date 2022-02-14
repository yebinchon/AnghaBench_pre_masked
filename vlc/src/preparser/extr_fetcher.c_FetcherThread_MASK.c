
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetcher_thread {int worker; int active; int req; int fetcher; int (* pf_worker ) (int ,int ) ;int interrupt; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void* FUNC_4( void* VAR_0 )
{
    struct fetcher_thread* VAR_1 = VAR_0;
    FUNC_3( &VAR_1->interrupt );

    VAR_1->pf_worker( VAR_1->fetcher, VAR_1->req );

    FUNC_0( &VAR_1->active, 0 );
    FUNC_1( VAR_1->worker );
    return ((void*)0);
}
