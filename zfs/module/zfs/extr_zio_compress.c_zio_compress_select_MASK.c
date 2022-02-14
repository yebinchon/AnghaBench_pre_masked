
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef enum zio_compress { ____Placeholder_zio_compress } zio_compress ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ) ;

enum zio_compress
FUNC_2(spa_t *VAR_6, enum zio_compress VAR_7,
    enum zio_compress VAR_8)
{
 enum zio_compress VAR_9;

 FUNC_0(VAR_7 < VAR_1);
 FUNC_0(VAR_8 < VAR_1);
 FUNC_0(VAR_8 != VAR_2);

 VAR_9 = VAR_7;
 if (VAR_9 == VAR_2)
  VAR_9 = VAR_8;

 if (VAR_9 == VAR_5) {
  if (FUNC_1(VAR_6, VAR_0))
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_3;
 }

 return (VAR_9);
}
