
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct TYPE_4__ {int lrc_txtype; } ;
struct TYPE_5__ {TYPE_1__ lr_common; int lr_doid; } ;
typedef TYPE_2__ lr_remove_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;


 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,char*,int *,int ,int) ;
 int FUNC_6 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4, void *VAR_5, boolean_t VAR_6)
{
 zfsvfs_t *VAR_7 = VAR_4;
 lr_remove_t *VAR_8 = VAR_5;
 char *VAR_9 = (char *)(VAR_8 + 1);
 znode_t *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 if (VAR_6)
  FUNC_2(VAR_8, sizeof (*VAR_8));

 if ((VAR_11 = FUNC_6(VAR_7, VAR_8->lr_doid, &VAR_10)) != 0)
  return (VAR_11);

 if (VAR_8->lr_common.lrc_txtype & VAR_2)
  VAR_12 |= VAR_1;

 switch ((int)VAR_8->lr_common.lrc_txtype) {
 case 129:
  VAR_11 = FUNC_4(FUNC_1(VAR_10), VAR_9, VAR_3, VAR_12);
  break;
 case 128:
  VAR_11 = FUNC_5(FUNC_1(VAR_10), VAR_9, ((void*)0), VAR_3, VAR_12);
  break;
 default:
  VAR_11 = FUNC_0(VAR_0);
 }

 FUNC_3(FUNC_1(VAR_10));

 return (VAR_11);
}
