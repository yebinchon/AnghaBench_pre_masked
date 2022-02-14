
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {scalar_t__ reader_pid; int mutex; } ;
typedef TYPE_1__ MessageQueue ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(MessageQueue *VAR_3)
{
 volatile MessageQueue *VAR_4 = VAR_3;
 pid_t VAR_5;

 FUNC_0(&VAR_4->mutex);
 if (VAR_4->reader_pid == VAR_1)
 {
  VAR_4->reader_pid = VAR_2;
 }
 VAR_5 = VAR_4->reader_pid;
 FUNC_1(&VAR_4->mutex);
 if (VAR_5 != VAR_2)
  FUNC_2(VAR_0,
    (FUNC_4("only one reader allowed for TimescaleDB background worker message queue"),
     FUNC_3("Current process is %d", VAR_5)));
}
