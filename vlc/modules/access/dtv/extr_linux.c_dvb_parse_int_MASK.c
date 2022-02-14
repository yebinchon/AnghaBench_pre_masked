
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linux_; } ;
typedef TYPE_1__ dvb_int_map_t ;


 TYPE_1__* FUNC_0 (int*,TYPE_1__ const*,size_t,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (int VAR_1, const dvb_int_map_t *VAR_2, size_t VAR_3, int VAR_4)
{
    const dvb_int_map_t *VAR_5 = FUNC_0(&VAR_1, VAR_2, VAR_3, sizeof (*VAR_2), VAR_0);
    return (VAR_5 != ((void*)0)) ? VAR_5->linux_ : VAR_4;
}
