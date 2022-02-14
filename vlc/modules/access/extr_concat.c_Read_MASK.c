
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pf_read; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_t *VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 == ((void*)0))
        return 0;




    if (FUNC_1(VAR_3->pf_read == ((void*)0)))
        return 0;

    return FUNC_2(VAR_3, VAR_1, VAR_2);
}
