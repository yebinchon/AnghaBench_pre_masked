
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ptr; size_t capacity; scalar_t__ size; } ;
typedef TYPE_1__ buffer_t ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_1 (size_t) ;

__attribute__((used)) static buffer_t FUNC_2(size_t VAR_1)
{
    FUNC_0(VAR_1 > 0);
    void* const VAR_2 = FUNC_1(VAR_1);
    if (VAR_2==((void*)0)) return VAR_0;

    buffer_t VAR_3;
    VAR_3.ptr = VAR_2;
    VAR_3.capacity = VAR_1;
    VAR_3.size = 0;
    return VAR_3;
}
