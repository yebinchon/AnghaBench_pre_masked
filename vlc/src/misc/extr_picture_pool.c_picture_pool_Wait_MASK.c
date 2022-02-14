
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_9__ {scalar_t__ refs; unsigned long long available; scalar_t__ (* pic_lock ) (TYPE_1__*) ;int lock; int wait; TYPE_1__** picture; scalar_t__ canceled; } ;
typedef TYPE_2__ picture_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int,int ) ;
 int FUNC_2 (unsigned long long) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

picture_t *FUNC_9(picture_pool_t *VAR_2)
{
    FUNC_7(&VAR_2->lock);
    FUNC_0(VAR_2->refs > 0);

    while (VAR_2->available == 0)
    {
        if (VAR_2->canceled)
        {
            FUNC_8(&VAR_2->lock);
            return ((void*)0);
        }
        FUNC_6(&VAR_2->wait, &VAR_2->lock);
    }

    int VAR_3 = FUNC_2(VAR_2->available);
    VAR_2->available &= ~(1ULL << VAR_3);
    FUNC_8(&VAR_2->lock);

    picture_t *VAR_4 = VAR_2->picture[VAR_3];

    if (VAR_2->pic_lock != ((void*)0) && VAR_2->pic_lock(VAR_4) != VAR_0) {
        FUNC_7(&VAR_2->lock);
        VAR_2->available |= 1ULL << VAR_3;
        FUNC_5(&VAR_2->wait);
        FUNC_8(&VAR_2->lock);
        return ((void*)0);
    }

    picture_t *VAR_5 = FUNC_3(VAR_2, VAR_3);
    if (VAR_5 != ((void*)0)) {
        FUNC_0(VAR_5->p_next == ((void*)0));
        FUNC_1(&VAR_2->refs, 1, VAR_1);
    }
    return VAR_5;
}
