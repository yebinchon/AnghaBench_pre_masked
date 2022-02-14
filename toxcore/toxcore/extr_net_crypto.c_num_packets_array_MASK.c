
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ buffer_start; scalar_t__ buffer_end; } ;
typedef TYPE_1__ Packets_Array ;



__attribute__((used)) static uint32_t FUNC_0(const Packets_Array *VAR_0)
{
    return VAR_0->buffer_end - VAR_0->buffer_start;
}
