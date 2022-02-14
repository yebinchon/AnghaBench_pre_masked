
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum zio_compress { ____Placeholder_zio_compress } zio_compress ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,void*,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,void*,void*,size_t,size_t) ;
 scalar_t__ VAR_1 ;

int
FUNC_6(enum zio_compress VAR_2, abd_t *VAR_3, void *VAR_4,
    size_t VAR_5, size_t VAR_6)
{
 void *VAR_7 = FUNC_2(VAR_3, VAR_5);
 int VAR_8 = FUNC_5(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_3, VAR_7, VAR_5);






 FUNC_0(VAR_8);
 if (VAR_1 != 0 &&
     FUNC_4(VAR_1) == 0)
  VAR_8 = FUNC_1(VAR_0);

 return (VAR_8);
}
