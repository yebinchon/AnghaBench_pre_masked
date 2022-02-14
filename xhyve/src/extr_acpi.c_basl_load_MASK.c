
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 void* FUNC_1 (scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (int,void*,size_t) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, uint64_t VAR_4)
{
 struct stat VAR_5;
 void *VAR_6;

 if (FUNC_0(VAR_3, &VAR_5) < 0)
  return (VAR_2);

 VAR_6 = FUNC_1(VAR_1 + VAR_4, ((size_t) VAR_5.st_size));
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 if (FUNC_2(VAR_3, VAR_6, ((size_t) VAR_5.st_size)) < 0)
  return (VAR_2);

 return (0);
}
