
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int column_name; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Dimension ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*) ;

int
FUNC_2(Dimension *VAR_2, const char *VAR_3)
{
 FUNC_1(&VAR_2->fd.column_name, VAR_3);

 return FUNC_0(VAR_2->fd.id, VAR_1, VAR_2, VAR_0);
}
