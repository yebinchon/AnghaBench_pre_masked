
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int * lock; int mutex; int reader_pid; } ;
typedef int MessageQueue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_6()
{
 bool VAR_6;

 FUNC_1(VAR_0, VAR_4);
 VAR_5 = FUNC_3(VAR_1, sizeof(MessageQueue), &VAR_6);
 if (!VAR_6)
 {
  FUNC_5(VAR_5, 0, sizeof(MessageQueue));
  VAR_5->reader_pid = VAR_3;
  FUNC_4(&VAR_5->mutex);
  VAR_5->lock = &(FUNC_0(VAR_2))->lock;
 }
 FUNC_2(VAR_0);
}
