
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int VirtualTransactionId ;
struct TYPE_7__ {int message_type; int sender_pid; } ;
typedef int PGPROC ;
typedef int HTAB ;
typedef TYPE_1__ BgwMessage ;
typedef int AckResult ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;



 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_9(HTAB *VAR_2)
{
 BgwMessage *VAR_3 = FUNC_7();
 PGPROC *VAR_4;
 VirtualTransactionId VAR_5;
 AckResult VAR_6 = VAR_0;

 if (VAR_3 == ((void*)0))
  return 0;

 VAR_4 = FUNC_0(VAR_3->sender_pid);
 if (VAR_4 == ((void*)0))
 {
  FUNC_2(VAR_1,
    (FUNC_3("TimescaleDB background worker launcher received message from non-existent "
      "backend")));
  return 1;
 }

 FUNC_1(VAR_5, *VAR_4);

 switch (VAR_3->message_type)
 {
  case 129:
   VAR_6 = FUNC_5(VAR_2, VAR_3);
   break;
  case 128:
   VAR_6 = FUNC_6(VAR_2, VAR_3);
   break;
  case 130:
   VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
   break;
 }

 FUNC_8(VAR_3, VAR_6);
 return 1;
}
