
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct send_range {int object; int start_blkid; int eos_marker; scalar_t__ type; } ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct send_range *VAR_3, struct send_range *VAR_4)
{
 uint64_t VAR_5 = VAR_3->object;
 uint64_t VAR_6 = VAR_3->start_blkid;
 uint64_t VAR_7 = VAR_4->object;
 uint64_t VAR_8 = VAR_4->start_blkid;
 int64_t VAR_9 = FUNC_0(VAR_3->eos_marker, VAR_4->eos_marker);
 if (FUNC_2(VAR_9))
  return (VAR_9);
 if (VAR_3->object == 0) {
  VAR_5 = VAR_3->start_blkid * VAR_0;
  VAR_6 = 0;
 }
 if (VAR_4->object == 0) {
  VAR_7 = VAR_4->start_blkid * VAR_0;
  VAR_8 = 0;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_7);
 if (FUNC_1(VAR_9))
  return (VAR_9);
 VAR_9 = FUNC_0(VAR_4->type == VAR_2, VAR_3->type == VAR_2);
 if (FUNC_2(VAR_9))
  return (VAR_9);
 VAR_9 = FUNC_0(VAR_4->type == VAR_1, VAR_3->type == VAR_1);
 if (FUNC_2(VAR_9))
  return (VAR_9);

 return (FUNC_0(VAR_6, VAR_8));
}
