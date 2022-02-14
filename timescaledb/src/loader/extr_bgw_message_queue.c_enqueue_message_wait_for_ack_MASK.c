
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ shm_mq_result ;
typedef int shm_mq_handle ;
typedef scalar_t__ Size ;
typedef scalar_t__ QueueResponseType ;
typedef int MessageQueue ;
typedef int BgwMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int,int ,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*,void**,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static bool
FUNC_8(MessageQueue *VAR_10, BgwMessage *VAR_11,
        shm_mq_handle *VAR_12)
{
 Size VAR_13 = 0;
 QueueResponseType VAR_14;
 bool *VAR_15 = ((void*)0);
 shm_mq_result VAR_16;
 bool VAR_17 = 0;
 int VAR_18;
 VAR_14 = FUNC_5(VAR_10, VAR_11);
 if (VAR_14 != VAR_3)
  return 0;

 VAR_16 = FUNC_7(VAR_10, VAR_12);
 if (VAR_16 != VAR_5)
  return 0;


 for (VAR_18 = 1; VAR_18 <= VAR_0; VAR_18++)
 {
  VAR_16 = FUNC_6(VAR_12, &VAR_13, (void **) &VAR_15, 1);
  if (VAR_16 != VAR_6)
   break;
  FUNC_3(VAR_2, (FUNC_4("TimescaleDB ack message receive failure, retrying")));



  FUNC_2(VAR_4,
      VAR_8 | VAR_9,
      VAR_1,
      VAR_7);

  FUNC_1(VAR_4);
  FUNC_0();
 }

 if (VAR_16 != VAR_5)
  return 0;

 VAR_17 = (VAR_13 != 0) && *VAR_15;

 return VAR_17;
}
