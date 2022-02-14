
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned int const,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2, size_t VAR_3, void *VAR_4)
{
 const unsigned VAR_5 = *((unsigned *)VAR_4);
 v_t *VAR_6 = (v_t *)VAR_2;
 size_t VAR_7;

 FUNC_2();

 for (VAR_7 = 0; VAR_7 < VAR_3 / sizeof (v_t); VAR_7 += (2 * VAR_1)) {
  FUNC_0(VAR_6 + VAR_7, VAR_0);
  FUNC_1(VAR_5, VAR_0);
  FUNC_3(VAR_6 + VAR_7, VAR_0);

  FUNC_0(VAR_6 + VAR_7 + VAR_1, VAR_0);
  FUNC_1(VAR_5, VAR_0);
  FUNC_3(VAR_6 + VAR_7 + VAR_1, VAR_0);
 }

 return (0);
}
