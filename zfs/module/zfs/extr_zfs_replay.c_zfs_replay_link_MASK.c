
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct TYPE_4__ {int lrc_txtype; } ;
struct TYPE_5__ {TYPE_1__ lr_common; int lr_link_obj; int lr_doid; } ;
typedef TYPE_2__ lr_link_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,char*,int ,int) ;
 int FUNC_4 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3, void *VAR_4, boolean_t VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_3;
 lr_link_t *VAR_7 = VAR_4;
 char *VAR_8 = (char *)(VAR_7 + 1);
 znode_t *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 if (VAR_5)
  FUNC_1(VAR_7, sizeof (*VAR_7));

 if ((VAR_11 = FUNC_4(VAR_6, VAR_7->lr_doid, &VAR_9)) != 0)
  return (VAR_11);

 if ((VAR_11 = FUNC_4(VAR_6, VAR_7->lr_link_obj, &VAR_10)) != 0) {
  FUNC_2(FUNC_0(VAR_9));
  return (VAR_11);
 }

 if (VAR_7->lr_common.lrc_txtype & VAR_1)
  VAR_12 |= VAR_0;

 VAR_11 = FUNC_3(FUNC_0(VAR_9), FUNC_0(VAR_10), VAR_8, VAR_2, VAR_12);

 FUNC_2(FUNC_0(VAR_10));
 FUNC_2(FUNC_0(VAR_9));

 return (VAR_11);
}
