
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; int type; } ;
typedef TYPE_1__ InternalTimeRange ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(InternalTimeRange *VAR_1, int64 VAR_2)
{
 VAR_1->start = FUNC_0(VAR_2, VAR_1->start, VAR_1->type);
 VAR_1->end = FUNC_0(VAR_2, VAR_1->end, VAR_1->type);

 if (VAR_1->end < VAR_0 - VAR_2)
  VAR_1->end += VAR_2;

 if (VAR_1->start > VAR_1->end)
  VAR_1->start = VAR_1->end;
}
