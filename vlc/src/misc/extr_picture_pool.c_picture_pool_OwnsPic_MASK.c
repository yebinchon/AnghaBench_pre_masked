
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_5__ {scalar_t__ destroy; int * opaque; } ;
struct TYPE_6__ {TYPE_1__ gc; } ;
typedef TYPE_2__ picture_priv_t ;
struct TYPE_7__ {int ** picture; } ;
typedef TYPE_3__ picture_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(picture_pool_t *VAR_2, picture_t *VAR_3)
{
    picture_priv_t *VAR_4 = (picture_priv_t *)VAR_3;

    while (VAR_4->gc.destroy != VAR_1) {
        if (VAR_4->gc.opaque == ((void*)0))
            return 0;

        VAR_3 = VAR_4->gc.opaque;
        VAR_4 = (picture_priv_t *)VAR_3;
    }

    do {
        uintptr_t VAR_5 = (uintptr_t)VAR_4->gc.opaque;
        picture_pool_t *VAR_6 = (void *)(VAR_5 & ~(VAR_0 - 1));

        if (VAR_2 == VAR_6)
            return 1;

        VAR_3 = VAR_6->picture[VAR_5 & (VAR_0 - 1 )];
        VAR_4 = (picture_priv_t *)VAR_3;
    } while (VAR_4->gc.destroy == VAR_1);

    return 0;
}
