
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int Chunk ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_1(TupleInfo *VAR_1, void *VAR_2)
{
 Chunk *VAR_3 = VAR_2;

 FUNC_0(VAR_3, VAR_1->tuple, VAR_1->desc);
 return VAR_0;
}
