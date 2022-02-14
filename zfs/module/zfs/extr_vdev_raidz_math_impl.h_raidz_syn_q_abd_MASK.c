
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 int FUNC_0 (int const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int const*) ;
 int FUNC_3 (int ,int const*) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_5(void **VAR_4, const void *VAR_5, const size_t VAR_6,
    const size_t VAR_7)
{
 v_t *VAR_8 = (v_t *)VAR_4[VAR_3];
 const v_t *VAR_9 = (v_t *)VAR_5;
 const v_t * const VAR_10 = VAR_9 + (VAR_7 / sizeof (v_t));
 const v_t * const VAR_11 = VAR_8 + (VAR_6 / sizeof (v_t));

 FUNC_4();

 FUNC_1();

 for (; VAR_9 < VAR_10; VAR_9 += VAR_2, VAR_8 += VAR_2) {
  FUNC_0(VAR_9, VAR_0);
  FUNC_2(VAR_0, VAR_1, VAR_8);
 }
 for (; VAR_8 < VAR_11; VAR_8 += VAR_2) {
  FUNC_3(VAR_1, VAR_8);
 }
}
