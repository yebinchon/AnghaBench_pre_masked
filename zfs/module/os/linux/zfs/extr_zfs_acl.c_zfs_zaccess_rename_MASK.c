
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_pflags; } ;
typedef TYPE_1__ znode_t ;
typedef int cred_t ;
struct TYPE_12__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_9__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int *) ;

int
FUNC_5(znode_t *VAR_5, znode_t *VAR_6, znode_t *VAR_7,
    znode_t *VAR_8, cred_t *VAR_9)
{
 int VAR_10;
 int VAR_11;

 if (VAR_6->z_pflags & VAR_4)
  return (FUNC_0(VAR_3));

 VAR_10 = FUNC_1(FUNC_2(VAR_6)->i_mode) ?
     VAR_1 : VAR_0;
 if ((VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_9)))
  return (VAR_11);




 if (VAR_8) {
  if ((VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9)))
   return (VAR_11);
 }




 VAR_11 = FUNC_3(VAR_7, VAR_10, 0, VAR_2, VAR_9);

 return (VAR_11);
}
