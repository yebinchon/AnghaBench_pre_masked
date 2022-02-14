
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zi_object; int zi_objset; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int zfs_handle_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, uint64_t VAR_4, zinject_record_t *VAR_5)
{
 zfs_handle_t *VAR_6;

 if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1)) == ((void*)0))
  return (-1);

 VAR_5->zi_objset = FUNC_2(VAR_6, VAR_0);
 VAR_5->zi_object = VAR_4;

 FUNC_0(VAR_6);

 return (0);
}
