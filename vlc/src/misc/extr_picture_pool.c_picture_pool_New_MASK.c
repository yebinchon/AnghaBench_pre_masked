
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picture_t ;
typedef int picture_pool_t ;
struct TYPE_3__ {unsigned int picture_count; int * const* picture; } ;
typedef TYPE_1__ picture_pool_configuration_t ;


 int * FUNC_0 (TYPE_1__*) ;

picture_pool_t *FUNC_1(unsigned VAR_0, picture_t *const *VAR_1)
{
    picture_pool_configuration_t VAR_2 = {
        .picture_count = VAR_0,
        .picture = VAR_1,
    };

    return FUNC_0(&VAR_2);
}
