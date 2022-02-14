
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; TYPE_1__* data; } ;
struct spu_channel {TYPE_2__ entries; } ;
typedef int spu_private_t ;
struct TYPE_3__ {int subpic; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct spu_channel*,size_t) ;

__attribute__((used)) static void FUNC_2(spu_private_t *VAR_0,
                              struct spu_channel *VAR_1)
{
    for (size_t VAR_2 = 0; VAR_2 < VAR_1->entries.size; VAR_2++)
    {
        FUNC_0(VAR_0, VAR_1->entries.data[VAR_2].subpic);
        FUNC_1(VAR_1, VAR_2);
    }
}
