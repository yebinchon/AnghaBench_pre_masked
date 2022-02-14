
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ reader_pid; int mutex; } ;
typedef TYPE_1__ MessageQueue ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(MessageQueue *VAR_4)
{
 volatile MessageQueue *VAR_5 = VAR_4;
 bool VAR_6 = 0;

 FUNC_0(&VAR_5->mutex);
 if (VAR_5->reader_pid == VAR_3)
 {
  VAR_6 = 1;
  VAR_5->reader_pid = VAR_2;
 }
 FUNC_1(&VAR_5->mutex);

 if (!VAR_6)
  FUNC_2(VAR_1,
    (VAR_0,
     FUNC_4("multiple TimescaleDB background worker launchers have been started when "
      "only one is allowed"),
     FUNC_3("This is a bug, please report it on our github page.")));
}
