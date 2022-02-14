
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * internal; } ;
typedef TYPE_1__ ExtendedCompressor ;
typedef int Compressor ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *
FUNC_2(Compressor *VAR_0)
{
 ExtendedCompressor *VAR_1 = (ExtendedCompressor *) VAR_0;
 void *VAR_2 = FUNC_0(VAR_1->internal);
 FUNC_1(VAR_1->internal);
 VAR_1->internal = ((void*)0);
 return VAR_2;
}
