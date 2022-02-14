
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* zb_blkid; scalar_t__ zb_level; void* zb_object; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef void* uint64_t ;



__attribute__((used)) static inline void
FUNC_0(zbookmark_phys_t *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2)
{
 VAR_0->zb_object = VAR_1;
 VAR_0->zb_level = 0;
 VAR_0->zb_blkid = VAR_2;
}
