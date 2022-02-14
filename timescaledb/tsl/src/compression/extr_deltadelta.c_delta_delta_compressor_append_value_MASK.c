
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ int64 ;
struct TYPE_3__ {int nulls; int delta_delta; scalar_t__ prev_delta; scalar_t__ prev_val; } ;
typedef TYPE_1__ DeltaDeltaCompressor ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void
FUNC_2(DeltaDeltaCompressor *VAR_0, int64 VAR_1)
{
 uint64 VAR_2;
 uint64 VAR_3;
 uint64 VAR_4;
 VAR_2 = ((uint64) VAR_1) - VAR_0->prev_val;
 VAR_3 = VAR_2 - VAR_0->prev_delta;

 VAR_0->prev_val = VAR_1;
 VAR_0->prev_delta = VAR_2;


 VAR_4 = FUNC_1(VAR_3);


 FUNC_0(&VAR_0->delta_delta, VAR_4);
 FUNC_0(&VAR_0->nulls, 0);
}
