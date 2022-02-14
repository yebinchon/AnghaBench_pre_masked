
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* vs_bytes; scalar_t__* vs_ops; } ;
typedef TYPE_1__ vdev_stat_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(vdev_stat_t *VAR_0, vdev_stat_t *VAR_1,
    vdev_stat_t *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_1, sizeof (*VAR_2));
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->vs_ops); VAR_3++)
  VAR_2->vs_ops[VAR_3] = (VAR_1->vs_ops[VAR_3] - VAR_0->vs_ops[VAR_3]);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->vs_bytes); VAR_3++)
  VAR_2->vs_bytes[VAR_3] = (VAR_1->vs_bytes[VAR_3] - VAR_0->vs_bytes[VAR_3]);
}
