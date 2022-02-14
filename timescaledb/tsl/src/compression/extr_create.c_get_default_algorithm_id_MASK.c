
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum CompressionAlgorithms { ____Placeholder_CompressionAlgorithms } CompressionAlgorithms ;
struct TYPE_6__ {int * fn_addr; } ;
struct TYPE_5__ {int * fn_addr; } ;
struct TYPE_7__ {TYPE_2__ eq_opr_finfo; TYPE_1__ hash_proc_finfo; } ;
typedef TYPE_3__ TypeCacheEntry ;
typedef int Oid ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int,int) ;

__attribute__((used)) static enum CompressionAlgorithms
FUNC_1(Oid VAR_6)
{
 switch (VAR_6)
 {
  case 134:
  case 135:
  case 133:
  case 132:
  case 138:
  case 129:
  case 128:
  {
   return VAR_1;
  }
  case 137:
  case 136:
  {
   return VAR_3;
  }
  case 131:
  {
   return VAR_0;
  }
  case 130:
  case 139:
  {
   return VAR_2;
  }
  default:
  {

   TypeCacheEntry *VAR_7 =
    FUNC_0(VAR_6, VAR_4 | VAR_5);
   if (VAR_7->hash_proc_finfo.fn_addr == ((void*)0) || VAR_7->eq_opr_finfo.fn_addr == ((void*)0))
    return VAR_0;
   return VAR_2;
  }
 }
}
