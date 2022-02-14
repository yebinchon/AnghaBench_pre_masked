
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_9__ {int id; } ;
struct TYPE_13__ {TYPE_1__ fd; } ;
struct TYPE_10__ {int range_start; } ;
struct TYPE_12__ {TYPE_2__ fd; } ;
struct TYPE_11__ {int space; } ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ DimensionSlice ;
typedef TYPE_5__ Dimension ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(int32 VAR_3, Hypertable *VAR_4)
{
 Dimension *VAR_5 = FUNC_1(VAR_4->space, 0);
 DimensionSlice *VAR_6 =
  FUNC_2(VAR_5->fd.id,
           VAR_2);

 if (!VAR_6)
  return -1;

 FUNC_0(VAR_5 != ((void*)0));

 return FUNC_3(VAR_3,
                VAR_5->fd.id,
                VAR_0,
                VAR_6->fd.range_start,
                VAR_1,
                -1);
}
