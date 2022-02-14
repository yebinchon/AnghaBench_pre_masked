
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
struct TYPE_2__ {int ci_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_7 ;

enum zio_checksum
FUNC_2(spa_t *VAR_8, enum zio_checksum VAR_9,
    enum zio_checksum VAR_10)
{
 FUNC_0((VAR_9 & VAR_3) < VAR_1);
 FUNC_0((VAR_10 & VAR_3) < VAR_1);
 FUNC_0(VAR_10 != VAR_2 && VAR_10 != VAR_5);

 if (VAR_9 == VAR_2)
  return (VAR_10);

 if (VAR_9 == VAR_5)
  return (FUNC_1(VAR_8));

 if (VAR_9 == (VAR_5 | VAR_6))
  return (FUNC_1(VAR_8) | VAR_6);

 FUNC_0((VAR_7[VAR_9 & VAR_3].ci_flags &
     VAR_0) ||
     (VAR_9 & VAR_6) || VAR_9 == VAR_4);

 return (VAR_9);
}
