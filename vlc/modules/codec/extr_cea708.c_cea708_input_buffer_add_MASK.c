
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int capacity; int start; int * ringbuffer; } ;
typedef TYPE_1__ cea708_input_buffer_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(cea708_input_buffer_t *VAR_1, uint8_t VAR_2)
{
    if( FUNC_0(VAR_1) > 0 )
        VAR_1->ringbuffer[(VAR_1->start + VAR_1->capacity++) % VAR_0] = VAR_2;
}
