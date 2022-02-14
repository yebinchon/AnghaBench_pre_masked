
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_2__ {size_t tableTime; size_t const decode256Time; } ;


 TYPE_1__** VAR_0 ;

U32 FUNC_0(size_t VAR_1, size_t VAR_2)
{

 U32 const VAR_3 = (U32)(VAR_2 * 16 / VAR_1);
 U32 const VAR_4 = (U32)(VAR_1 >> 8);
 U32 const VAR_5 = VAR_0[VAR_3][0].tableTime + (VAR_0[VAR_3][0].decode256Time * VAR_4);
 U32 VAR_6 = VAR_0[VAR_3][1].tableTime + (VAR_0[VAR_3][1].decode256Time * VAR_4);
 VAR_6 += VAR_6 >> 3;

 return VAR_6 < VAR_5;
}
