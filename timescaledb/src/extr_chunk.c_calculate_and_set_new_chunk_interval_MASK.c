
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_12__ {scalar_t__ interval_length; int id; } ;
struct TYPE_16__ {TYPE_2__ fd; } ;
struct TYPE_15__ {int num_dimensions; TYPE_6__* dimensions; } ;
struct TYPE_11__ {scalar_t__ chunk_target_size; } ;
struct TYPE_14__ {TYPE_1__ fd; int chunk_sizing_func; int main_table_relid; TYPE_5__* space; } ;
struct TYPE_13__ {scalar_t__* coordinates; } ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ Hyperspace ;
typedef TYPE_6__ Dimension ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_9(Hypertable *VAR_1, Point *VAR_2)
{
 Hyperspace *VAR_3 = VAR_1->space;
 Dimension *VAR_4 = ((void*)0);
 Datum VAR_5;
 int64 VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_1->chunk_sizing_func) || VAR_1->fd.chunk_target_size <= 0)
  return 0;


 for (VAR_8 = 0; VAR_8 < VAR_3->num_dimensions; VAR_8++)
 {
  VAR_4 = &VAR_3->dimensions[VAR_8];

  if (FUNC_1(VAR_4))
   break;

  VAR_4 = ((void*)0);
 }


 if (((void*)0) == VAR_4)
 {
  FUNC_6(VAR_0,
    "adaptive chunking enabled on hypertable \"%s\" without an open (time) dimension",
    FUNC_7(VAR_1->main_table_relid));

  return 0;
 }

 VAR_7 = VAR_2->coordinates[VAR_8];
 VAR_5 = FUNC_4(VAR_1->chunk_sizing_func,
        FUNC_2(VAR_4->fd.id),
        FUNC_3(VAR_7),
        FUNC_3(VAR_1->fd.chunk_target_size));
 VAR_6 = FUNC_0(VAR_5);


 if (VAR_6 <= 0 || VAR_6 == VAR_4->fd.interval_length)
  return 0;


 FUNC_8(VAR_4, VAR_6);

 return 1;
}
