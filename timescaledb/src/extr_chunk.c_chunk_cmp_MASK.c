
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hypertable_id; } ;
struct TYPE_4__ {scalar_t__ table_id; TYPE_1__ fd; } ;
typedef TYPE_2__ Chunk ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Chunk *VAR_2 = *((const Chunk **) VAR_0);
 const Chunk *VAR_3 = *((const Chunk **) VAR_1);

 if (VAR_2->fd.hypertable_id < VAR_3->fd.hypertable_id)
  return -1;
 if (VAR_2->fd.hypertable_id > VAR_3->fd.hypertable_id)
  return 1;
 if (VAR_2->table_id < VAR_3->table_id)
  return -1;
 if (VAR_2->table_id > VAR_3->table_id)
  return 1;
 return 0;
}
