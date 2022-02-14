
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int capacity; int start; int* ringbuffer; } ;
typedef TYPE_1__ cea708_input_buffer_t ;


 int VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0(cea708_input_buffer_t *VAR_1, uint8_t VAR_2)
{
    if(VAR_2 + 1 > VAR_1->capacity)
        return 0;
    VAR_2 = (VAR_1->start + VAR_2) % VAR_0;
    return VAR_1->ringbuffer[VAR_2];
}
