
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t capacity; int * data; } ;
typedef TYPE_1__ data_buffer_t ;


 scalar_t__ FUNC_0 (size_t const) ;

data_buffer_t FUNC_1(size_t const VAR_0) {
    data_buffer_t VAR_1 = {};

    VAR_1.data = (uint8_t*)FUNC_0(VAR_0);
    if (VAR_1.data == ((void*)0))
        return VAR_1;
    VAR_1.capacity = VAR_0;
    return VAR_1;
}
