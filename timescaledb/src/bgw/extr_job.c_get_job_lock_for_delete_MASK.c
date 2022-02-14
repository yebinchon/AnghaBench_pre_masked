
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
struct TYPE_7__ {int pid; scalar_t__ isBackgroundWorker; } ;
typedef TYPE_2__ PGPROC ;
typedef int LOCKTAG ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,int ,int,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(int32 VAR_3)
{
 LOCKTAG VAR_4;
 bool VAR_5;



 VAR_5 = FUNC_7(VAR_3,
      VAR_0,
                         0,
      &VAR_4,
                  0);
 if (!VAR_5)
 {


  VirtualTransactionId *VAR_6 = FUNC_3(&VAR_4, VAR_0);
  PGPROC *VAR_7;

  if (FUNC_5(*VAR_6))
  {
   VAR_7 = FUNC_1(VAR_6->backendId);
   if (VAR_7 != ((void*)0) && VAR_7->isBackgroundWorker)
   {
    FUNC_6(VAR_1,
      "cancelling the background worker for job %d (pid %d)",
      VAR_3,
      VAR_7->pid);
    FUNC_2(VAR_2, FUNC_4(VAR_7->pid));
   }
  }


  VAR_5 = FUNC_7(VAR_3,
       VAR_0,
                          0,
       &VAR_4,
                   1);
 }
 FUNC_0(VAR_5);
}
