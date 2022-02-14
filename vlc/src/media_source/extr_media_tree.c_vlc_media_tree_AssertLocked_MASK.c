
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_media_tree_t ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ media_tree_private_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(vlc_media_tree_t *VAR_0)
{
    media_tree_private_t *VAR_1 = FUNC_0(VAR_0);
    FUNC_1(&VAR_1->lock);
}
