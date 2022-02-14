
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int interval; unsigned int* burst; int lock; scalar_t__ start; scalar_t__ count; } ;
typedef TYPE_1__ zfs_ratelimit_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *) ;

void
FUNC_1(zfs_ratelimit_t *VAR_1, unsigned int *VAR_2,
    unsigned int VAR_3)
{
 VAR_1->count = 0;
 VAR_1->start = 0;
 VAR_1->interval = VAR_3;
 VAR_1->burst = VAR_2;
 FUNC_0(&VAR_1->lock, ((void*)0), VAR_0, ((void*)0));
}
