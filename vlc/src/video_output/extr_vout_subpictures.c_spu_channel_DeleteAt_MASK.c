
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; TYPE_1__* data; } ;
struct spu_channel {TYPE_2__ entries; } ;
struct TYPE_3__ {int subpic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_3(struct spu_channel *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_1 < VAR_0->entries.size);
    FUNC_0(VAR_0->entries.data[VAR_1].subpic);

    FUNC_1(VAR_0->entries.data[VAR_1].subpic);
    FUNC_2(&VAR_0->entries, VAR_1);
}
