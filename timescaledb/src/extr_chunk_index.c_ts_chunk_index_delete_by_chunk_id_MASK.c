
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int drop_index; } ;
typedef int ScanKeyData ;
typedef TYPE_1__ ChunkIndexDeleteData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int,int ,int *,TYPE_1__*) ;
 int VAR_4 ;

int
FUNC_3(int32 VAR_5, bool VAR_6)
{
 ScanKeyData VAR_7[1];
 ChunkIndexDeleteData VAR_8 = {
  .drop_index = VAR_6,
 };

 FUNC_1(&VAR_7[0],
    VAR_0,
    VAR_1,
    VAR_3,
    FUNC_0(VAR_5));

 return FUNC_2(VAR_2,
           VAR_7,
           1,
           VAR_4,
           ((void*)0),
           &VAR_8);
}
