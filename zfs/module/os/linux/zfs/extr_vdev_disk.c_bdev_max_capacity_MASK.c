
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct block_device {int bd_inode; struct block_device* bd_contains; int * bd_part; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(struct block_device *VAR_4, uint64_t VAR_5)
{
 uint64_t VAR_6;
 int64_t VAR_7;

 if (VAR_5 && VAR_4->bd_part != ((void*)0) && VAR_4 != VAR_4->bd_contains) {
  VAR_7 = FUNC_2(VAR_4->bd_contains->bd_inode) -
      ((VAR_0 + VAR_1 +
      VAR_2) << VAR_3);
  VAR_6 = FUNC_0(VAR_7, FUNC_1(VAR_4));
 } else {
  VAR_6 = FUNC_1(VAR_4);
 }

 return (VAR_6);
}
