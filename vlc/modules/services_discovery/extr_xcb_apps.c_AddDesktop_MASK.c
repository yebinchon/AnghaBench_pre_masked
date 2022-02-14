
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int services_discovery_t ;
typedef int input_item_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(services_discovery_t *VAR_0)
{
    input_item_t *VAR_1;

    VAR_1 = FUNC_1 ("screen://", FUNC_0("Desktop"));
    if (VAR_1 == ((void*)0))
        return;

    FUNC_3(VAR_0, VAR_1);
    FUNC_2 (VAR_1);
}
