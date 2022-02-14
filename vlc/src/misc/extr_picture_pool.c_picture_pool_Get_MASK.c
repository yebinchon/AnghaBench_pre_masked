
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_9__ {scalar_t__ refs; unsigned long long available; scalar_t__ (* pic_lock ) (TYPE_1__*) ;int lock; TYPE_1__** picture; int canceled; } ;
typedef TYPE_2__ picture_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int,int ) ;
 int FUNC_2 (unsigned long long) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

picture_t *FUNC_8(picture_pool_t *VAR_2)
{
    unsigned long long VAR_3;

    FUNC_6(&VAR_2->lock);
    FUNC_0(VAR_2->refs > 0);
    VAR_3 = VAR_2->available;

    while (VAR_3 != 0)
    {
        int VAR_4 = FUNC_2(VAR_3);

        if (FUNC_5(VAR_2->canceled))
            break;

        VAR_2->available &= ~(1ULL << VAR_4);
        FUNC_7(&VAR_2->lock);
        VAR_3 &= ~(1ULL << VAR_4);

        picture_t *VAR_5 = VAR_2->picture[VAR_4];

        if (VAR_2->pic_lock != ((void*)0) && VAR_2->pic_lock(VAR_5) != VAR_0) {
            FUNC_6(&VAR_2->lock);
            VAR_2->available |= 1ULL << VAR_4;
            continue;
        }

        picture_t *VAR_6 = FUNC_3(VAR_2, VAR_4);
        if (VAR_6 != ((void*)0)) {
            FUNC_0(VAR_6->p_next == ((void*)0));
            FUNC_1(&VAR_2->refs, 1, VAR_1);
        }
        return VAR_6;
    }

    FUNC_7(&VAR_2->lock);
    return ((void*)0);
}
