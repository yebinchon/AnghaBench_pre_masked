
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int start; int capacity; } ;
typedef TYPE_1__ cea708_input_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static uint8_t FUNC_1(cea708_input_buffer_t *VAR_1)
{
    uint8_t VAR_2 = FUNC_0( VAR_1, 0 );
    VAR_1->start = (VAR_1->start + 1) % VAR_0;
    VAR_1->capacity--;
    return VAR_2;
}
