
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* end; void* start; int type; } ;
typedef TYPE_1__ TimeRange ;
struct TYPE_6__ {int type; int end; int start; } ;
typedef TYPE_2__ InternalTimeRange ;


 void* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static TimeRange
FUNC_1(InternalTimeRange VAR_0)
{
 TimeRange VAR_1;
 VAR_1.type = VAR_0.type;

 VAR_1.start = FUNC_0(VAR_0.start, VAR_0.type, ((void*)0));
 VAR_1.end = FUNC_0(VAR_0.end, VAR_0.type, ((void*)0));

 return VAR_1;
}
