
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {int drop_index; } ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef TYPE_2__ ChunkIndexDeleteData ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int,int ,int *,TYPE_2__*) ;
 int VAR_6 ;
 char* FUNC_5 (int ) ;
 int VAR_7 ;

int
FUNC_6(Chunk *VAR_8, Oid VAR_9, bool VAR_10)
{
 ScanKeyData VAR_11[2];
 const char *VAR_12 = FUNC_5(VAR_9);
 ChunkIndexDeleteData VAR_13 = {
  .drop_index = VAR_10,
 };

 FUNC_3(&VAR_11[0],
    VAR_0,
    VAR_2,
    VAR_4,
    FUNC_2(VAR_8->fd.id));
 FUNC_3(&VAR_11[1],
    VAR_1,
    VAR_2,
    VAR_5,
    FUNC_1(VAR_7, FUNC_0(VAR_12)));

 return FUNC_4(VAR_3,
           VAR_11,
           2,
           VAR_6,
           ((void*)0),
           &VAR_13);
}
