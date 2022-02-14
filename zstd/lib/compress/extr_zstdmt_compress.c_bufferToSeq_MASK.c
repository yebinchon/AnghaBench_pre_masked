
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int capacity; int * seq; int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ rawSeqStore_t ;
typedef int rawSeq ;
struct TYPE_6__ {int capacity; scalar_t__ start; } ;
typedef TYPE_2__ buffer_t ;



__attribute__((used)) static rawSeqStore_t FUNC_0(buffer_t VAR_0)
{
    rawSeqStore_t VAR_1 = {((void*)0), 0, 0, 0};
    VAR_1.seq = (rawSeq*)VAR_0.start;
    VAR_1.capacity = VAR_0.capacity / sizeof(rawSeq);
    return VAR_1;
}
