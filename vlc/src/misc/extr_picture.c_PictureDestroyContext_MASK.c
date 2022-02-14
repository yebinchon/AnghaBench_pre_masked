
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* context; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_6__ {int (* destroy ) (TYPE_2__*) ;} ;
typedef TYPE_2__ picture_context_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( picture_t *VAR_0 )
{
    picture_context_t *VAR_1 = VAR_0->context;
    if (VAR_1 != ((void*)0))
    {
        VAR_1->destroy(VAR_1);
        VAR_0->context = ((void*)0);
    }
}
