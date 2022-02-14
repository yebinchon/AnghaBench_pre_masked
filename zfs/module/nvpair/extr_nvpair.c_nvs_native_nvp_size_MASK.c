
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int nvstream_t ;
struct TYPE_6__ {size_t nvp_size; } ;
typedef TYPE_1__ nvpair_t ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,size_t*) ;
 int FUNC_3 (int *,int ,size_t*) ;

__attribute__((used)) static int
FUNC_4(nvstream_t *VAR_2, nvpair_t *VAR_3, size_t *VAR_4)
{
 uint64_t VAR_5 = VAR_3->nvp_size;

 switch (FUNC_1(VAR_3)) {
 case 129: {
  size_t VAR_6 = 0;

  if (FUNC_3(VAR_2, FUNC_0(VAR_3), &VAR_6) != 0)
   return (VAR_0);

  VAR_5 += VAR_6;
  break;
 }
 case 128: {
  size_t VAR_7;

  if (FUNC_2(VAR_2, VAR_3, &VAR_7) != 0)
   return (VAR_0);

  VAR_5 += VAR_7;
  break;
 }
 default:
  break;
 }

 if (VAR_5 > VAR_1)
  return (VAR_0);

 *VAR_4 = VAR_5;

 return (0);
}
