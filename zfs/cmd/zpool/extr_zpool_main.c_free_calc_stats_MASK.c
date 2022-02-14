
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_array {struct stat_array* data; } ;


 int FUNC_0 (struct stat_array*) ;

__attribute__((used)) static void
FUNC_1(struct stat_array *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2].data);

 FUNC_0(VAR_0);
}
