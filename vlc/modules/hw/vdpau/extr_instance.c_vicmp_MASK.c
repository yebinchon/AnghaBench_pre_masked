
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int display; int name; } ;
typedef TYPE_1__ vdp_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, const vdp_instance_t *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0, VAR_2->name);
    if (VAR_3)
        return VAR_3;

    if (VAR_1 < 0)
        VAR_1 = FUNC_0(VAR_2->display);
    return VAR_1 - VAR_2->num;
}
