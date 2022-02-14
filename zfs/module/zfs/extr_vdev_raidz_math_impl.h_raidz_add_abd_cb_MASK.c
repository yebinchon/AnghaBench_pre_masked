
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int const*,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2, void *VAR_3, size_t VAR_4, void *VAR_5)
{
 v_t *VAR_6 = (v_t *)VAR_2;
 const v_t *VAR_7 = (v_t *)VAR_3;
 size_t VAR_8;

 FUNC_0();

 (void) VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_4 / sizeof (v_t); VAR_8 += (2 * VAR_1)) {
  FUNC_1(VAR_6 + VAR_8, VAR_0);
  FUNC_3(VAR_7 + VAR_8, VAR_0);
  FUNC_2(VAR_6 + VAR_8, VAR_0);

  FUNC_1(VAR_6 + VAR_8 + VAR_1, VAR_0);
  FUNC_3(VAR_7 + VAR_8 + VAR_1, VAR_0);
  FUNC_2(VAR_6 + VAR_8 + VAR_1, VAR_0);
 }

 return (0);
}
