
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct TYPE_6__ {int lr_offset; int lr_length; int lr_foid; } ;
typedef TYPE_1__ lr_truncate_t ;
struct TYPE_7__ {int l_len; int l_start; int l_whence; int l_type; } ;
typedef TYPE_2__ flock64_t ;
typedef int fl ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,TYPE_2__*,int,int ,int ) ;
 int FUNC_5 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_6(void *VAR_6, void *VAR_7, boolean_t VAR_8)
{
 zfsvfs_t *VAR_9 = VAR_6;
 lr_truncate_t *VAR_10 = VAR_7;
 znode_t *VAR_11;
 flock64_t VAR_12;
 int VAR_13;

 if (VAR_8)
  FUNC_1(VAR_10, sizeof (*VAR_10));

 if ((VAR_13 = FUNC_5(VAR_9, VAR_10->lr_foid, &VAR_11)) != 0)
  return (VAR_13);

 FUNC_2(&VAR_12, sizeof (VAR_12));
 VAR_12.l_type = VAR_3;
 VAR_12.l_whence = VAR_4;
 VAR_12.l_start = VAR_10->lr_offset;
 VAR_12.l_len = VAR_10->lr_length;

 VAR_13 = FUNC_4(FUNC_0(VAR_11), VAR_2, &VAR_12, VAR_1 | VAR_0,
     VAR_10->lr_offset, VAR_5);

 FUNC_3(FUNC_0(VAR_11));

 return (VAR_13);
}
