
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* close; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_2__ Group_c ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(Group_c *VAR_2)
{
    unsigned int VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        if (VAR_2->close[VAR_3].type == VAR_0) {
            ++VAR_4;
        }
    }

    return VAR_4;
}
