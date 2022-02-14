
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_2(block_t *VAR_1)
{
    block_t *VAR_2 = ((void*)0);

    if(VAR_1)
    {
        if(VAR_1->i_flags & VAR_0)
            VAR_2 = VAR_1;
        else
            VAR_2 = FUNC_0(VAR_1);
    }

    if(VAR_2 && (VAR_2->i_flags & VAR_0))
    {
        FUNC_1(VAR_2);
        VAR_2 = ((void*)0);
    }

    return VAR_2;
}
