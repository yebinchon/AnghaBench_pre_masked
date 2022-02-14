
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat_array {int count; int data; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(struct stat_array *VAR_0, unsigned int VAR_1)
{
 uint64_t VAR_2 = 0;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_0[VAR_3].data, VAR_0[VAR_3].count));

 return (VAR_2);
}
