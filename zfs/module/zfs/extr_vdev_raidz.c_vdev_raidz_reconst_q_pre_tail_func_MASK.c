
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dst ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 uint64_t *VAR_3 = VAR_0;
 uint64_t VAR_4;
 int VAR_5 = VAR_1 / sizeof (VAR_3[0]);

 for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_3++) {

  FUNC_0(*VAR_3, VAR_4);
 }

 return (0);
}
