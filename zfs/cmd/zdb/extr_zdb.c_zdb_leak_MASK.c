
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vdev_id; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 vdev_t *VAR_3 = VAR_0;

 (void) FUNC_0("leaked space: vdev %llu, offset 0x%llx, size %llu\n",
     (u_longlong_t)VAR_3->vdev_id, (u_longlong_t)VAR_1, (u_longlong_t)VAR_2);
}
