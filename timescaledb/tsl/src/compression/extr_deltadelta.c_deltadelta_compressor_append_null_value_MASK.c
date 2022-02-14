
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * internal; } ;
typedef TYPE_1__ ExtendedCompressor ;
typedef int Compressor ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(Compressor *VAR_0)
{
 ExtendedCompressor *VAR_1 = (ExtendedCompressor *) VAR_0;
 if (VAR_1->internal == ((void*)0))
  VAR_1->internal = FUNC_0();

 FUNC_1(VAR_1->internal);
}
