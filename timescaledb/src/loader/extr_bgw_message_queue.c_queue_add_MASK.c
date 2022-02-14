
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int procLatch; } ;
struct TYPE_5__ {size_t num_elements; size_t read_upto; int lock; int * buffer; } ;
typedef int QueueResponseType ;
typedef TYPE_1__ MessageQueue ;
typedef int BgwMessage ;


 size_t VAR_0 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static QueueResponseType
FUNC_6(MessageQueue *VAR_6, BgwMessage *VAR_7)
{
 QueueResponseType VAR_8 = VAR_4;

 FUNC_1(VAR_6->lock, VAR_2);
 if (VAR_6->num_elements < VAR_0)
 {
  FUNC_4(&VAR_6->buffer[(VAR_6->read_upto + VAR_6->num_elements) % VAR_0],
      VAR_7,
      sizeof(BgwMessage));
  VAR_6->num_elements++;
  VAR_8 = VAR_3;
 }
 FUNC_2(VAR_6->lock);

 if (FUNC_5(VAR_6) != VAR_1)
  FUNC_3(&FUNC_0(FUNC_5(VAR_6))->procLatch);
 else
  VAR_8 = VAR_5;
 return VAR_8;
}
