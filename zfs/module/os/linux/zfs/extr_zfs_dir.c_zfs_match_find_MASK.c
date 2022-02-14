
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_8__ {scalar_t__ z_norm; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint64_t ;
struct TYPE_9__ {char* pn_buf; size_t pn_bufsize; } ;
typedef TYPE_3__ pathname_t ;
typedef int matchtype_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int,int,int *) ;
 int FUNC_2 (int ,int ,char*,int,int,int *,int ,char*,size_t,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(zfsvfs_t *VAR_3, znode_t *VAR_4, char *VAR_5, matchtype_t VAR_6,
    boolean_t VAR_7, int *VAR_8, pathname_t *VAR_9, uint64_t *VAR_10)
{
 boolean_t VAR_11 = VAR_0;
 int VAR_12;

 if (VAR_3->z_norm) {
  size_t VAR_13 = 0;
  char *VAR_14 = ((void*)0);

  if (VAR_9) {
   VAR_14 = VAR_9->pn_buf;
   VAR_13 = VAR_9->pn_bufsize;
  }





  VAR_12 = FUNC_2(VAR_3->z_os, VAR_4->z_id, VAR_5, 8, 1,
      VAR_10, VAR_6, VAR_14, VAR_13, &VAR_11);
 } else {
  VAR_12 = FUNC_1(VAR_3->z_os, VAR_4->z_id, VAR_5, 8, 1, VAR_10);
 }
 if (VAR_12 == VAR_2)
  VAR_12 = 0;

 if (VAR_3->z_norm && !VAR_12 && VAR_8)
  *VAR_8 = VAR_11 ? VAR_1 : 0;

 *VAR_10 = FUNC_0(*VAR_10);

 return (VAR_12);
}
