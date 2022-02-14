
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef int ChunkIndexMapping ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *,int,int ,int *,int *,int ) ;
 int VAR_7 ;
 char* FUNC_6 (int ) ;
 int VAR_8 ;

bool
FUNC_7(Chunk *VAR_9, Oid VAR_10, ChunkIndexMapping *VAR_11)
{
 int VAR_12;
 ScanKeyData VAR_13[2];
 const char *VAR_14 = FUNC_6(VAR_10);

 FUNC_0(VAR_11 != ((void*)0));

 FUNC_4(&VAR_13[0],
    VAR_1,
    VAR_3,
    VAR_5,
    FUNC_3(VAR_9->fd.id));
 FUNC_4(&VAR_13[1],
    VAR_2,
    VAR_3,
    VAR_6,
    FUNC_2(VAR_8, FUNC_1(VAR_14)));

 VAR_12 = FUNC_5(VAR_4,
         VAR_13,
         2,
         VAR_7,
         ((void*)0),
         VAR_11,
         VAR_0);

 return VAR_12 > 0;
}
