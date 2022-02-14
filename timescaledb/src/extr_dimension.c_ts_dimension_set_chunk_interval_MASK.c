
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_5__ {int id; int interval_length; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Dimension ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int ) ;
 int VAR_1 ;

int
FUNC_1(Dimension *VAR_2, int64 VAR_3)
{
 VAR_2->fd.interval_length = VAR_3;

 return FUNC_0(VAR_2->fd.id, VAR_1, VAR_2, VAR_0);
}
