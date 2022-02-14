
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct HASHCTL {int keysize; int entrysize; int hcxt; } ;
typedef int int32 ;
struct TYPE_3__ {int early_abort; int lockmode; scalar_t__ num_complete_chunks; int * point; int * space; int htab; } ;
typedef int Point ;
typedef int Hyperspace ;
typedef int ChunkScanEntry ;
typedef TYPE_1__ ChunkScanCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,struct HASHCTL*,int) ;

__attribute__((used)) static void
FUNC_1(ChunkScanCtx *VAR_5, Hyperspace *VAR_6, Point *VAR_7)
{
 struct HASHCTL VAR_8 = {
  .keysize = sizeof(int32),
  .entrysize = sizeof(ChunkScanEntry),
  .hcxt = VAR_0,
 };

 VAR_5->htab = FUNC_0("chunk-scan-context", 20, &VAR_8, VAR_3 | VAR_2 | VAR_1);
 VAR_5->space = VAR_6;
 VAR_5->point = VAR_7;
 VAR_5->num_complete_chunks = 0;
 VAR_5->early_abort = 0;
 VAR_5->lockmode = VAR_4;
}
