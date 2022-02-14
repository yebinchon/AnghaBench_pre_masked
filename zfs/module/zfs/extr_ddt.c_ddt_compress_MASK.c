
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t (* ci_compress ) (void*,int*,size_t,size_t,int ) ;int ci_level; } ;
typedef TYPE_1__ zio_compress_info_t ;
typedef int uchar_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int*,size_t) ;
 size_t FUNC_2 (void*,int*,size_t,size_t,int ) ;
 TYPE_1__* VAR_4 ;

size_t
FUNC_3(void *VAR_5, uchar_t *VAR_6, size_t VAR_7, size_t VAR_8)
{
 uchar_t *VAR_9 = VAR_6++;
 int VAR_10 = VAR_3;
 zio_compress_info_t *VAR_11 = &VAR_4[VAR_10];
 size_t VAR_12;

 FUNC_0(VAR_8 >= VAR_7 + 1);

 VAR_12 = VAR_11->ci_compress(VAR_5, VAR_6, VAR_7, VAR_8 - 1, VAR_11->ci_level);

 if (VAR_12 == VAR_7) {
  VAR_10 = VAR_2;
  FUNC_1(VAR_5, VAR_6, VAR_7);
 }

 *VAR_9 = VAR_10;

 if (VAR_1)
  *VAR_9 |= VAR_0;

 return (VAR_12 + 1);
}
