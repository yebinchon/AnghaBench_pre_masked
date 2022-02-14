
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int compressed_data_storage; } ;
typedef int CompressionStorage ;
typedef size_t CompressionAlgorithms ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;

extern CompressionStorage
FUNC_1(CompressionAlgorithms VAR_4)
{
 if (VAR_4 == VAR_2 || VAR_4 >= VAR_1)
  FUNC_0(VAR_0, "invalid compression algorithm %d", VAR_4);
 return VAR_3[VAR_4].compressed_data_storage;
}
