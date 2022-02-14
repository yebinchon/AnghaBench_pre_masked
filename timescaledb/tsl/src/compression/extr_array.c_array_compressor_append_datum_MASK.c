
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * internal; int element_type; } ;
typedef TYPE_1__ ExtendedCompressor ;
typedef int Datum ;
typedef int Compressor ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(Compressor *VAR_0, Datum VAR_1)
{
 ExtendedCompressor *VAR_2 = (ExtendedCompressor *) VAR_0;
 if (VAR_2->internal == ((void*)0))
  VAR_2->internal = FUNC_0(VAR_2->element_type);

 FUNC_1(VAR_2->internal, VAR_1);
}
