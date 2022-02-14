
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char member_0; int const member_1; } ;
typedef TYPE_1__ dvb_int_map_t ;





 int FUNC_0 (char,TYPE_1__ const*,int,int const) ;

__attribute__((used)) static unsigned FUNC_1 (char VAR_0)
{
    static const dvb_int_map_t VAR_1[5] = {
        { 0, 128 },
        { 'H', 129 },
        { 'L', 129 },
        { 'R', 130 },
        { 'V', 130 },
    };
    return FUNC_0 (VAR_0, VAR_1, 5, 128);
}
