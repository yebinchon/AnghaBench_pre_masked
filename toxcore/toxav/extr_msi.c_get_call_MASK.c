
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t calls_tail; int ** calls; } ;
typedef TYPE_1__ MSISession ;
typedef int MSICall ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static MSICall *FUNC_1 (MSISession *VAR_0, uint32_t VAR_1)
{
    FUNC_0(VAR_0);

    if (VAR_0->calls == ((void*)0) || VAR_0->calls_tail < VAR_1)
        return ((void*)0);

    return VAR_0->calls[VAR_1];
}
