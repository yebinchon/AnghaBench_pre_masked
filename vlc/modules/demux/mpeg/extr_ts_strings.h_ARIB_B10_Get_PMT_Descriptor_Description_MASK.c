
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int id; char const* psz_desc; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(uint8_t VAR_1)
{
    for(uint8_t VAR_2=0; VAR_2<5; VAR_2++)
        if(VAR_0[VAR_2].id == VAR_1)
            return VAR_0[VAR_2].psz_desc;
    return ((void*)0);
}
