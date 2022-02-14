
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int shm_mq_handle ;
typedef int shm_mq ;
typedef int dsm_segment ;
struct TYPE_5__ {int ack_dsm_handle; } ;
typedef int Oid ;
typedef int BgwMessageType ;
typedef TYPE_1__ BgwMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;

extern bool
FUNC_11(BgwMessageType VAR_4, Oid VAR_5)
{
 shm_mq *VAR_6;
 dsm_segment *VAR_7;
 shm_mq_handle *VAR_8;
 BgwMessage *VAR_9;
 bool VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_4, VAR_5);

 VAR_7 = FUNC_2(VAR_9->ack_dsm_handle);
 if (VAR_7 == ((void*)0))
  FUNC_5(VAR_1,
    (FUNC_6("TimescaleDB background worker dynamic shared memory segment not mapped")));
 VAR_6 = FUNC_9(FUNC_3(VAR_7), VAR_0);
 FUNC_10(VAR_6, VAR_2);
 VAR_8 = FUNC_8(VAR_6, VAR_7, ((void*)0));
 if (VAR_8 != ((void*)0))
  VAR_10 = FUNC_4(VAR_3, VAR_9, VAR_8);
 FUNC_1(VAR_7);
 FUNC_7(VAR_9);
 return VAR_10;
}
