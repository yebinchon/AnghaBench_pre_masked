
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * (* compressor_for_type ) (int ) ;} ;
typedef int Oid ;
typedef int Compressor ;
typedef size_t CompressionAlgorithms ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static Compressor *
FUNC_2(CompressionAlgorithms VAR_3, Oid VAR_4)
{
 if (VAR_3 >= VAR_1)
  FUNC_0(VAR_0, "invalid compression algorithm %d", VAR_3);

 return VAR_2[VAR_3].compressor_for_type(VAR_4);
}
