
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int const*) ;
 int FUNC_4 (int ,int ,int const*) ;
 int FUNC_5 (int ,int const*) ;
 int FUNC_6 (int ,int ,int const*) ;
 int FUNC_7 (int ,int const*) ;

__attribute__((used)) static void
FUNC_8(void **VAR_4, const void *VAR_5, const size_t VAR_6,
    const size_t VAR_7)
{
 v_t *VAR_8 = (v_t *)VAR_4[0];
 v_t *VAR_9 = (v_t *)VAR_4[1];
 v_t *VAR_10 = (v_t *)VAR_4[VAR_0];
 const v_t *VAR_11 = (v_t *)VAR_5;
 const v_t * const VAR_12 = VAR_11 + (VAR_7 / sizeof (v_t));
 const v_t * const VAR_13 = VAR_9 + (VAR_6 / sizeof (v_t));

 FUNC_0();

 FUNC_2();

 for (; VAR_11 < VAR_12; VAR_11 += VAR_3, VAR_8 += VAR_3,
     VAR_9 += VAR_3, VAR_10 += VAR_3) {
  FUNC_1(VAR_11, VAR_2);
  FUNC_3(VAR_2, VAR_1, VAR_8);
  FUNC_4(VAR_2, VAR_1, VAR_9);
  FUNC_6(VAR_2, VAR_1, VAR_10);
 }
 for (; VAR_9 < VAR_13; VAR_9 += VAR_3, VAR_10 += VAR_3) {
  FUNC_5(VAR_1, VAR_9);
  FUNC_7(VAR_1, VAR_10);
 }
}
