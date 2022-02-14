
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int ,char const*,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, const char *VAR_3)
{
 nvlist_t *VAR_4 = FUNC_4();
 nvlist_t *VAR_5 = FUNC_4();
 nvlist_t *VAR_6 = FUNC_4();

 FUNC_3(VAR_6, VAR_3, "libzfs_check_hold");
 FUNC_2(VAR_4, "holds", VAR_6);
 FUNC_1(VAR_5, "cleanup_fd", VAR_1);

 FUNC_0(VAR_0, VAR_2, VAR_4, VAR_5, 0);

 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
 FUNC_5(VAR_4);
}
