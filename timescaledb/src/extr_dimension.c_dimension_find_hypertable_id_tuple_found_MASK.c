
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static ScanTupleResult
FUNC_1(TupleInfo *VAR_2, void *VAR_3)
{
 int32 *VAR_4 = VAR_3;
 bool VAR_5 = 0;

 *VAR_4 = FUNC_0(VAR_2->tuple, VAR_0, VAR_2->desc, &VAR_5);

 return VAR_1;
}
