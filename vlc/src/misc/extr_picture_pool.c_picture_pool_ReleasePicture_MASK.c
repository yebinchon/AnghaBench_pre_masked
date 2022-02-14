
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_5__ {int opaque; } ;
struct TYPE_6__ {TYPE_1__ gc; } ;
typedef TYPE_2__ picture_priv_t ;
struct TYPE_7__ {unsigned long long available; int lock; int wait; int (* pic_unlock ) (int *) ;int ** picture; } ;
typedef TYPE_3__ picture_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(picture_t *VAR_1)
{
    picture_priv_t *VAR_2 = (picture_priv_t *)VAR_1;
    uintptr_t VAR_3 = (uintptr_t)VAR_2->gc.opaque;
    picture_pool_t *VAR_4 = (void *)(VAR_3 & ~(VAR_0 - 1));
    unsigned VAR_5 = VAR_3 & (VAR_0 - 1);
    picture_t *VAR_6 = VAR_4->picture[VAR_5];

    if (VAR_4->pic_unlock != ((void*)0))
        VAR_4->pic_unlock(VAR_6);
    FUNC_1(VAR_6);

    FUNC_5(&VAR_4->lock);
    FUNC_0(!(VAR_4->available & (1ULL << VAR_5)));
    VAR_4->available |= 1ULL << VAR_5;
    FUNC_4(&VAR_4->wait);
    FUNC_6(&VAR_4->lock);

    FUNC_2(VAR_4);
}
