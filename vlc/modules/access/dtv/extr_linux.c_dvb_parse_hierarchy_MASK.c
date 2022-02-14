
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tab ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ dvb_int_map_t ;







 int FUNC_0 (int,TYPE_1__ const*,int,int const) ;

__attribute__((used)) static int FUNC_1 (int VAR_0)
{
    static const dvb_int_map_t VAR_1[] = {
        { 129, -1 },
        { 128, 0 },
        { 132, 1 },
        { 131, 2 },
        { 130, 4 },
    };
    return FUNC_0 (VAR_0, VAR_1, sizeof (VAR_1) / sizeof (*VAR_1),
                          129);
}
