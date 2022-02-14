
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 int FUNC_0 (int const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int const*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ,int ,int const*) ;
 int FUNC_5 (int ,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void
FUNC_7(void **VAR_6, const void *VAR_7, const size_t VAR_8,
    const size_t VAR_9)
{
 v_t *VAR_10 = (v_t *)VAR_6[VAR_4];
 v_t *VAR_11 = (v_t *)VAR_6[VAR_5];
 const v_t * const VAR_12 = VAR_10 + (VAR_8 / sizeof (v_t));
 const v_t *VAR_13 = (v_t *)VAR_7;
 const v_t * const VAR_14 = VAR_13 + (VAR_9 / sizeof (v_t));

 FUNC_6();

 FUNC_1();

 for (; VAR_13 < VAR_14; VAR_13 += VAR_3, VAR_10 += VAR_3, VAR_11 += VAR_3) {
  FUNC_0(VAR_13, VAR_0);
  FUNC_2(VAR_1, VAR_2, VAR_10);
  FUNC_4(VAR_1, VAR_2, VAR_11);
 }
 for (; VAR_10 < VAR_12; VAR_10 += VAR_3, VAR_11 += VAR_3) {
  FUNC_3(VAR_2, VAR_10);
  FUNC_5(VAR_2, VAR_11);
 }
}
