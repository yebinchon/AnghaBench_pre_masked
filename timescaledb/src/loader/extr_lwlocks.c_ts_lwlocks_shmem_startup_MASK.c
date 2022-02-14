
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int * chunk_append; } ;
typedef int TSLWLocks ;
typedef int LWLock ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ,int,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_5 ;

void
FUNC_6()
{
 bool VAR_6;
 LWLock **VAR_7;

 FUNC_1(VAR_0, VAR_2);
 VAR_5 = FUNC_3(VAR_4, sizeof(TSLWLocks), &VAR_6);
 if (!VAR_6)
 {
  FUNC_5(VAR_5, 0, sizeof(TSLWLocks));
  VAR_5->chunk_append = &(FUNC_0(VAR_1))->lock;
 }
 FUNC_2(VAR_0);






 VAR_7 = (LWLock **) FUNC_4(VAR_3);
 *VAR_7 = VAR_5->chunk_append;
}
