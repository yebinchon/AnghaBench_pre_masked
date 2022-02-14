
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_6__ {unsigned long long available; unsigned long long picture_count; int canceled; int picture; int refs; int wait; int lock; int pic_unlock; int pic_lock; } ;
typedef TYPE_1__ picture_pool_t ;
struct TYPE_7__ {int picture_count; int picture; int unlock; int lock; } ;
typedef TYPE_2__ picture_pool_configuration_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

picture_pool_t *FUNC_6(const picture_pool_configuration_t *VAR_1)
{
    if (FUNC_3(VAR_1->picture_count > VAR_0))
        return ((void*)0);

    picture_pool_t *VAR_2;
    size_t VAR_3 = sizeof (*VAR_2) + VAR_1->picture_count * sizeof (picture_t *);

    VAR_3 += (-VAR_3) & (VAR_0 - 1);
    VAR_2 = FUNC_0(VAR_0, VAR_3);
    if (FUNC_3(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->pic_lock = VAR_1->lock;
    VAR_2->pic_unlock = VAR_1->unlock;
    FUNC_5(&VAR_2->lock);
    FUNC_4(&VAR_2->wait);
    if (VAR_1->picture_count == VAR_0)
        VAR_2->available = ~0ULL;
    else
        VAR_2->available = (1ULL << VAR_1->picture_count) - 1;
    FUNC_1(&VAR_2->refs, 1);
    VAR_2->picture_count = VAR_1->picture_count;
    FUNC_2(VAR_2->picture, VAR_1->picture,
           VAR_1->picture_count * sizeof (picture_t *));
    VAR_2->canceled = 0;
    return VAR_2;
}
