
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* ptr; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ json_value ;


 TYPE_3__* FUNC_0 (TYPE_3__ const*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline
char * FUNC_1(const json_value *VAR_1, const char *VAR_2)
{
    VAR_1 = FUNC_0(VAR_1, VAR_2);
    if (VAR_1 && VAR_1->type == VAR_0)
        return VAR_1->u.string.ptr;
    return ((void*)0);
}
