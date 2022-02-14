
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* p_buffer ;
struct TYPE_4__ {size_t received; scalar_t__ last; scalar_t__ first; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(p_buffer VAR_0, size_t VAR_1) {
    VAR_0->received += VAR_1;
    VAR_0->first += VAR_1;
    if (FUNC_0(VAR_0))
        VAR_0->first = VAR_0->last = 0;
}
