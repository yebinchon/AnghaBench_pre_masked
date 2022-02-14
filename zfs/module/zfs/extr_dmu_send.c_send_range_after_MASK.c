
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct send_range {scalar_t__ eos_marker; int object; scalar_t__ type; int start_blkid; int end_blkid; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int __attribute__((unused))
FUNC_3(const struct send_range *VAR_5, const struct send_range *VAR_6)
{
 if (VAR_5->eos_marker == VAR_0)
  return (1);
 if (VAR_6->eos_marker == VAR_0)
  return (-1);

 uint64_t VAR_7 = VAR_5->object;
 uint64_t VAR_8 = VAR_5->object + 1;
 uint64_t VAR_9 = VAR_6->object;
 uint64_t VAR_10 = VAR_6->object + 1;
 if (VAR_7 == 0) {
  FUNC_0(VAR_5->type == VAR_2 || VAR_5->type == VAR_4);
  VAR_7 = VAR_5->start_blkid << VAR_1;
  VAR_8 = VAR_5->end_blkid << VAR_1;
 }
 if (VAR_9 == 0) {
  FUNC_0(VAR_6->type == VAR_2 || VAR_6->type == VAR_4);
  VAR_9 = VAR_6->start_blkid << VAR_1;
  VAR_10 = VAR_6->end_blkid << VAR_1;
 }

 if (VAR_8 <= VAR_9)
  return (-1);
 if (VAR_7 >= VAR_10)
  return (1);
 int64_t VAR_11 = FUNC_1(VAR_6->type == VAR_4, VAR_5->type ==
     VAR_4);
 if (FUNC_2(VAR_11))
  return (VAR_11);
 VAR_11 = FUNC_1(VAR_6->type == VAR_3, VAR_5->type == VAR_3);
 if (FUNC_2(VAR_11))
  return (VAR_11);
 if (VAR_5->end_blkid <= VAR_6->start_blkid)
  return (-1);
 if (VAR_5->start_blkid >= VAR_6->end_blkid)
  return (1);
 return (0);
}
