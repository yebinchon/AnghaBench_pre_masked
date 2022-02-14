
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_elements; size_t read_upto; int lock; int * buffer; } ;
typedef TYPE_1__ MessageQueue ;
typedef int BgwMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static BgwMessage *
FUNC_7(MessageQueue *VAR_4)
{
 BgwMessage *VAR_5 = ((void*)0);

 FUNC_0(VAR_4->lock, VAR_2);
 if (FUNC_6(VAR_4) != VAR_3)
  FUNC_2(VAR_1,
    (FUNC_3(
     "cannot read if not reader for TimescaleDB background worker message queue")));

 if (VAR_4->num_elements > 0)
 {
  VAR_5 = FUNC_5(sizeof(BgwMessage));
  FUNC_4(VAR_5, &VAR_4->buffer[VAR_4->read_upto], sizeof(BgwMessage));
  VAR_4->read_upto = (VAR_4->read_upto + 1) % VAR_0;
  VAR_4->num_elements--;
 }
 FUNC_1(VAR_4->lock);
 return VAR_5;
}
