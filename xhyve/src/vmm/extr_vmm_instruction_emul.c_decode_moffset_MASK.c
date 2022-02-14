
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int op_flags; } ;
struct vie {int addrsize; scalar_t__ displacement; TYPE_1__ op; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vie*) ;
 scalar_t__ FUNC_2 (struct vie*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct vie *VAR_1)
{
 int VAR_2, VAR_3;
 uint8_t VAR_4;
 union {
  char buf[8];
  uint64_t u64;
 } VAR_5;

 if ((VAR_1->op.op_flags & VAR_0) == 0)
  return (0);





 VAR_3 = VAR_1->addrsize;
 FUNC_0(VAR_3 == 2 || VAR_3 == 4 || VAR_3 == 8, ("invalid moffset bytes: %d", VAR_3));

 VAR_5.u64 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (FUNC_2(VAR_1, &VAR_4))
   return (-1);

  VAR_5.buf[VAR_2] = (char) VAR_4;
  FUNC_1(VAR_1);
 }
 VAR_1->displacement = (int64_t) VAR_5.u64;
 return (0);
}
