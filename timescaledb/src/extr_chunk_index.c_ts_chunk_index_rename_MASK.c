
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {char const* oldname; char const* newname; } ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef TYPE_2__ ChunkIndexRenameInfo ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int,int ,int *,TYPE_2__*) ;
 int VAR_6 ;
 char* FUNC_4 (int ) ;

int
FUNC_5(Chunk *VAR_7, Oid VAR_8, const char *VAR_9)
{
 ScanKeyData VAR_10[2];
 const char *VAR_11 = FUNC_4(VAR_8);
 ChunkIndexRenameInfo VAR_12 = {
  .oldname = VAR_11,
  .newname = VAR_9,
 };

 FUNC_2(&VAR_10[0],
    VAR_0,
    VAR_2,
    VAR_4,
    FUNC_1(VAR_7->fd.id));
 FUNC_2(&VAR_10[1],
    VAR_1,
    VAR_2,
    VAR_5,
    FUNC_0(VAR_11));

 return FUNC_3(VAR_3,
           VAR_10,
           2,
           VAR_6,
           ((void*)0),
           &VAR_12);
}
