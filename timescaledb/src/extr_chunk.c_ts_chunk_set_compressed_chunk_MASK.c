
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int ScanKeyData ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,int *,int ,int ,int ,int ) ;
 int VAR_8 ;

bool
FUNC_3(Chunk *VAR_9, int32 VAR_10, bool VAR_11)
{
 int32 VAR_12;
 ScanKeyData VAR_13[1];
 FUNC_1(&VAR_13[0],
    VAR_0,
    VAR_1,
    VAR_4,
    FUNC_0(VAR_9->fd.id));
 if (VAR_11)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_10;
 return FUNC_2(VAR_2,
          VAR_13,
          1,
          VAR_8,
          &VAR_12,
          0,
          VAR_5,
          VAR_7,
          VAR_3) > 0;
}
