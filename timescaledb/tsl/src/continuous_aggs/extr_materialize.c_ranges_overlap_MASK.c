
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ InternalTimeRange ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(InternalTimeRange VAR_0, InternalTimeRange VAR_1)
{
 FUNC_0(VAR_0.start <= VAR_0.end);
 FUNC_0(VAR_1.start <= VAR_1.end);
 return !(VAR_0.end < VAR_1.start ||
    VAR_1.end < VAR_0.start);
}
