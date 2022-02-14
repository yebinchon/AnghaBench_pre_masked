
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int compressed_hypertable_id; int compressed; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Hypertable ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

bool
FUNC_2(Hypertable *VAR_0, int32 VAR_1)
{
 FUNC_0(!VAR_0->fd.compressed);
 VAR_0->fd.compressed_hypertable_id = VAR_1;
 return FUNC_1(VAR_0) > 0;
}
