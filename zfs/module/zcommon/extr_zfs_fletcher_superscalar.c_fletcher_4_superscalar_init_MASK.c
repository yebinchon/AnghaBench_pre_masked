
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_fletcher_superscalar_t ;
struct TYPE_3__ {int superscalar; } ;
typedef TYPE_1__ fletcher_4_ctx_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(fletcher_4_ctx_t *VAR_0)
{
 FUNC_0(VAR_0->superscalar, 4 * sizeof (zfs_fletcher_superscalar_t));
}
