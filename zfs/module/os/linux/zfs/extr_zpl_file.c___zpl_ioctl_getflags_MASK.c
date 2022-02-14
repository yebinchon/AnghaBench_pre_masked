
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct inode {int dummy; } ;
struct TYPE_2__ {int z_pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static uint32_t
FUNC_1(struct inode *VAR_9)
{
 uint64_t VAR_10 = FUNC_0(VAR_9)->z_pflags;
 uint32_t VAR_11 = 0;

 if (VAR_10 & VAR_5)
  VAR_11 |= VAR_1;

 if (VAR_10 & VAR_3)
  VAR_11 |= VAR_0;

 if (VAR_10 & VAR_6)
  VAR_11 |= VAR_2;

 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_8;

 return (VAR_11 & VAR_4);
}
