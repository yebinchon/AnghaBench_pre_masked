
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int const*) ;
 int FUNC_4 (int ,int ,int const*) ;
 int FUNC_5 (int ,int const*) ;

__attribute__((used)) static void
FUNC_6(void **VAR_3, const void *VAR_4, const size_t VAR_5,
    const size_t VAR_6)
{
 v_t *VAR_7 = (v_t *)VAR_3[0];
 v_t *VAR_8 = (v_t *)VAR_3[1];
 const v_t *VAR_9 = (v_t *)VAR_4;
 const v_t * const VAR_10 = VAR_9 + (VAR_6 / sizeof (v_t));
 const v_t * const VAR_11 = VAR_8 + (VAR_5 / sizeof (v_t));

 FUNC_0();

 FUNC_2();

 for (; VAR_9 < VAR_10; VAR_9 += VAR_2, VAR_7 += VAR_2,
     VAR_8 += VAR_2) {
  FUNC_1(VAR_9, VAR_1);
  FUNC_3(VAR_1, VAR_0, VAR_7);
  FUNC_4(VAR_1, VAR_0, VAR_8);
 }
 for (; VAR_8 < VAR_11; VAR_8 += VAR_2) {
  FUNC_5(VAR_0, VAR_8);
 }
}
