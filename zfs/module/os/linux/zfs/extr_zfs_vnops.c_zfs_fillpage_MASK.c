
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_6__ {int * z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ u_offset_t ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
typedef int objset_t ;
typedef scalar_t__ loff_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_5, struct page *VAR_6[], int VAR_7)
{
 znode_t *VAR_8 = FUNC_0(VAR_5);
 zfsvfs_t *VAR_9 = FUNC_1(VAR_5);
 objset_t *VAR_10;
 struct page *VAR_11;
 u_offset_t VAR_12, VAR_13;
 size_t VAR_14;
 loff_t VAR_15;
 unsigned VAR_16;
 int VAR_17;

 VAR_10 = VAR_9->z_os;
 VAR_14 = VAR_7 << VAR_4;
 VAR_15 = FUNC_4(VAR_5);
 VAR_12 = FUNC_7(VAR_6[0]);

 if (VAR_12 + VAR_14 > VAR_15)
  VAR_14 = VAR_15 - VAR_12;




 VAR_16 = 0;
 for (VAR_13 = VAR_12 + VAR_14; VAR_12 < VAR_13; VAR_12 += VAR_3) {
  caddr_t VAR_18;

  VAR_11 = VAR_6[VAR_16++];
  VAR_18 = FUNC_5(VAR_11);
  VAR_17 = FUNC_3(VAR_10, VAR_8->z_id, VAR_12, VAR_3, VAR_18,
      VAR_0);
  FUNC_6(VAR_11);
  if (VAR_17) {

   if (VAR_17 == VAR_1)
    VAR_17 = FUNC_2(VAR_2);
   return (VAR_17);
  }
 }

 return (0);
}
