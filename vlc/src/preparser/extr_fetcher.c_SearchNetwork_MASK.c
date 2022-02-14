
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetcher_request {int item; } ;
typedef int input_fetcher_t ;


 int VAR_0 ;
 int FUNC_0 (struct fetcher_request*,int) ;
 scalar_t__ FUNC_1 (int *,struct fetcher_request*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3( input_fetcher_t* VAR_1, struct fetcher_request* VAR_2 )
{
    if( FUNC_1( VAR_1, VAR_2, VAR_0 ) )
    {
        FUNC_2( VAR_2->item, 1 );
        FUNC_0(VAR_2, 0);
    }
}
