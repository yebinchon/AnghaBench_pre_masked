
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int range_end; int range_start; int dimension_id; } ;
struct TYPE_7__ {TYPE_1__ fd; } ;
typedef int ScanKeyData ;
typedef TYPE_2__ DimensionSlice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_3 (int ,int *,int,int ,TYPE_2__**,int,int ,int ) ;

DimensionSlice *
FUNC_4(DimensionSlice *VAR_10)
{
 ScanKeyData VAR_11[3];

 FUNC_2(&VAR_11[0],
    VAR_1,
    VAR_4,
    VAR_7,
    FUNC_0(VAR_10->fd.dimension_id));
 FUNC_2(&VAR_11[1],
    VAR_3,
    VAR_4,
    VAR_8,
    FUNC_1(VAR_10->fd.range_start));
 FUNC_2(&VAR_11[2],
    VAR_2,
    VAR_4,
    VAR_8,
    FUNC_1(VAR_10->fd.range_end));

 FUNC_3(VAR_6,
          VAR_11,
          3,
          VAR_9,
          &VAR_10,
          1,
          VAR_0,
          VAR_5);

 return VAR_10;
}
