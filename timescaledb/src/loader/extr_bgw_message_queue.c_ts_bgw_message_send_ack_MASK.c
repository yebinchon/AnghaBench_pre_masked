
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_4__ {int sender_pid; int ack_dsm_handle; } ;
typedef size_t MessageAckSent ;
typedef TYPE_1__ BgwMessage ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int * VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;
 size_t FUNC_8 (int *,int) ;

extern void
FUNC_9(BgwMessage *VAR_3, bool VAR_4)
{
 dsm_segment *VAR_5;
 VAR_5 = FUNC_2(VAR_3->ack_dsm_handle);
 if (VAR_5 != ((void*)0))
 {
  MessageAckSent VAR_6;

  VAR_6 = FUNC_8(VAR_5, VAR_4);
  if (VAR_6 != VAR_0)
   FUNC_4(VAR_1,
     (FUNC_6("TimescaleDB background worker launcher unable to send ack to backend "
       "pid %d",
       VAR_3->sender_pid),
      FUNC_5("Reason: %s", VAR_2[VAR_6])));
  FUNC_3(VAR_5);
 }



 FUNC_7(VAR_3);
}
