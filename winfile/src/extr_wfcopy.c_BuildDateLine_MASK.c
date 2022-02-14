
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int ftLastWriteTime; int nFileSizeLow; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef TYPE_2__* PLFNDTA ;
typedef scalar_t__ LPTSTR ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int ,int ) ;

VOID
FUNC_5(LPTSTR VAR_2, PLFNDTA VAR_3)
{
   FUNC_4(VAR_2, VAR_0, VAR_3->fd.nFileSizeLow);
   FUNC_2(VAR_2, VAR_1);
   FUNC_0(&VAR_3->fd.ftLastWriteTime, VAR_2 + FUNC_3(VAR_2));
   FUNC_2(VAR_2, VAR_1);
   FUNC_1(&VAR_3->fd.ftLastWriteTime, VAR_2 + FUNC_3(VAR_2));
}
