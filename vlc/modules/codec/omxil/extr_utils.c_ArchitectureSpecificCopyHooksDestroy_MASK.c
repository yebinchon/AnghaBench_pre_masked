
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int copy_cache_t ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ ArchitectureSpecificCopyData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3( int VAR_1,
                                           ArchitectureSpecificCopyData *VAR_2 )
{
    if (!VAR_2->data)
        return;







    FUNC_1(VAR_2->data);
    VAR_2->data = ((void*)0);
}
