
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_va_t ;
typedef int uint8_t ;
typedef int picture_t ;
struct TYPE_5__ {int (* get ) (TYPE_2__*,int *,int **) ;} ;


 int FUNC_0 (TYPE_2__*,int *,int **) ;

__attribute__((used)) static inline int FUNC_1(vlc_va_t *VAR_0, picture_t *VAR_1, uint8_t **VAR_2)
{
    return VAR_0->ops->get(VAR_0, VAR_1, VAR_2);
}
