
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xvattr_t ;
struct TYPE_4__ {void* xoa_projinherit; void* xoa_nodump; void* xoa_appendonly; void* xoa_immutable; } ;
typedef TYPE_1__ xoptattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct inode {int dummy; } ;
struct TYPE_5__ {int z_pflags; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int,int ) ;
 int FUNC_4 (struct inode*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_15, uint32_t VAR_16, xvattr_t *VAR_17)
{
 uint64_t VAR_18 = FUNC_0(VAR_15)->z_pflags;
 xoptattr_t *VAR_19;

 if (VAR_16 & ~(VAR_5 | VAR_4 | VAR_6 |
     VAR_14))
  return (-VAR_3);

 if (VAR_16 & ~VAR_12)
  return (-VAR_2);

 if ((FUNC_3(VAR_16, VAR_18, VAR_5, VAR_13) ||
     FUNC_3(VAR_16, VAR_18, VAR_4, VAR_11)) &&
     !FUNC_2(VAR_1))
  return (-VAR_2);

 if (!FUNC_4(VAR_15))
  return (-VAR_2);

 FUNC_6(VAR_17);
 VAR_19 = FUNC_5(VAR_17);

 FUNC_1(VAR_17, VAR_8);
 if (VAR_16 & VAR_5)
  VAR_19->xoa_immutable = VAR_0;

 FUNC_1(VAR_17, VAR_7);
 if (VAR_16 & VAR_4)
  VAR_19->xoa_appendonly = VAR_0;

 FUNC_1(VAR_17, VAR_9);
 if (VAR_16 & VAR_6)
  VAR_19->xoa_nodump = VAR_0;

 FUNC_1(VAR_17, VAR_10);
 if (VAR_16 & VAR_14)
  VAR_19->xoa_projinherit = VAR_0;

 return (0);
}
